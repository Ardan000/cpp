# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/15 21:24:03 by sfaugere          #+#    #+#              #
#    Updated: 2023/10/26 15:51:43 by sfaugere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### Project setup ###

NAME 		= Violence
SRC_DIR 	= srcs
BUILD_DIR 	= objs
INC			= includes

### Sources ###
SRCS += \
		main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp
### Compilation setup ###

SRCS_PATH = $(SRCS:%=$(SRC_DIR)/%)
OBJS = $(SRCS_PATH:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

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