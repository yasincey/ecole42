
NAME	=	so_long.a

PRINTF_PATH	= ./ft_printf/
PRINTF	=	$(PRINTF_PATH)libftprintf.a

GNL_C	=	./get/get_next_line.c
GNL_U	=	./get/get_next_line_utils.c

MLX_PATH	=	./mlx/
MLX	=	$(MLX_PATH)libmlx.a
CC	= gcc
FLAGS = -Wall -Wextra -Werror -Lmlx -lmlx -framework OpenGL -framework AppKit

CFILES	=	so_long.c\
			check.c\
			hook.c\
			path.c\
			put_image.c\
			uniq.c\
			winn.c

OBJECTS	=	$(CFILES:.c=.o)

all : system $(NAME)

system :
	make -C $(PRINTF_PATH)
	make -C $(MLX_PATH)

$(NAME) : $(OBJECTS)
	$(CC) $(FLAGS) $(GNL_C) $(GNL_U) $(PRINTF) $(MLX) $(OBJECTS) -o $(NAME)

clean :
	rm -f $(OBJECTS)
	make -C $(PRINTF_PATH) clean
	make -C $(MLX_PATH) clean

fclean : clean
	rm -f $(NAME)
	make -C $(PRINTF_PATH) fclean

re : fclean all

.PHONY:all clean fclean re
