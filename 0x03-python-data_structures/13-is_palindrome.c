#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * is_palindrome - function that checks if  single linked listis palindrome
 * @head: Head of single linked list
 * Return: 0 if it is not palindrom, 1 if it is palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *start = NULL, *end = NULL;
	unsigned int i = 0, len = 0, len_cyc = 0, len_list = 0;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (1);

	start = *head;
	len = listint_len(start);
	len_cyc = len * 2;
	len_list = len_cyc - 2;
	end = *head;


	for (; i < len_cyc; i = i + 2)
	{
		if (start[i].n != end[len_list].n)
			return (0);

		len_list = len_list - 2;
	}
	return (1);
}
/**
 * get_nodeint_at_index - the function that gets a node from linked list
 * @head: head of the linked list
 * @index: index that need to be finded in the list
 * Return: the specific nod of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int iter_items = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (iter_items == index)
				return (current);

			current = current->next;
			++iter_items;
		}
	}
	return (NULL);
}
/**
 * listint_len - it counts number of lists in linked list
 * @h: linked list to be counted
 * Return: number of lists in linked list
 */
size_t listint_len(const listint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		++length;
		h = h->next;
	}
	return (length);
}
