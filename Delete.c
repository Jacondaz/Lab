#include<stdio.h>
#include<stdlib.h>
#include"structs.h"
films* Delete(films *head)
{
    	films *dop;
    	dop=head->next;
    	free(head->name);
    	free(head->genre);
    	free(head);
	return dop;
}

