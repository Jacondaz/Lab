#include <iostream>
#include <string.h>
#include <cstdio>
#include <cstdlib>
#include <fstream>
using namespace std;
class list
{
public:
char name[20];
char genre[20];
int price;
}
;
void menu(int &n, list arr[]);
void show(int &n, list arr[]);
void add(int &n, list arr[]);
void del(int &n, list arr[]);
void find(int &n, list arr[]);
int StrToInt(char* str);
int CorInput(int max); 
