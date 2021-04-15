#include<stdio.h>
#include<stdlib.h>
#include"structs.h"
films *Add(films *head){
	films *film=(films*)malloc(sizeof(films));
	printf("Введите название фильма\n");
	film->name=Vvod();
	printf("Введите жанр\n");
	film->genre=Vvod();
	printf("Введите цену\n");
	scanf("%f",&film->price);
        getchar();
	film->next=head;
	return film;
}

