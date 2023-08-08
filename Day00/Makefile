NAME = exe

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -MMD -MP

STD = -std=c++17

SRC = $(wildcard *.cpp)

OBJ_DIR = obj

OBJS = $(patsubst %, $(OBJ_DIR)/%, $(SRC:.cpp=.o))

DEPS = $(OBJS:%.o=%.d)

RM = rm -rf

HBLK = '\e[1;90m'
HRED = '\e[1;91m'
HGRN = '\e[1;92m'
HYEL = '\e[1;93m'
HBLU = '\e[1;94m'
HMAG = '\e[1;95m'
HCYN = '\e[1;96m'
HWHT = '\e[1;97m'
NC ='\033[0m'

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(STD) $(CXXFLAGS) $(OBJS) -o $(NAME)

obj/%.o : %.cpp Makefile
	@ mkdir -p obj
# @ printf $(HYEL)"Compiling %s\r"$(NC) $(notdir $<)
	@ $(CXX) $(CXXFLAGS) -c $< -o $@

compile:
	$(CXX) $(STD) $(CXXFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ_DIR) *.d

fclean : clean
	$(RM) $(NAME) a.out

re : fclean all

.PHONY : re fclean clean all compile

.SILENT : all clean fclean re $(NAME)

-include $(DEPS)