CC = gcc

NAME = miniRT

FLAGS = -Wall -Wextra -Werror
SRCS =	main.c \
		get_next_line/get_next_line_utils.c \
		get_next_line/get_next_line.c \
		ft_minirt.c \
		\
		maths/ft_compute_ray.c \
		maths/ft_constant_values.c \
		maths/ft_get_colour.c \
		maths/ft_get_hit_colour.c \
		maths/get_hit_sphere.c \
		maths/ft_get_hit.c \
		maths/ft_init_hit.c \
		maths/ft_phong_calculate.c \
		maths/ft_rotation.c \
		maths/ft_scene_calc.c \
		maths/ft_scene_creator \
		\
		utils/ft_atof.c \
		utils/ft_color_to_int.c \
		utils/ft_colour_mul.c \
		utils/ft_colour_set.c \
		utils/ft_colour_to_vector_struct.c \
		utils/ft_colour_to_vector.c \
		utils/ft_key_values.c \
		utils/ft_save_image.c \
		utils/ft_vector_to_colour.c \
		\
		parsing/ft_get_alight.c \
		parsing/ft_get_resolution.c \
		parsing/ft_get_rgb.c \
		parsing/ft_get_the_values.c \
		parsing/ft_scene_init.c \
		parsing/ft_get_vector.c \
		parsing/ft_next_value.c \
		parsing/ft_get_camera.c \
		parsing/ft_get_light.c \
		parsing/ft_get_plane.c \
		parsing/ft_get_sphere.c \
		parsing/ft_get_square.c \
		parsing/ft_get_cylinder.c \
		parsing/ft_get_triangle.c \
		parsing/ft_scene_reader.c \
		\
		v_operations/ft_vector_cross.c \
		v_operations/ft_vector_distance.c \
		v_operations/ft_vector_div_vec.c \
		v_operations/ft_vector_div.c \
		v_operations/ft_vector_dot.c \
		v_operations/ft_vector_invert.c \
		v_operations/ft_vector_magnitude.c \
		v_operations/ft_vector_min.c \
		v_operations/ft_vector_mul_vec.c \
		v_operations/ft_vector_mul.c \
		v_operations/ft_vector_normalize.c \
		v_operations/ft_vector_plus.c \
		v_operations/ft_vector_set.c \
		v_operations/ft_vector_clamp.c \

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
		@cd printf && $(MAKE)
		@cp printf/libftprintf.a libftprintf.a
		@gcc  $(OBJS) libftprintf.a -o $(NAME) -lm

f:	
	gcc *.c printf/*.c

all : $(NAME)

clean :
		rm -f $(OBJS)
		$(MAKE) clean -C ./printf
fclean : clean
		rm -f $(NAME)
		rm -f libftprintf.a
		$(MAKE) fclean -C ./printf
re : fclean all

	
	