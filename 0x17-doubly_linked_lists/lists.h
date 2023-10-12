#ifndef LISTS_H
#define LISTS_H

/*
 * File: lists.h
 * Auth: Musa_kalamz A Ogunsolu
 * Desc: Header file cobtaibibg all function prototypes and structures
 *	  for 0x17-doubly_linked_lists directory.
 */

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* LISTS_H */
