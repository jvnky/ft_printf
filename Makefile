NAME=libftprintf.a

SRCS = src/*c \
	tools/*.c\

OBJ = ${SRC:.c=.o}
CC_FLAG = -Wall -Wextra -Werror
CC = gcc

%.o:%.c
	${CC} ${CC_FLAG} -c $< -0 $@

$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
