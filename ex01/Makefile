NAME = iter


CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
OBJ = $(SRC:%.cpp=%.o)
DPN = $(SRC:%.cpp=%.d)

all: $(NAME)

$(NAME):  $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

-include $(DPN)

%.o: %.cpp Makefile
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(DPN)

re: fclean all

.PHONY:
	all clean fclean re
