#include "libft.h"
#include <stdio.h>

void    add_at_end(t_list *head, void *s)
{
    t_list  *Anas;
    t_list  *ptr;

    Anas = head;
    ptr = (t_list *)malloc(sizeof(t_list));
    if (!ptr)
        return ;
    ptr->content = (char *)s;
    ptr->next = NULL;
    while (Anas->next != NULL)
        Anas = Anas->next;
    Anas->next = ptr;
}

void    print_node(t_list *test_0A)
{
    t_list  *P_node;

    P_node = test_0A;
    while (P_node != NULL)
    {
        printf("%s -> ", (char *)P_node->content);
        P_node = P_node->next;
    }
    putchar('\n');
}

int main()
{
    // t_list  *test_0F;
    // t_list  *test_0P;


    // test_0F = (t_list *)malloc(sizeof(t_list));
    // test_0F = NULL;
    // test_0P = (t_list *)malloc(sizeof(t_list));
    // test_0P->content = "us";
    // test_0P->next = NULL;
    // ft_lstadd_back_bonus(&test_0F, test_0P);
    // print_node(test_0F);
    //t_list  *_R = ft_lstlast_bonus(test_0B);
    //printf("%s\n", (char *)_R->content);

    return (0);
}