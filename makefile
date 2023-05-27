CC=gcc 

BIN=twosum

FLAGS= -g -Wall -Wextra -Wno-unused-parameter 

SRCS=twosum.c

INC=twosum.h 

OBJS = $(SRCS:.c=.o)

default: $(BIN) 
	@echo build successful!
 
$(BIN): $(OBJS) $(INC) $(SRCS)
	$(CC) -o $(BIN) $(OBJS)
	@echo $(BIN) compiled!

.c.o: 
	$(CC) $(FLAGS) -c $^ -o $@

run:
	./$(BIN)

test:
	valgrind --leak-check=full \
	./$(BIN)

clean: 
	rm -f *.o \
		$(BIN)

valgrind: $(BIN)
	valgrind --leak-check=full \
		./$(BIN)
