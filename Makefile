# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/30 12:40:04 by gbreana           #+#    #+#              #
#    Updated: 2020/09/02 23:36:32 by gbreana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
INCL		=	libft.h
SRCS1		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c\
                ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
                ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
                ft_memset.c ft_strchr.c ft_strlen.c ft_strrchr.c\
                ft_strnstr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c\
                ft_tolower.c ft_toupper.c ft_strncmp.c
SRCS2		=	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
				ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS1       =	$(patsubst %.c,%.o,$(SRCS1))
OBJS2       =	$(patsubst %.c,%.o,$(SRCS2))
CC			=	gcc
FLAGS		=	-Wall -Werror -Wextra
RM			=	rm -rf
.c.o:			$(CC) $(FLAGS) -I $(INCL) -c $< -o ${<:.c=.o}

$(NAME):		$(OBJS1) $(OBJS2)
				ar rc $(NAME) $?
				ranlib $(NAME)

all:			$(NAME)

clean:
				$(RM) $(OBJS1) $(OBJS2)

fclean:			clean
				$(RM) $(NAME)
re:				fclean all
.PHONY:		all clean fclean re
