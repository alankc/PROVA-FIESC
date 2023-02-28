# Questão 1
O FreeRTOS é um sistema operacional embarcado largamente utilizado em aplicações que necessitam de muitas tarefas sendo executadas ao mesmo tempo no microcontrolador e em aplicações com tempo real.

Utilizando a versão do FreeRTOS para computadores (Windows ou Linux) implente uma aplicação com às seguintes características:
- Tenha uma variável do tipo inteiro que várias tarefas possam acessar;
- Tarefa 1, Leia a variável compartilhada incremente o valor 1 e imprima o seu valor na serial e salve a variável com o seu novo valor;
- Tarefa 2, Leia a variável compartilhada decremente o valor 1 e imprima o seu valor na serial e salve a variável com o seu novo valor;

## Informações Gerais:
- Na pasta src você irá encontrar a implementação das tarefas no arquivo list_of_tasks.c

## Para compilar e executar:

Abra o terminal e execute os comandos: 
- cd
- echo export FREERTOS_PATH=caminho_ate_FreeRTOS/nome_da_pasta_do_FreeRTOS >> .bashrc
    - Exemplo: Com o FreeRTOSv202212.00 na pasta pasta home: echo export FREERTOS_PATH=~/FreeRTOSv202212.00 >> .bashrc
- source .profile
- Para verificar se funcionou: echo $FREERTOS_PATH
    - Deve retornar o caminho
- Para executar, dentro da pasta Q1, execute: ./build/questao1
