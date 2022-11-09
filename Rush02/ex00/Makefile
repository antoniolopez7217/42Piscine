NAME = $(BIN_DIR)rush-02
OBJ_DIR = obj/
BIN_DIR = bin/
INC_DIR = inc/
SRC_DIR = src/
OBJS = $(OBJ_DIR)check_args.o \
	   $(OBJ_DIR)check_dict.o \
	   $(OBJ_DIR)conjuct.o \
	   $(OBJ_DIR)dict_utils.o \
	   $(OBJ_DIR)interpret_num.o \
	   $(OBJ_DIR)normalize_number.o \
	   $(OBJ_DIR)ops_buffer.o \
	   $(OBJ_DIR)pack_dict.o \
	   $(OBJ_DIR)utils.o \
	   $(OBJ_DIR)write_numbers.o \
	   $(OBJ_DIR)main.o \

CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

$(NAME) : $(OBJS)
	mkdir -p $(BIN_DIR)
	gcc $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	mkdir -p $(OBJ_DIR)
	gcc -c -MD $(FLAGS) $< -o $@

-include $(OBJ_DIR)*.d

.PHONY : clean fclean

clean:
	rm -R $(OBJ_DIR) $(BIN_DIR)
fclean:
	rm -R $(OBJ_DIR) $(BIN_DIR)
