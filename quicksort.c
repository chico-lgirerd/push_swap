/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:08:56 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/19 18:15:05 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void sort_3(t_stack *a)
{
    if (a->top < 1)
        return;
    int first = a->array[a->top];
    int second = a->array[a->top - 1];
    int third = a->array[a->top - 2];
    
    if (first > second && second < third && first < third)
        sa(a);
    else if (first > second && second > third)
    {
        sa(a);
        rra(a);
    }
    else if (first > second && second < third && first > third)
        ra(a);
    else if (first < second && second > third && first < third)
    {
        sa(a);
        ra(a);
    }
    else if (first < second && second > third && first > third)
        rra(a);
}

void quicksort_stack(t_stack *a, t_stack *b, int size)
{
    if (size <= 3)
    {
        sort_3(a);
        return;
    }
    int pivot = a->array[a->top];
    int elements = size;
    int pushed = 0;
    while (elements--)
    {
        if (a->array[a->top] < pivot)
        {
            pb(a, b);
            pushed++;
        }
        else
            ra(a);
    }
    while (size - pushed > 0)
    {
        rra(a);
        size--;
    }
    pb(a, b);
    pushed++;
    quicksort_stack(a, b, size - pushed);
    while (pushed--)
        pa(a, b);
}

void push_swap(t_stack *a, t_stack *b)
{
    int size = a->top + 1;
    
    // Handle empty or single element stack
    if (size <= 1)
        return;
        
    quicksort_stack(a, b, size);
}
