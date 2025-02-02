# Projeto de Interrupções [Unidade 04 - Capítulo 04] 

##### Para assistir o resultado do projeto [CLIQUE AQUI](https://drive.google.com/file/d/1dZjip5uzi3j4ZXtbFPlB4VFSfgd-aEAi/view?usp=sharing)
##### Observe abaixo o hardware simulado.

![image](https://github.com/user-attachments/assets/e1802408-0989-4b1f-af38-a32830ac830c)

#### Esse projeto consiste em controlar LEDs e animar um contador com base na interação com botões. No projeto, ao pressionar os botões A e B, o valor de um contador é alterado e animado. O LED indicado pisca durante a interação.

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

## Pré-requisitos para abrir o projeto

Para configurar o ambiente de desenvolvimento, siga as instruções abaixo:

### 1. Instalar o Visual Studio Code
- Acesse o site oficial e faça o download: [Visual Studio Code](https://code.visualstudio.com/).
- Instale o programa e configure conforme necessário.
- Adicione a extensão [Wokwi](https://marketplace.visualstudio.com/items?itemName=Wokwi.wokwi-vscode) e faça sua integração com o VS CODE para simular o hardware.

### 2. Instalar o CMake
- Baixe o instalador do CMake: [CMake](https://cmake.org/download/).
- Durante a instalação, marque a opção **"Add CMake to the system PATH"**.
- Conclua a instalação.

### 3. Instalar o GCC para ARM
- Baixe o compilador ARM GNU em: [GCC ARM Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm).
- Após a instalação, adicione o diretório do executável ao **PATH**:
  - Vá para **Configurações do Sistema > Variáveis de Ambiente**.
  - Edite a variável `Path` e adicione:
    ```
    C:\Program Files (x86)\Arm GNU Toolchain\<versão>\bin
    ```
  - Substitua `<versão>` pela versão instalada.

### 4. Instalar o Git
- Faça o download: [Git para Windows](https://git-scm.com/).
- Instale o programa e configure-o.
- Abra o terminal (Git Bash ou CMD) e configure seu nome e e-mail:
  ```bash
  git config --global user.name "Seu Nome"
  git config --global user.email "seu.email@exemplo.com"

### 5. Instale o Raspberry Pi Pico SDK 
- Faça o download aqui: [Pico Setup Windows](https://github.com/raspberrypi/pico-setup-windows?tab=readme-ov-file).
- Instale o [Zadig](https://zadig.akeo.ie/) para configuração de drivers
