NAME	=	libft.a

OBJS	=	*.o

all:	$(NAME)

$(NAME):	*.c
		@gcc -Wall -Wextra -Werror -c *.c -I.
		@ar -rcs $(NAME) $(OBJS)
		@ranlib $(NAME)

clean:
		@rm -f $(OBJS)

fclean:	clean
		@rm -f $(NAME)

re:	fclean all
