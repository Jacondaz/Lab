#include<stdio.h>
#include<string.h>
#include"structs.h"
films *Search(char *str,films *head){
    while(head !=NULL){
        if(!strcmp(head->name,str))
        	break;
        else head=head->next;
    }
    return head;
}

