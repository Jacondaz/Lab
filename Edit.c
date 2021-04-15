#include<stdio.h>
#include<stdlib.h>
#include"structs.h"
void Edit(films *head){
	int y;
    	do{
	        printf("Выберете ,что нужно изменить:\n"
        	"Изменить название.[1]\nИзменить жанр.[2]\n"
	        "Изменить цену.[3]\nВыход из режима редактирования.[4]\n");
        	scanf("%d",&y);
	        getchar();
        	switch(y){
			case 1:
				free(head->name);
				printf("Введите новый название: ");
				head->name=Vvod();
			break;
			case 2:
				free(head->genre);
				printf("Введите новый жанр: ");
				head->genre=Vvod();
			break;
			case 3:
				printf("Введите новую цену: ");
				scanf("%f",&head->price);
			default:
				printf("Команды под данным номером не существует.\n");
			break;
	        }
    	}
	while(y !=7);
}
