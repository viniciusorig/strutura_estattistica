OBJS	= ./lib/double_list.o ./src/main.o 
SOURCE	= ./lib/double_list.c ./src/main.c
OUT	= ./bin/a.out 
CC	 = gcc
FLAGS	 = -g  -c -Wall

all: $(OBJS)
	@$(CC) -g $(OBJS) -o $(OUT) -lm
	$(OUT)
/lib/double_list.o: ./lib/double_list.c
	@$(CC) $(FLAGS) ./lib/double_list.c -lm
/src/main.o: ./src/main.c
	@$(CC) $(FLAGS) ./src/main.c 