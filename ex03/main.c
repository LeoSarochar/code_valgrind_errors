#include "main.h"

void push_back(node_t *head, void *data)
{
    node_t *value;
    value->value = "Salut";
    value->next = NULL;
    head->next = value;
}

int main(int ac, char **av)
{
    node_t *head = NULL;
    push_back(head, "Salut");
    printf("value of next : %s\n", head->next->value);
}