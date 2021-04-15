#include<stdlib.h>
#include<stdio.h>
#include"structs.h"

void main(int argc,char*argv[])
{	
	menu(argv[1]);
}
	void menu(char*filename){
	films *head=NULL;
	films *help;
	films *help2;
	int v;
	head=read(filename);
	read(filename);
	do{
		printf("Расписание сеансов фильмов на 07.12.20.\n"
		"Пожалуйста выберите действие:\n"
		"Добавить фильм.[1]\nУдалить фильм.[2]\nВывести информацию о всех фильмах.[3]\n"
		"Вывести информацию по определенному фильму.[4]\n"
		"Редактировать фильм.[5]\nВыход.[0]\n");
		scanf("%d",&v);
		getchar();
		switch(v)
		{
			case 1:
				head=Add(head);
			break;
			case 2:
				help=head;
				help2=head;
				if(help==NULL){
					printf("Такого фильма нет.\n");
					break;
				}
				printf("Введите название фильма:");
				help=Search(Vvod(),help);
				if(help==NULL){
					printf("Этот фильм ещё не вышел.\n");
					break;
				}
				if(help==head)
					head=Delete(help);
				else{
					while(1){
						if(help2->next==help)
							break;
						else help2=help2->next;
					}
					help2->next=Delete(help);
				}
			break;
			case 3:
				help=head;
				if(help==NULL){
					printf("Еще нет ни одного фильма.\n");
					break;
				}
				while(help !=NULL){
					printf("Название: %sЖанр: %s"
					"Цена: %f\n\n",
					help->name,help->genre,help->price);
					help=help->next;
				}
			break;
			case 4:
				help=head;
				if(help==NULL){
					printf("Еще нет ни одного фильма.\n");
					break;
				}
				printf("Введите название вещи:");
				help=Search(Vvod(),help);
				if(help==NULL){
					printf("Этот фильм ещё не вышел.\n");
					break;
				}
				printf("Название: %sРазмер: %s"
                                        "Цена: %f\n",
                                        help->name,help->genre,help->price);
                                        help=help->next;

			break;
			case 5:
				help=head;
				if(help==NULL){
					printf("Еще нет ни одного фильма.\n");
					break;
				}
				printf("Введите название фильма:");
				help=Search(Vvod(),help);
				if(help==NULL){
					printf("Этот фильм ещё не вышел.\n");
					break;
				}
				Edit(help);
			break;
			case 0:
				Zapis(head,filename);
				printf("\nДо свидания.\n");
			break;
			default:
				printf("Команды под данным номером не существует.\n ");
			break;
		}
	}
	while(v!=0);
}

