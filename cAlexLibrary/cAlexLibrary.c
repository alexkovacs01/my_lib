#include "cAlexLibrary.h"

linked_list *cAlexInsertInQueue (linked_list *List, int Value)
{

    linked_list *tmp;
    linked_list *new_node = (linked_list *) malloc(sizeof(linked_list));

    if (new_node == NULL) 
    {
        perror("Malloc allocation error\n");
        return NULL;
    }

    new_node->val = Value;
    new_node->next = NULL;

    if (List == NULL) {
        List = new_node;
    }
    else 
    {
        
        for (tmp = List; tmp != NULL; tmp = tmp->next);

        tmp->next = new_node;

    }

    return List;

}

linked_list *cAlexInsertInHead (linked_list *List, int Value)
{
    linked_list *new_node = (linked_list *) malloc(sizeof(linked_list));

    if (new_node == NULL)
    {
        perror("The list is empty!\n");
        return NULL;
    }

    new_node->val = Value;
    new_node->next = List;
    
    return new_node;

}

void cAlexPrintLislt (linked_list *List) 
{
    if (List == NULL) 
    {
        printf("The list is empty!\n");
    }   
    else 
    {
        if (List->next != NULL)
        {
            printf("->%i", List->val);
            cAlexPrintLislt(List->next);
        }
        else {
            printf("->%i\n", List->val);
        }
    }
}

