NAME	= libftprintf.a
SRCS	= ft_printf.c
OBJS	= $(SRCS:.c=.o)
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
ARFLAGS = rcs

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean	:
	$(RM) $(OBJS)
	$(MAKE) fclean -C ./libft

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all

test	: $(NAME)
	gcc main.c $(NAME)
	./a.out
	@rm a.out

.PHONY	:	clean fclean re all test
