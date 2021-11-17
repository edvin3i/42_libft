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
SRCS		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c\
                ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
                ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
                ft_memset.c ft_strchr.c ft_strlen.c ft_strrchr.c\
                ft_strnstr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c\
                ft_tolower.c ft_toupper.c ft_strncmp.c\
				ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
				ft_itoa.c ft_strmapi.c ft_putstr_fd.c ft_putchar_fd.c\
				ft_striteri.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS		=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstsize_bonus.c\
 				ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\
 				ft_lstmap_bonus.c
OBJS		=	$(patsubst %.c,%.o,$(SRCS))
OBJBN		=	$(patsubst %.c,%.o,$(BONUS))
DEPS		=	$(patsubst %.c,%.d,$(SRCS))
DEPBN		=	$(patsubst %.c,%.d,$(BONUS))
CC			=	cc
CFLAGS		=	-Wall -Werror -Wextra -MD
RM			=	rm -rf

override		OBJS_ALL ?= $(OBJS)
override		DEP_ALL ?= $(DEPS)

.c.o:
				$(CC) $(CFLAGS) -I $(INCL) -c $< -o ${<:.c=.o}

$(NAME):		$(OBJS_ALL) $(INCL)
				ar rcs $(NAME) $(OBJS_ALL) $?
				ranlib $(NAME)

all:			$(NAME)

bonus:
				@make OBJS_ALL="$(OBJS) $(OBJBN)" DEP_ALL="$(DEPS) $(DEPBN)" all

clean:
				$(RM) $(OBJS) $(OBJBN) $(DEPS) $(DEPBN)

fclean:			clean
				$(RM) $(NAME) $(OBJBN)

re:				fclean all

.PHONY:		all clean fclean re bonus