#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <errno.h>

typedef struct {

    int val;
    linked_list *next;

} linked_list;

/**
 * @brief This function allow to insert in queue of a linked list 
 * @param List The pointer to the list where you want to insert 
 * @param Value The value to insert in list 
 * @return The pointer to the head of the list 
*/
linked_list *cAlexInsertInQueue (linked_list *List, int Value);

/**
 * @param This function allow to insert in head of a linked list 
 * @param List The pointer to the list where you want to insert 
 * @param Value The value to insert in list 
 * @return The pointer to the head of the list 
*/
linked_list *cAlexInsertInHead (linked_list *List, int Value);

/**
 * @brief This function allow to print the list 
 * @param list The pointer to the list 
*/
void cAlexPrintLislt (linked_list *List);


