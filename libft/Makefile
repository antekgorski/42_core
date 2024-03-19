.PHONY: all clean fclean re test
CC= clang
CFLAGS= -Wextra -Werror -Wall
NAME= libft.a
# OBJ= $(patsubst %.c,%.o,$(SRC))
OBJ= $(SRC:%.c=%.o)
# SRC= $(wildcard *.c)
SRC= ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strlcat.c ft_strlen.c \
ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_memset.c ft_strlcpy.c  ft_toupper.c \
ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
ft_atoi.c

all: $(NAME) $(OBJ)

$(NAME): $(OBJ)
	ar rcs $(NAME) $^		# archive *.o file to NAME.a \n

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@		# *.o files create from *.c \n

clean:
	rm -f *.o	    # remove .o files

fclean: clean
	rm -f $(NAME)    # remove .o files and libft.a

re: fclean all		# remove .o files and libft.a after compile agen

test:
	nm $(NAME)			# showing what is archive in libft.a
so:
	 $(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)