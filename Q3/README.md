# Questão 3
-Você recebeu um arquivo chamado "enigma" junto com a prova, este é uma biblioteca. Escreva uma aplicação que utilize as funções desta biblioteca, compile está aplicação utilizando somente linha de comando, descreva os comandos utilizados e os passos que foram utilizados para resover este problema.

-Explique a diferença em linkagem estática e dinámica.

Verifique se o arquivo que você recebeu está integro.
md5sum enigma
81808a8ff591865c488f2ca93eb3090f  enigma
81808a8ff591865c488f2ca93eb3090f

# Resolução

Para resolver o problema eu rodei o comando "nm enigma -C" que me deu como resultado o seguinte:

- 0000000000000000 T subtraction(float, float)
- 000000000000004e T multiplication(float, float)
- 000000000000001a T sum(float, float)
- 0000000000000034 T division(float, float)
- Então eu assumi que como resultado estas funções retornariam um float.

Então criei programa em C++ colocando os cabeçalhos das funções e sinalizado que eles viriam de fonte externa:
- extern float subtraction(float, float);
- extern float multiplication(float, float);
- extern float sum(float, float);
- extern float division(float, float);

Depois compilei o códico considerando uma "enigma" como uma biblioteca estática:
- g++ -L. -l:enigma main.cpp
- O "-L." diz ao compilador que a biblioteca estática está na pasta em que estou compilando
- O "-l:enigma" diz o compilador o nome do arquivo da biblioteca estática.
    - Obs.: Se utilizar apenas -lenigma o compilador não encontrará o arquivo pois ele não possui extensão .a, .o ou .so
- Para executar: ./a.out 

Confesso que primeiramente tentei fazer a aplicação em C, mas o compilador com o comando:
- gcc -L. -l:enigma main.cpp
- Estava dando o erro:
    - /usr/bin/ld: /tmp/cczS9PBd.o: na função "main":
    - main.c:(.text+0x1b): referência não definida para "subtraction"
    - /usr/bin/ld: main.c:(.text+0x58): referência não definida para "multiplication"
    - /usr/bin/ld: main.c:(.text+0x95): referência não definida para "sum"
    - /usr/bin/ld: main.c:(.text+0xd2): referência não definida para "division"
- Então decidi pular para o g++


# Diferença em linkagem estática e dinâmica.

## Linkagem estática
Na linkagem estática, a biblioteca já compilada é embarcada no programa. Portanto, todas as funcionalidades da biblioteca passam a fazer parte do programa, pois a biblioteca se torna parte do programa. Isso é interessante, pois não é necessário que o usuário do programa tenha a biblioteca instalada em seu computador. Porém, se for necessária uma atualização na biblioteca, todo o programa terá que ser recompilado.

## Linkagem dinâmica
Na linkagem dinâmica, a biblioteca já compilada é carregada na aplicação em tempo de execução. Desta forma a biblioteca não faz parte do programa, o programa apenas irá carregar as funcionalidades da biblioteca em tempo de execução conforme a necessidade. A linkagem dinâmica é interessante para reduzir o tamanho da aplicação final e também para atualizações. Quando for necessário atualizar funcionalidades da biblioteca, o programa que a utiliza não precisa ser recompilado.