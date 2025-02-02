# Projeto de Interrupções [Unidade 04 - Capítulo 04] 

#### Esse projeto consiste em controlar LEDs e animar um contador com base na interação com botões. No projeto, ao pressionar os botões A e B, o valor de um contador é alterado e animado. O LED indicado pisca durante a interação.

##### Observe abaixo o hardware simulado.

![image](https://github.com/user-attachments/assets/e1802408-0989-4b1f-af38-a32830ac830c)

## Funcionalidade do Projeto:
Botão A (Decrementa o contador):
Ao pressionar o botão A, o contador diminui de 9 até 0, com a animação correspondente.
Botão B (Incrementa o contador):
Ao pressionar o botão B, o contador aumenta de 0 até 9, com a animação correspondente.
LED Indicador (Pisca com frequência definida):

Um LED acende e apaga alternadamente enquanto o contador é atualizado.

## Comportamento do sistema:
O código utiliza um mecanismo de interrupção para detectar a pressão dos botões e, assim, atualizar o contador.
O contador é animado e exibido no terminal.
O LED RED (conectado ao pino 13) pisca 5 vezes por segundo enquanto o sistema está em funcionamento.

## Requisitos  

- Microcontrolador: Raspberry Pi Pico ou Raspberry Pi Pico W (opcional)
- Placa de Desenvolvimento: BitDogLab (opcional).
- Conta Criada no Wokwi Simulator
- Editor de Código: Visual Studio Code (VS Code).
- SDK do Raspberry Pi Pico configurado no sistema.
- Ferramentas de build: CMake e Ninja.

## Instruçõess para abrir o projeto

Para configurar o ambiente de desenvolvimento, siga as instruções abaixo:

### 1. Instalar o Visual Studio Code
- Acesse o site oficial e faça o download: [Visual Studio Code](https://code.visualstudio.com/).
- Instale o programa e configure conforme necessário.
- Adicione a extensão [Wokwi](https://marketplace.visualstudio.com/items?itemName=Wokwi.wokwi-vscode) e faça sua integração com o VS CODE para simular o hardware.

### 2. Instale as dependências
As extensões recomendadas são:
- C/C++ (Microsoft).
- CMake Tools.
- Wokwi Simulator.
- Raspberry Pi Pico.
  
### 3. Clone o Repositório
Clone o repositório para o seu computador:
https://github.com/KimberllyAlves/contagem_matriz.git

### 4. Teste no Simulador Wokwi Integrado ao VS Code

- Abra o arquivo diagram.json no Visual Studio Code.
- Clique no botão "Play" disponível na interface.

### 5. Teste no Hardware Real
- Conecte a placa ao computador no modo BOTSEEL
- Compile o projeto no VS Code utilizando a extensão do Raspberry Pi Pico W
- Execute o projeto clicando em Run Project USB, localizado abaixo do botão Compile Project.

## Vídeo de demonstração 

##### Para assistir o resultado do projeto [CLIQUE AQUI](https://drive.google.com/file/d/1dZjip5uzi3j4ZXtbFPlB4VFSfgd-aEAi/view?usp=sharing)
