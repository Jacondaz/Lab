#include <iostream>
#include "class.h"
#include <string.h>
#include <cstdio>
#include <cstdlib>
#include <fstream>
void show(int &n, list arr[])
{
ifstream f("baza.txt");
for (int i = 0; i < n; i++)
{
cout << "Название: " << arr[i].name << endl;
cout << "Жанр: " << arr[i].genre << endl;
cout << "Цена: " << arr[i].price << endl;
}
menu(n, arr);
}

void add(int &n, list arr[])
{
int j;
char ref[1];
cin.getline(ref, 1);
cout << "Введите количество фильмов для добавления: ";
j = CorInput(20);
ofstream f("baza.txt", ios::app);
for (int i = n; i < n + j; i++)
{
cin.getline(ref, 1);
cout << "Введите название фильма: ";
cin.getline(arr[i].name, 20);
cout << "Введите жанр фильма: ";
cin.getline(arr[i].genre, 20);
cout << "Введите цену фильма: ";
arr[i].price = CorInput(1000);
}
for (int i = n; i < n + j; i++)
{
f << arr[i].name;
f << arr[i].genre;
f << arr[i].price;
}
f.close();
n += j;
menu(n, arr);
}
void find(int &n, list arr[])
{
char last[20];;
char ref[1];
cin.getline(ref, 1);
cout << "Название: ";
cin.getline(last,20);
ifstream f("baza.txt");
for (int i = 0; i < n; i++)
{
if (strcmp(arr[i].name, last) == 0)
{
cout << "Название: " << arr[i].name << endl;
cout << "Жанр: " << arr[i].genre << endl;
cout << "Цена: " << arr[i].price << endl;
break;
}
}
menu(n, arr);
} 
void del(int &n, list arr[])
{
char last[20];
char ref[1];
cin.getline(ref, 1);
cout << "Название фильма: ";
cin.getline(last, 20);
ofstream f("baza.txt", ios::trunc);
for (int z = 0; z < n; z++)
{
if (strcmp(arr[z].name, last) == 0)
{
for (int y = z+1; y < n+1; y++)
{
*arr[y-1].name = *arr[y].name;
*arr[y-1].genre = *arr[y].genre;
arr[y-1].price = arr[y].price;
}
*arr[n].name =0;
*arr[n].genre =0;
arr[n].price = 0;
n--;
}
}
for (int y = 0; y < n+1; y++)
{
f << arr[y].name;
f << arr[y].genre;
f << arr[y].price;
}
f.close();
menu(n, arr);
}
int StrToInt(char* str)
{
int i=0;
int flag=0;
if(strlen(str)>6)
return 0;
while(str[i]!=0){
if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0')
i++;
else{
flag=1;
break;
}
}
if(flag==0)
return atoi(str);
else
return 0;
}
int CorInput(int max)
{
char str[100];
int inp;
while(1){
scanf("%s",str); 
inp=StrToInt(str);
if((inp!=0)&&(inp<=max)&&(inp>0))
break;
cout <<"Введено некорректное значение. Повторите попытку: \n";
}
return inp;
} 
