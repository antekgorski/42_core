CC= clang
CFLAGS= -Wextra -Werror -Wall
LIBFT= libft.a
OBJ= $(patsubst %.c,%.o,$(SRC))
SRC= $(wildcard *.c)

all: $(LIBFT) $(OBJ)

$(LIBFT): $(OBJ)
	ar rcs $(LIBFT) $^		# archive *.o file to libft.a \n

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@		# *.o files create from *.c \n

clean:
	rm -f *.o

fclean: clean
	rm -f $(LIBFT)

re: fclean all