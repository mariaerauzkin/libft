# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marierau <marierau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/21 11:26:24 by marierau          #+#    #+#              #
#    Updated: 2023/05/10 15:48:47 by marierau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a

CC = cc
FLAGS = -Wall -Wextra -Werror

SRCS =	ft_isalnum.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \

OBJS = ${SRCS:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all: $(NAME)
clean:
	${RM} ${OBJS} 
fclean:	clean
	${RM} ${NAME}		
re: fclean all

