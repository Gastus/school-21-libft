CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRC =	ft_atoi.c\
		ft_bzero.c\
		ft_strdup.c\
	  	ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_tolower.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_calloc.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
	  	ft_memset.c\
		ft_itoa.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putstr_fd.c\
		ft_putnbr_fd.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strjoin.c\
		ft_strlcpy.c\
		ft_strncmp.c\
		ft_strlen.c\
	  	ft_strnstr.c\
	  	ft_strrchr.c\
	  	ft_strnstr.c\
	  	ft_strmapi.c\
	  	ft_substr.c\
	  	ft_strtrim.c\
		ft_split.c

SRC_B = ft_lstclear.c\
		ft_lstdelone.c\
		ft_lstadd_back.c\
		ft_lstlast.c\
		ft_lstsize.c\
		ft_lstadd_front.c\
		ft_lstnew.c\
		ft_lstiter.c\

HEADER = libft.h

OBJ = $(SRC:.c=.o)

OBJ_B = $(SRC_B:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rc $(NAME) $?

bonus: $(OBJ_B)
	ar rc $(NAME) $(OBJ_B)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
	