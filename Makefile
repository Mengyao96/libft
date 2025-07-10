# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mezhang <mezhang@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/07 14:55:17 by mezhang           #+#    #+#              #
#    Updated: 2025/07/08 16:28:56 by mezhang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### I - Define comman rules ###
NAME=libft.a
CC=cc
CFLAGS=-Wall -Wextra -Werror
AR=ar rcs

HEADER=libft.h

### II - Define variables ###
SRCS_LIBC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
					ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
					ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
					ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
					ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
					ft_tolower.c ft_toupper.c
SRCS_ADDITIONAL = ft_substr.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c \
						ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_striteri.c \
						ft_strjoin.c ft_strmapi.c ft_strtrim.c

SRCS_BONUS = ft_lstsize_bonus.c ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
				ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c \
				ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c

SRCS = $(SRCS_LIBC) $(SRCS_ADDITIONAL)
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

### III - Define executive rules ###
.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME) $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS_BONUS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all
