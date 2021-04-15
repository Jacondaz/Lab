#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"structs.h"
void Zapis(films *head,char *filename){
    	FILE *f;
    	f=fopen(filename,"w");
	while(head !=NULL){
        	fprintf(f,"%s%s%f ",head->name,head->genre,head->price);
	        head=Delete(head);
	}
    	fclose(f);
}
