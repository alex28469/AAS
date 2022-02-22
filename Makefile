CC	= gcc
NAME	= my_lib
SRC	= include/src/main.c \
	  include/src/my_putchar.c \
	  include/src/my_putstr.c \
	  include/src/my_strlen.c

OBJ = $(SRC:%.c=%.o)

all:		$(NAME) clean
$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:
		$(RM) include/src/*.o
		$(RM) include/lib/*.gch
