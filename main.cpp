#include <iostream>
#include "class.h"
#include <string.h>
#include <cstdio>
#include <cstdlib>
#include <fstream>
int main()
{
cout << "Расписание сеансов фильмов на 07.12.20'!" << endl;
int n;
int k = 100;
list *arr;
arr = new list[k];
menu(n, arr);
return 0;
}
void menu(int &n, list arr[])
{
int number;
cout << "[1] Вывести информацию" << endl;
cout << "[2] Добавить фильм" << endl;
cout << "[3] Удалить фильм" << endl;
cout << "[4] Найти инвентарь и вывести информацию о нем" << endl;
cout << "[5] Выход" << endl;
cout << "Введите свой выбор:" << endl;
cin >> number;
if(number<1||number>5)
{
cout << "Некорректный ввод. Попробуйте еще раз: \n";
menu(n,arr);
}
else
{
switch (number)
{
case 1:
{
show(n, arr);
break;
}
case 2:
{
add(n, arr);
break;
}
case 3:
{
del(n, arr);
break;
}
case 4:
{
find(n, arr);
break;
}
case 5:
{
delete[] arr;
exit(0);
}
}
}
}
