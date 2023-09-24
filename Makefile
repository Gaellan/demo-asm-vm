# Makefile

NAME = 	ex-2

SRCS = 	main.c \
		length.c \
		str_cpy.c

all :	$(NAME)

$(NAME):	$(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
