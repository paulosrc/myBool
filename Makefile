CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

# Nome da biblioteca e executável
LIB_NAME = mybool.a
EXEC_NAME = test

# Arquivos de objeto
OBJ_FILES = mybool.o main.o

# Regra padrão
all: $(LIB_NAME) $(EXEC_NAME)

# Compilar a biblioteca estática
$(LIB_NAME): mybool.o
	ar rcs $@ $^

# Compilar o executável
$(EXEC_NAME): $(OBJ_FILES)
	$(CC) -o $@ $(OBJ_FILES)

# Compilar o arquivo .c da biblioteca
mybool.o: src/mybool.c
	$(CC) $(CFLAGS) -c src/mybool.c -o mybool.o

# Compilar o arquivo de teste
main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o main.o

# Limpar os arquivos gerados
clean:
	rm -f $(OBJ_FILES) $(LIB_NAME) $(EXEC_NAME)

.PHONY: all clean