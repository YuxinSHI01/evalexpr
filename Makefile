CC = gcc
CFLAGS = -std=c99 -pedantic -Wall -Wextra -Werror
RM = rm -f
SRC = src/initStack.c  src/emptyStack.c  src/popStack.c  src/destroyStack.c  src/pushStack.c
OBJ = $(SRC:.c=.o)

%.o:	%.c
	$(CC)	$(CFLAGS) -g -c $< 	-o	$@

.PHONY:all
all:	$(OBJ)

.PHONY:clean
clean:
	$(RM) $(OBJ) 


