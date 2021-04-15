#include<stdio.h>
#include"structs.h"
#include<string.h>
#include<stdlib.h>
char* read2 (FILE *f,char *a){
	char *b;
	b=(char*)malloc(sizeof(char)*strlen(a)+1);
	strcpy(b,a);
	return b;
}
films* read (char*filename){
	FILE *f;
	char *k;
	char a[50];
	films *head=NULL;
	f=fopen(filename,"r");
	if(f==NULL)return head;
	while (1){
		films *tmp;
		k=fgets(a,50,f);
		if(k==0)break;
		tmp=(films*)malloc(sizeof(films));
		tmp->name=read2(f,a);
		fgets(a,50,f);
		tmp->genre=read2(f,a);
		fgets(a,50,f);
		fscanf(f,"%f",&tmp->price);
		fgets(a,50,f);
		tmp->next=head;
		head=tmp;
	}
	fclose(f);
	return head;
}

