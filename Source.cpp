//подключение библиотеки
#include <iostream> 
using namespace std;
int main() { 
setlocale (LC_ALL, "Rus");
//Пупко Денис
//П43021
/*1. Дано 3 целых числа.Найти количество положительных чисел и количество отрицательных чисел в исходном наборе.*/
int a, b, c;
cin >> a >> b >> c;
int p = 0, o = 0;
if (a > 0) { p++; }
if (b > 0) { p++; }
if (c > 0) { p++; }
if (a < 0) { p++; }
if (b < 0) { p++; }
if (b < 0) { p++; }
cout << "положительные =" << p << endl;
cout << "отрицательные =" << o << endl;
return 0;
}