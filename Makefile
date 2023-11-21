SRCS        = $(wildcard *.c)

OBJS_DIR    = objs
OBJS        = $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.c=.o)))

NAME        = libft.a

GREEN       = \033[0;32m
CYAN        = \033[0;36m
RESET       = \033[0m

$(OBJS_DIR)/%.o: %.c
	@echo "$(CYAN)Compiling:$(RESET) $<"
	@mkdir -p $(OBJS_DIR)
	@gcc -Wall -Wextra -Werror -c $< -o $@

$(NAME):	$(OBJS)
	@ar -rcs $(NAME) $(OBJS)
	@echo "$(GREEN)Library $(NAME) created successfully!$(RESET)"

all:		$(NAME)
.PHONY:		all

clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(GREEN)Object files removed!$(RESET)"
.PHONY:		clean


fclean:		clean
	@rm -f $(NAME)
	@echo "$(GREEN)Library $(NAME) removed!$(RESET)"
.PHONY:		fclean

re:			fclean all
.PHONY:		re
