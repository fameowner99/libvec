NAME = libvec.a

SRC = src/vec_add.c src/vec_angle.c src/vec_cross_product.c src/vec_dot_product.c \
	src/vec_magnitude.c src/vec_mul.c src/vec_opposite.c src/vec_sub.c src/vec_unit.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

HEADERS = -I ./inc

all: $(NAME)

$(NAME) : $(OBJ)
	@ar rc $@ $^
	@echo "LIBVEC is ready to use"

%.o:%.c
	@gcc $(FLAGS) $(HEADERS) -o $@ -c $<
	@echo "building... $@"

clean:
	@rm -f $(OBJ)
	@echo "cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo "fcleaned"

re: fclean all

.PHONY = all clean fclean re