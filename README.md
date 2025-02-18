# myBool

**myBool** é uma reinterpretação da biblioteca padrão `stdbool.h` da linguagem C, criada para fins didáticos e experimentais. Esta biblioteca tem como objetivo proporcionar uma maneira mais legível e acessível de trabalhar com valores booleanos e operações relacionadas.

### Objetivo do Projeto
O projeto explora o uso de funções `inline` e redefine operadores booleanos para simplificar o código e melhorar a legibilidade. 

**Atenção:** Esta implementação foi criada meramente para fins didáticos e não deve ser utilizada em projetos reais, pois não segue padrões recomendados para produção e pode introduzir ambiguidades ou erros.

### Como Funciona
A biblioteca `myBool.h` redefine o tipo booleano e oferece operações bit a bit e lógicas, além de uma função para converter valores booleanos em strings. A utilização de funções `inline` proporciona um desempenho melhor em comparação com macros tradicionais.

### Como Compilar e Utilizar
1. **Clonar o repositório**:
   ```bash
   git clone https://github.com/seu_usuario/myBool.git
   ```

2. **Para compilar o código e gerar a biblioteca estática**:
   ```bash
   make
   ```

4. **Executar o programa**:
   ```bash
   make run
   ```
5. **Para remover o executável**
   ```bash
   make clean
   ```