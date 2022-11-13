# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 12:42:16 by yceylan           #+#    #+#              #
#    Updated: 2022/11/11 16:18:22 by yceylan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

LIBFT_PATH	=	./libft
LIBFT	=	$(LIBFT_PATH)/libft.a

CC	=	clang
CFLAGS	=	-Wall -Wextra -Werror

SOURCES	=		ft_printf.c \
				ft_putchar.c \
				ft_decimal.c \
				ft_hexadecimal_lower.c \
				ft_hexadecimal_upper.c \
				ft_itoa_base.c \
				ft_unsigneddecimal.c \
				ft_point_hexadecimal.c \



OBJECTS	=	$(SOURCES:.c=.o)

all:	$(LIBFT) $(NAME)

$(LIBFT):
		make -C $(LIBFT_PATH)

$(NAME):	$(OBJECTS)
			cp $(LIBFT) $(NAME)
			ar rcs $(NAME) $(OBJECTS)

clean:
		make clean -C $(LIBFT_PATH)
		rm -f $(OBJECTS)

fclean:	clean
		make fclean -C $(LIBFT_PATH)
		rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re libft
