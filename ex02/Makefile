NAME = array

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
OBJ = $(SRC:%.cpp=%.o)
DPN = $(SRC:%.cpp=%.d)

all: $(NAME)

-include $(DPN)

$(NAME):  $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

%.o: %.cpp Makefile
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

clean:
	rm -f $(OBJ) $(DPN)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:
	all clean fclean re
