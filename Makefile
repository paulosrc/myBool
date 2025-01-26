# Variáveis
CC = gcc
CFLAGS = -Iinclude
TARGET = test/test_program
SRC = test/test.c

# Regra padrão: compilar e gerar o executável
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET) $(CFLAGS)

# Regra para executar os testes
run: all
	./$(TARGET)

# Limpa os arquivos gerados
clean:
	rm -f $(TARGET)

# Evita que o Make interprete arquivos com esses nomes como regras
.PHONY: all run clean