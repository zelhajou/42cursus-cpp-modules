# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/26 17:06:14 by zelhajou          #+#    #+#              #
#    Updated: 2024/06/04 10:53:24 by zelhajou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRCS = main.cpp Contact.cpp PhoneBook.cpp
OBJS = obj/main.o obj/Contact.o obj/PhoneBook.o
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

obj/%.o: %.cpp
	@mkdir -p obj
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
