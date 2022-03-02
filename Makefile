FTS = ft_atoi.o\
		 ft_bzero.o\
		 ft_calloc.o\
		 ft_isalnum.o\
		 ft_isascii.o\
		 ft_isdigit.o\
		 ft_isprint.o\
		 ft_memchr.o\
		 ft_memcmp.o\
		 ft_memcpy.o\
		 ft_memmove.o\
		 ft_memset.o\
		 ft_strchr.o\
		 ft_strdup.o\
		 ft_strlcat.o\
		 ft_strlcpy.o\
		 ft_strlen.o\
		 ft_strncmp.o\
		 ft_strnstr.o\
		 ft_strrchr.o\
		 ft_tolower.o\
		 ft_toupper.o\
		 ft_strjoin.o\
		 ft_strtrim.o\
		 ft_isalpha.o\
		 ft_substr.o\
		 ft_split.o\
		 ft_itoa.o

CC = cc 

FGS = -Wall -Wextra -Werror

NAME = libft.a


all: $(FTS) $(NAME)

%.a : $(FTS)
	ar -rcs $(NAME) $(FTS)

%.o: %.c
	$(CC) $(FLGS) -c $< -o $@

clean:
	rm -f $(FTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

a:
	gcc main.c libft.a -o main.o && ./main.o

