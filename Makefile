NAME		=	libftprintf.a

SRC			=	ft_putchar.c  ft_putstr.c  ft_strlen.c base_nuber.c  ft_printf.c  ft_putnbr.c   ft_strchr.c

SRC_OBJS 	=	$(SRC:.c=.o)

CC 			=	cc
RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror -I.

all:		$(NAME)

$(NAME):	$(SRC_OBJS)
				ar rcs $(NAME) $(SRC_OBJS)

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(SRC_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all fclean  clean re
