NAME    = ft_printf.a

SRCS    = ft_printf.c \
          ft_char.c \
          ft_string.c \
          ft_pointer.c \
          ft_digit.c \
          ft_hexd.c \
          ft_unsigned.c

OBJS    = $(SRCS:.c=.o)
DEPS    = $(OBJS:.o=.d)

CC      = gcc
RM      = rm -f
CFLAGS  = -Wall -Wextra -Werror -MMD -MP

all:    $(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS) $(DEPS)

fclean: clean
			$(RM) $(NAME)

re:     fclean all

-include $(DEPS)

.PHONY: all clean fclean re

