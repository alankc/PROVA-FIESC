# Questão 2
Implemente uma classe em C++ e em Python que gerencie um buffer circular, com às seguintes funcionalidades:
- possível definir o tamanho total do buffer, verificar a quantidade de dados no buffer, adicionar e remover dados;
- O tipo de dados gerenciado pela a classe deve ser genérico;
- A classe deve ter teste unitário testando, utilize frameworks ou biblioteca para auxiliar no desenvolvimento desta tarefa (este item é indispensável nesta questão).

# Implementação em python

- Arquivos:
    - buffer.py: implementa o buffer circular
    - test.py: implementa os testes unitários
- Os testes foram realizados utilizando o unittest
- Para executar, use o comando: python -m unittest test.py
- Obs.: Apesar de ser um buffer circular, por simplicidade não implementei a funcionalidade de sobrescrever os elementos

# Implementação em C++

- Arquivos:
    - buffer.cpp: implementa o buffer circular
    - test.cpp: implementa os testes unitários
- Os testes foram realizados utilizando o unittest
- Para executar, use o comando: python -m unittest test.py