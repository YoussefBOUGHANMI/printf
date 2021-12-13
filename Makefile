SRCS =  ft_printf.c ft_putstr.c \
	utils_1.c utils_2.c \
	ft_longtohexa.c ft_unsitoa.c \
	parser.c


OBJS = $(SRCS:.c=.o)

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I.

NAME = libftprintf.a

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft 
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all

.PHONY:			all clean fclean re
