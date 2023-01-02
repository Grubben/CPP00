NAME		= phonebook

## COMPILATION
CXX			= c++
# Compilation Flags
CXXFLAGS	=-Wall -Wextra -Werror -g -std=c++98

# Removal Flags. Not sure if necessary
RM			= rm -rf

SRCS		= megaphone.cpp

OBJS		= $(SRCS:.cpp=.o)

$(NAME)		: $(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o			: %.c
			$(CC) $(CFLAGS) -c -o $@ $<

all			: $(NAME)

clean		:
			$(RM) $(OBJS)

fclean		: clean
			$(RM) $(NAME)

re			: fclean $(NAME)

.PHONY		: re fclean clean all
