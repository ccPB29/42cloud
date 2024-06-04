CC = cc
CFLAGS = -Wall -Wextra -Werror
# LDLIBS = .
NAME = libft.a
SRCS = $(wildcard ../libft1/*.c)
OBJS = $(SRCS:.c=.o)
includes = ../libft1

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(includes)

$(NAME): $(OBJS)
	ar rcs $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

