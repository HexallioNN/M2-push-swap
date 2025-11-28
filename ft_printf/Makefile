NAME = libftprintf.a
CC = cc

OBJDIR = obj
LIBFT = libft

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
       ft_itoa_base.c \
       ft_cases.c \
       ft_cases2.c \
       ft_checker.c

OBJS = $(SRCS:%.c=$(OBJDIR)/%.o)
LIBFT_A = $(LIBFT)/libft.a

all: $(NAME)

libft:
	@$(MAKE) -C $(LIBFT)

$(NAME): libft $(OBJS)
	cp $(LIBFT_A) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	$(MAKE) -C $(LIBFT) clean
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT) fclean

re: fclean all

.PHONY: all clean fclean re libft
