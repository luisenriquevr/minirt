CC = gcc

NAME = miniRT

FLAGS = -Wall -Wextra -Werror
SRCS =	get_next_line/get_next_line_utils.c \
		get_next_line/get_next_line.c \
		ft_get_alight.c \
		ft_get_resolution.c \
		ft_get_the_values.c \
		ft_get_rgb.c \
		ft_atof.c \
		ft_scene_init.c


OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
		@cd libft && $(MAKE)
		@cp libft/libft.a libft.a
		@gcc  $(OBJS) libft.a main.c -o $(NAME)

f:	
	gcc *.c libft/*.c

all : $(NAME)

clean :
		rm -f $(OBJS)
		$(MAKE) clean -C ./libft
fclean : clean
		rm -f $(NAME)
		rm -f libft.a
		$(MAKE) fclean -C ./libft
re : fclean all

	
	