#include <stdio.h>
#include "pico/stdlib.h"
#include "matriz_rgb.h"
#include "hardware/timer.h"
#include "animacao_contagem.h"

#define LED_RED 13 // LED 1 conectado ao pino 13
#define LED_BLUE 12 // LED 2 conectado ao pino 12
#define LED_GREEN 11 // LED 3 conectado ao pino 11
const uint button_A = 5; // Botão A = 5, Botão B = 6 
const uint button_B = 6; // Botão A = 5, Botão B = 6 
#define tempo 100

// Variáveis globais
int a = -1;
static volatile uint32_t last_time = 0; // Armazena o tempo do último evento (em microssegundos)
bool botao_a_pressionado = false;
bool botao_b_pressionado = false;

// Função de interrupção com debouncing
void gpio_irq_handler(uint gpio, uint32_t events)
{
    // Obtém o tempo atual em microssegundos
    uint32_t current_time = to_us_since_boot(get_absolute_time());
    // Verifica se passou tempo suficiente desde o último evento
    if (current_time - last_time > 300000) // 300 ms de debouncing
    {
        last_time = current_time; // Atualiza o tempo do último evento
        if (gpio == button_A) {
            botao_a_pressionado = true;
            printf("Botão A apertado \n ");
        }
        else if (gpio == button_B) {
            botao_b_pressionado = true;
            printf("Botão B apertado \n ");
            
        }
                             
    }
}

int main() {

    // Inicializa entradas e saídas.
    stdio_init_all();

    // Inicializa matriz de LEDs NeoPixel.
    npInit(LED_PIN);

    // Inicializa o LED
    gpio_init(LED_RED);              // Inicializa o pino do LED
    gpio_set_dir(LED_RED, GPIO_OUT); // Configura o pino como saída

    // Inicializa o botão
    gpio_init(button_A);
    gpio_set_dir(button_A, GPIO_IN); // Configura o pino como entrada
    gpio_pull_up(button_A);          // Habilita o pull-up interno

    gpio_init(button_B);
    gpio_set_dir(button_B, GPIO_IN); // Configura o pino como entrada
    gpio_pull_up(button_B);          // Habilita o pull-up interno

    // Configuração da interrupção com callback
    gpio_set_irq_enabled_with_callback(button_A, GPIO_IRQ_EDGE_FALL, true, &gpio_irq_handler);
    gpio_set_irq_enabled_with_callback(button_B, GPIO_IRQ_EDGE_FALL, true, &gpio_irq_handler);

 
  while (true) {
    if (botao_a_pressionado) {
            if (a > 0) a--;
            printf("A = %d ", a);
            animacao_contador(a);
            botao_a_pressionado = false;  
    }

    if (botao_b_pressionado) {
            if (a < 9 )a++; 
            printf("A = %d ", a);
            animacao_contador(a);  
            botao_b_pressionado = false; 
    }

    gpio_put(LED_RED, true);
    sleep_ms(tempo);
    gpio_put(LED_RED, false);
    sleep_ms(tempo);
    
  }
}
