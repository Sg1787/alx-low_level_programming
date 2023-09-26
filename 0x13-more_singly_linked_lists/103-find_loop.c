#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
listint_t *fast = head;
listint_t *slow = head;

if (!head)
return (NULL);

while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (fast == slow)
{
slow = slow->next;
fast = fast->next;
{
slow = head;
while (slow != fast)

}
return (fast);
}
}

return (NULL);
}
