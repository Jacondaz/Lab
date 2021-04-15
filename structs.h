#include<stdio.h>
typedef struct films{
	char* name;
	char* genre;
	float price;
	struct films* next;
}films;
films* Delete(films *head);
films *Add(films * head);
films *Search(char *str,films *head);
char* read2 (FILE *f,char *a);
films* read();
void Edit(films *head);
char* Vvod();
void Zapis(films *head,char *filename);
void menu();

