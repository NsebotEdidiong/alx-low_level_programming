#include "lists.h"
/**
* listint_len - return number of elements in a linked list
* @h: linked lists of type listint_t tranversing
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
