.phony: all clean fclean re test
CC= clang
CFLAGS= -Wextra -Werror -Wall
NAME= libft.a
# OBJ= $(patsubst %.c,%.o,$(SRC))
OBJ= $(SRC:%.c=%.o)
SRC= $(wildcard *.c)

all: $(NAME) $(OBJ)

$(NAME): $(OBJ)
	ar rcs $(NAME) $^		# archive *.o file to NAME.a \n

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@		# *.o files create from *.c \n

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

test:
	nm $(NAME)