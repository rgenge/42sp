# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acosta-a <chaves_87@hotmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 02:03:37 by acosta-a          #+#    #+#              #
#    Updated: 2022/04/26 04:07:17 by acosta-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Executable #
NAME = libft.a

# Compilation #
CC = cc
FLAG = -Wall -Wextra -Werror
OPTCC=  -I. -c
RM = rm -f

# includes #

HEADER = libft.h

# SOURCE FILES #
SRC = ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	  ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	  ft_strnstr.c ft_strrchr.c ft_strdup.c ft_bzero.c ft_calloc.c \
	  ft_atoi.c ft_substr.c ft_strmapi.c ft_striteri.c ft_strjoin.c\
	  ft_strtrim.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
	  ft_itoa.c ft_split.c \
	  ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isalnum.c\
	  ft_toupper.c ft_tolower.c 
#BONUS #
BONUS = ft_lstnew.c	ft_lstadd_front.c ft_lstsize.c	\
		ft_lstlast.c 

SRC.O = $(SRC:.c=.o)
BONUS.O = $(BONUS:.c=.o)
 
$(NAME): $(SRC.O) $(HEADER)
	$(CC) $(FLAG) $(OPTCC) $(SRC)
	ar rcs $(NAME) $(SRC.O)

$(BONUS.O):
	$(CC) $(FLAG) $(OPTCC) $(BONUS)
	
all: $(NAME)

bonus: $(NAME) $(BONUS.O)
	ar rcs $(NAME) $(BONUS.O)

clean:
	$(RM) $(SRC.O) $(BONUS.O)
fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus : fclean bonus

.PHONY: all clean fclean re bonus rebonus
