# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 22:56:04 by zelhajou          #+#    #+#              #
#    Updated: 2024/06/06 22:58:51 by zelhajou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = attackOnZombie
SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS = obj/main.o obj/HumanA.o obj/HumanB.o obj/Weapon.o
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

obj/%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	@mkdir -p obj
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
