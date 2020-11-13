CC = gcc

NAME = miniRT

FLAGS = -Wall -Wextra -Werror
SRCS =	get_next_line/get_next_line_utils.c \
		get_next_line/get_next_line.c \
		*.c

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
		@cd libft && $(MAKE)
		@cp libft/libft.a libft.a
		@gcc  $(OBJS) libft.a main.c

f:	
	gcc *.c libft/*.c

all : $(NAME)

clean :
		rm -f $(OBJS)
		$(MAKE) clean -C ./libft
		$(MAKE) clean -C ./printf
fclean : clean
		rm -f $(NAME)
		rm -f libft.a
		rm -f libftprintf.a
		$(MAKE) fclean -C ./libft
		$(MAKE) fclean -C ./printf
re : fclean all

	
	