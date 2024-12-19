CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c11
BUILD_DIR=../build
SRC=main.c game.c str.c
TARGET_1=$(BUILD_DIR)/game

all: $(TARGET_1)

$(TARGET_1):
	$(CC) $(FLAGS) $(SRC) -o $(TARGET_1)
clear:
	rm -rf $(BUILD_DIR)/*

rebuild: clear all