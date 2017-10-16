PUSH = push_swap

CHECKER = checker

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC = ./src/

LIBFT = ./libft

HSR = ./src/push_swap.h

FILE = 	./src/clean.o \
		./src/clean_all_stek.o \
		./src/command.o \
		./src/correctsort.o \
		./src/formintomax.o \
		./src/get_next_line.o \
		./src/opor_el.o \
		./src/pa.o \
		./src/pb.o \
		./src/correct_sort.o \
		./src/sorting_oa.o \
		./src/sorting_ob.o \
		./src/push_swap.o \
		./src/func_write_answer.o \
		./src/func_optimization.o \
		./src/func_show_answer.o \
		./src/sort_three_b.o \
		./src/sort_three_a.o \
		./src/ra.o \
		./src/rb.o \
		./src/rr.o \
		./src/rra.o \
		./src/rrb.o \
		./src/rrr.o \
		./src/sa.o \
		./src/all_int_atack.o \
		./src/now_big.o \
		./src/obnul_first_opor.o \
		./src/func_obnulay.o \
		./src/next_dig.o \
		./src/recurs_b.o \
		./src/num_all_b.o \
		./src/recurs_a.o \
		./src/nulllll.o \
		./src/recurs_first.o \
		./src/sb.o \
		./src/ss.o \
		./src/zap_in_stack_a.o 

FILEC = ./src/clean.o \
		./src/clean_all_stek.o \
		./src/command.o \
		./src/correctsort.o \
		./src/func_optimization.o \
		./src/formintomax.o \
		./src/get_next_line.o \
		./src/opor_el.o \
		./src/obnul_first_opor.o \
		./src/func_obnulay.o \
		./src/pa.o \
		./src/pb.o \
		./src/correct_sort.o \
		./src/sorting_oa.o \
		./src/nulllll.o \
		./src/sorting_ob.o \
		./src/all_int_atack.o \
		./src/next_dig.o \
		./src/recurs_a.o \
		./src/recurs_b.o \
		./src/recurs_first.o \
		./src/now_big.o \
		./src/num_all_b.o \
		./src/checker.o \
		./src/func_show_answer.o \
		./src/func_write_answer.o \
		./src/sort_three_b.o \
		./src/sort_three_a.o \
		./src/ra.o \
		./src/rb.o \
		./src/rr.o \
		./src/rra.o \
		./src/rrb.o \
		./src/rrr.o \
		./src/sa.o \
		./src/sb.o \
		./src/ss.o \
		./src/zap_in_stack_a.o 

OBJP = $(FILE:.o=.c)

OBJC = $(FILEC:.o=.c)

all: liba comppush compc

liba:
	@make -C $(LIBFT)

comppush:
	@$(CC) $(FLAGS) -I ./src $(OBJP) libft/libft.a -o $(PUSH)

compc:
	@$(CC) $(FLAGS) -I ./src $(OBJC) libft/libft.a -o $(CHECKER)

clean:
	@make clean -C $(LIBFT)

fclean:
	@-/bin/rm -f $(CHECKER)
	@-/bin/rm -f $(PUSH)
	@make fclean -C $(LIBFT)

re: fclean all