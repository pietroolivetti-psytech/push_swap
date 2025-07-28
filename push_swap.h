#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdlib.h>
# include <stdbool.h> //To use bool flags, e.g, to print or not to print
# include <limits.h> //To define MIN and MAX macros	

#include <unistd.h>
#include <stdio.h> //-> remember to delete!

/*typedef struct s_stack
{
	int	nbr;
	int	index;
	struct s_stack	*next;
	struct s_stack	*prev;
} x_stack;*/
typedef struct s_stack {
	int nbr;
	int index;
	struct s_stack *next;
	struct s_stack *prev;
} x_stack;


char	**split(char *s, char d);
int  init_a(x_stack **a, char **av);
x_stack *find_last(x_stack *stack);
void add_index(x_stack *stack);
long ft_atol(char *s);

void pa(x_stack **a, x_stack **b);
void pb(x_stack **a, x_stack **b);
void sa(x_stack **a);
void sb(x_stack **b);
void ra(x_stack **a);
void rb(x_stack **b);
void rra(x_stack **a);
void rrb(x_stack **b);

void radix_sort(x_stack **a, x_stack **b);
void sort_index(x_stack *stack);
x_stack *find_last(x_stack *stack);
int stack_len(x_stack *stack);
void swap(int *a, int *b);
int is_sorted(x_stack *a, int tot);

char	**create_array(int ac, char **array_nb);
//int	count_words(char *s, char d);
//void	sort_stack(x_stack **stack_a, x_stack **stack_b, int tot);
//void	simple_sort(x_stack **stack_a, x_stack **stack_b, int tot);
//void	sort_5(x_stack **stack_a, x_stack **stack_b, int tot);
//static void	sort_4(x_stack **stack_a, x_stack **stack_b, int tot);
//static void	sort_3(x_stack **stack_a, int tot);
//static int	get_min(x_stack **stack, int val);
char *join_all(char *s1, char *s2);
char	*ft_strdup(char *src);
int check_digit(char *s);
void ft_putchar(char *s);
int check_limit(long n);

void	free_exit(char **arr, x_stack *a, x_stack *b, int err);
int check_duplicates(x_stack **a, long last_nbr);

void sort_two(x_stack **a);
void sort_three(x_stack **a);
void sort_four(x_stack **a, x_stack **b);
void sort_five(x_stack **a, x_stack **b);

# endif