SRC_DIR=.
INC_DIR=.
OBJ_DIR=obj
BIN_DIR=bin
CC=gcc
CFLAGS=-I . -I $(INC_DIR) -std=c99
LIBS=-lm

# find all source files:
SRC:=$(shell find * -iname '*.c')

# substitute .c with .o in source files:
_OBJ=$(patsubst %.c,%.o,$(SRC))

# substitute .o with $(OBJ_DIR)/.o in object files:
OBJ=$(patsubst %,$(OBJ_DIR)/%,$(_OBJ))

# for each $(OBJ_DIR)/xyz.o, get $(BIN_DIR)/xyz.run
BIN=$(patsubst $(OBJ_DIR)/%.o,$(BIN_DIR)/%.run,$(OBJ))

all: $(BIN)

$(BIN_DIR)/%.run: $(OBJ_DIR)/%.o
	$(CC) $^ -o $@ $(LIBS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/*.h
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm $(BIN_DIR)/*.run
	rm $(OBJ_DIR)/*.o
