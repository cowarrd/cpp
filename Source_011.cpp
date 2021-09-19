//Шестнадцатеричное число
//Напишите функцию, которая считывает с экрана одно число в шестнадцатеричном формате.
//
//unsigned long get_a_hexadecimal();
//Аргументы
//Нет.
//
//Возвращаемое значение
//Число, считанное с экрана.При наличии некорректных символов возвращать 0. Корректными считаются только цифры и заглавные A, B, C, D, E, F.Концом ввода считаются пробел и символ новой строки.

#include <iostream>
#include <sstream>

using namespace std;

unsigned int get_a_hexadecimal()
{
    unsigned int value;
    char str[100];
    cin >> str;
    stringstream ss;
    ss << hex << str;
    ss >> value;
    return value;
}

int main()
{
    cout << get_a_hexadecimal() << endl;
    return 0;
}
