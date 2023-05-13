#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s - single linked list struct
 * @n: an integer of member
 * @next: address that points to next
 * Description: single linked list that have node structure
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_s;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned in index);
size_t listint_len(const listint_t *h);
int is_palindrome(listint_t **head);

#endif /* LISTS_H */
