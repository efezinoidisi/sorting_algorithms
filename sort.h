#ifndef _SORT_H
#define _SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void swap(int *a, int *b);
void quick_sort(int *array, size_t size);
void sort_arr(int *array, unsigned int low, unsigned int high, size_t size);
unsigned int part(int *array, size_t low, size_t high, size_t size);
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);


#endif /* _SORT_H */
