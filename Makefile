SRC_DIR=.
INC_DIR=.
OBJ_DIR=obj
BIN_DIR=bin
CC=gcc
CFLAGS=-I . -I $(INC_DIR) -std=c99

SRC:=$(shell find * -iname '*.c')
_OBJ=$(patsubst %.c,%.o,$(SRC))
OBJ=$(patsubst %,$(OBJ_DIR)/%,$(_OBJ))
BIN=$(patsubst $(OBJ_DIR)/%.o,$(BIN_DIR)/%.run,$(OBJ))

all: $(BIN)

$(BIN_DIR)/%.run: $(OBJ_DIR)/%.o
	$(CC) $^ -o $@ $(LIBS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/*.h
	$(CC) -c -o $@ $< $(CFLAGS)
