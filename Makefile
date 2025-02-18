CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

# Nome da biblioteca e executável
LIB_NAME = libmybool.a
EXEC_NAME = test.exe

# Diretórios
SRC_DIR = src
OBJ_DIR = .

# Arquivos de objeto
OBJ_FILES = $(OBJ_DIR)/mybool.o $(OBJ_DIR)/main.o

# Regra padrão
all: $(LIB_NAME) $(EXEC_NAME)

# Compilar a biblioteca estática
$(LIB_NAME): $(OBJ_DIR)/mybool.o
	ar rcs $@ $^

# Compilar o executável
$(EXEC_NAME): $(OBJ_FILES)
	$(CC) -o $@ $(OBJ_FILES) -L. -lmybool

# Compilar o arquivo .c da biblioteca
$(OBJ_DIR)/mybool.o: $(SRC_DIR)/mybool.c
	$(CC) $(CFLAGS) -c $< -o $@

# Compilar o arquivo de teste
$(OBJ_DIR)/main.o: $(SRC_DIR)/main.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpar os arquivos gerados
clean:
	rm -f $(OBJ_FILES) $(LIB_NAME) $(EXEC_NAME)

.PHONY: all clean