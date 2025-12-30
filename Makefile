NAME = push_swap
CC = cc
OBJDIR = obj
LIBFT = ft_printf/libft/libft.a
PRINTF = ft_printf/libftprintf.a
CFLAGS = -Wall -Wextra -Werror -Ift_printf/libft -Ift_printf

SRCS = push_swap.c
OBJS = $(SRCS:%.c=$(OBJDIR)/%.o)

all: $(NAME)

libft:
	@$(MAKE) -C ft_printf/libft 

printf:
	@$(MAKE) -C ft_printf

$(NAME): libft printf $(OBJS)
	$(CC) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)
	@$(MAKE) -C ft_printf/libft clean
	@$(MAKE) -C ft_printf clean

fclean: clean
	rm -f $(NAME)
	@$(MAKE) -C ft_printf/libft fclean
	@$(MAKE) -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re libft printf
