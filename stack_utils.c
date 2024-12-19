/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:28:38 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/19 18:08:50 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_init(t_stack *stack)
{
	stack->top = -1;
}

void	stack_add(t_stack *stack, int val)
{
	stack->array[++stack->top] = val;
}

int	stack_pop(t_stack *stack)
{
	int	popped;

	popped = stack->array[stack->top];
	stack->top--;
	return (popped);
}
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int p;
    int i;
    int j;
	
	p = arr[low];
	i = low;
	j = high;
    while (i < j) 
	{
        while (arr[i] <= p && i <= high - 1) {
            i++;
        }
        while (arr[j] > p && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}
