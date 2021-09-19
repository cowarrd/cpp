//Многобоначчи
//Напишите функцию, которая находит число ноначчи с нужным номером.
//
//F(N) = 0, N < 8
//    F(8) = 1
//    F(N) = F(N - 1) + F(N - 2) + ... + F(N - 9), N >= 9
//    Если требуется больше информации о данной последовательности, можете почитать, например, здесь.
//
//    unsigned long long int nonacci(unsigned int n);
//Аргументы
//Одно целое положительное число.
//
//Возвращаемое значение
//Число ноначчи с соответствующим номером.
//
#include <iostream>
using namespace std;

unsigned int sum_of_numbers(unsigned long long int n);
unsigned long long int nonacci(unsigned int n);

//----------------------------------------------------

unsigned long long int nonacci(unsigned int n)
{
    int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 1, fn;
    if (n < 8) return 0;
    if (n == 8) return 1;
    if (n > 8)
    {
        for (int j = 8; j < n; j++)
        {
            fn = f1 + f2 + f3 + f4 + f5 + f6 + f7 + f8;
            f1 = f2 + f3 + f4 + f5 + f6 + f7 + f8;
            f2 = f3 + f4 + f5 + f6 + f7 + f8;
            f3 = f4 + f5 + f6 + f7 + f8;
            f4 = f5 + f6 + f7 + f8;
            f5 = f6 + f7 + f8;
            f6 = f7 + f8;
            f7 = f8;
            f8 = fn;

        }
        return fn;
    }

}

unsigned int sum_of_numbers(unsigned long long int n)
{
    unsigned int res = 0;
    while (n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << sum_of_numbers(nonacci(n)) << endl;
    return 0;
}
