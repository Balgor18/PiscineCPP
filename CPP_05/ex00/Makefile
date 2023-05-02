NAME		=	bureaucrat

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror --std=c++98

RM			=	rm -rf

SRC			=	main.cpp			\
				Bureaucrat.cpp		\


OBJS		=	$(SRC:%.cpp=OBJ/%.o)

DEBUG		=	$(shell env | grep DEBUG= | tr '=' ' ' | awk '{print $$2}')

ifeq ($(DEBUG), 1)
	CXXFLAGS += -fstandalone-debug -g3
endif

all			:	$(NAME)

$(NAME)		:	OBJ $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

OBJ			:
	mkdir -p OBJ

OBJ/%.o		:	%.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean		:
	rm -rf OBJ/

fclean		:	clean
	rm -rf $(NAME)

re			:	fclean $(NAME)

.phony		:	re fclean clean
