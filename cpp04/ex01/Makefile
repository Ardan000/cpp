# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/15 21:24:03 by sfaugere          #+#    #+#              #
#    Updated: 2023/12/15 16:34:16 by sfaugere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### Project setup ###

NAME 		= Brain
SRC_DIR 	= srcs
BUILD_DIR 	= objs
INC			= includes

### Sources ###
SRCS += Right/Animal.cpp \
		Right/Cat.cpp \
		Right/Dog.cpp \
		Brain.cpp \
		main.cpp

### Compilation setup ###

SRCS_PATH = $(SRCS:%=$(SRC_DIR)/%)
OBJS = $(SRCS_PATH:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

### Makefile setup ###

RM = rm -f
DIR_DUP = mkdir -p $(@D)

### Rules ###

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(DIR_DUP)
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re