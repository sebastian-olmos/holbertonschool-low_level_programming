#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t lis.
 * @h: head pointer to the double linked list.
 * 
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t len = 0;

    for ( ; h; h = h->next)
    {
        printf("%d\n", h->n);
        ++len;
    }
    return (len);
}