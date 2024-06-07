# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 14:49:21 by zelhajou          #+#    #+#              #
#    Updated: 2024/06/07 15:46:52 by zelhajou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl
SRCS = main.cpp Harl.cpp
OBJS = obj/main.o obj/Harl.o
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

obj/%.o: %.cpp Harl.hpp
	@mkdir -p obj
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
