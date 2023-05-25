# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 22:02:21 by jterra-e          #+#    #+#              #
#    Updated: 2023/05/14 18:10:15 by jterra-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c \
                ft_isdigit.c ft_isalpha.c ft_atoi.c ft_strlen.c ft_strlcat.c \
                ft_strncmp.c ft_strdup.c ft_calloc.c ft_memcpy.c ft_strchr.c \
                ft_strrchr.c ft_strnstr.c ft_bzero.c ft_memchr.c ft_memcmp.c \
                ft_memset.c ft_memmove.c ft_strlcpy.c ft_itoa.c ft_strjoin.c \
		ft_split.c ft_striteri.c ft_strmapi.c ft_substr.c ft_strtrim.c \
	       	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
                ft_lstiter.c ft_lstmap.c ft_lstsize.c ft_lstlast.c

OBJ = ${SRCS:.c=.o}

BONUS_OBJS = ${BONUS:.c=.o}

FLAGS = -Wall -Wextra -Werror

CC = cc $(FLAGS)

AR = ar -rcs

RM = rm -f

all: $(NAME)

$(NAME): ${OBJ}
	${AR} ${NAME} ${OBJ}
	echo 'First check'

bonus: ${BONUS_OBJS}
	${AR} ${NAME} ${BONUS_OBJS}
	echo 'Bonus'	

clean:
	${RM} ${OBJ}
	${RM} ${BONUS_OBJS}

fclean: clean
	${RM} $(NAME)

re: fclean all
