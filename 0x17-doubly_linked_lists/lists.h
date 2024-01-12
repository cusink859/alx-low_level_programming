#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct distint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node 
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct distint_s
{
	int n;
	struct distint_s *prev;
	struct distint_s *next;
} distint_t;

size_t print_distint(const distint_t *h);2
size_t distint_len(const distint_t *h);
distint_t *add_dnodeint(distint_t **head, const int n);
distint_t *add_dnodeint_end(distint_t **head, const int n);
void free_distint(distint_t *head);
distint_t *get_dnodeint_at_index(distint_t *head, unsigned int index);
int sum_distint(distint_t *head);
distint_t *insert_dnodeint_at_index(distint_t **h, unsigned int id x, int n);
int delete_dnodeint_at_index(distint_t **head, unsigned int index)

#endif
