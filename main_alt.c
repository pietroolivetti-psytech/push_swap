#include "push_swap.h"
#include <stdio.h>

void printall(x_stack *stack, char stack_name)
{
	printf("\n\n===== STACK %c =====\n", stack_name);
	while(stack)
	{
		printf("* Index: %d || value: %d\n",stack->index, stack->nbr);
		stack = stack->next;
	}
}
void print_help(void)
{
	printf("\n===== COMMAND DESCRIPTIONS =====\n");
	printf("sa  (swap a): Swap the first 2 elements at the top of stack a.\n");
	printf("sb  (swap b): Swap the first 2 elements at the top of stack b.\n");
	printf("ss          : Perform sa and sb at the same time.\n");
	printf("pa  (push a): Move the first element of b to the top of a.\n");
	printf("pb  (push b): Move the first element of a to the top of b.\n");
	printf("ra  (rotate a): Shift up all elements of stack a by 1 (first becomes last).\n");
	printf("rb  (rotate b): Shift up all elements of stack b by 1 (first becomes last).\n");
	printf("rr          : Perform ra and rb at the same time.\n");
	printf("rra (reverse rotate a): Shift down all elements of stack a by 1 (last becomes first).\n");
	printf("rrb (reverse rotate b): Shift down all elements of stack b by 1 (last becomes first).\n");
	printf("rrr         : Perform rra and rrb at the same time.\n");
	printf("================================\n");
}
void print_menu(void)
{
	printf("\n==== PUSH_SWAP MENU ====\n");
	printf("[ 0] Exit      [ 1] pa       [ 2] pb\n");
	printf("[ 3] sa        [ 4] sb       [ 5] ss\n");
	printf("[ 6] ra        [ 7] rb       [ 8] rr\n");
	printf("[ 9] rra       [10] rrb      [11] rrr\n");
	printf("[99] Help (show descriptions)\n");
	printf("========================\n>> ");
}



int main(int ac, char **av)
{
	if (ac > 1)
	{
		x_stack *a = NULL;
		x_stack *b = NULL;
		//int cont = 1;
		int op = 100;
		char **ar = split(av[1], ' ');
		init_a(&a, ar+1);
		sort_index(a);
		int total_n = stack_len(a);
		/*printall(a, 'a');
		printf("Total stack a = %d and b = %d", stack_len(a), stack_len(b));
		pb(&a, &b);
		add_index(a); add_index(b);
		printall(a, 'a'); printall(b, 'b');*/
		while(op != 0)
		{
			//if (op != 0)
			//	{printall(a, 'a'); printall(b, 'b');}
			if (is_sorted(a, total_n))
			{
			//	printf("All sorted");
				exit(1);
			}
			radix_sort(&a, &b);
			/*while (b)
			{
				calcular_todos_custos(a, b);
				x_stack *melhor = escolher_menor_custo(b);
				executar_movimento_ideal(&a, &b, melhor);
			}*/

			//sort_stack(&a, &b, total_n);
			/*print_menu();
			scanf(" %d", &op);
			switch (op)
			{
			case 0:
				op = 0;
				break;
			case 1:
				pa(&a, &b);
				break;
			case 2:
				pb(&a, &b);
				break;
			case 3:
				sa(&a);
				break;
			case 4:
				sb(&b);
				break;
			case 5:
				sa(&a);
				sb(&b);
				break;
			case 6:
				ra(&a);
				break;
			case 7:
				rb(&b);
				break;
			case 8:
				ra(&a);
				rb(&b);
				break;
			case 9:
				rra(&a);
				break;
			case 10:
				rrb(&b);
				break;
			case 11:
				rra(&a);
				rrb(&b);
				break;
			case 99:
				print_help();
				break;
			default:
				break;
			}*/

		}
	}
	return 0;
}