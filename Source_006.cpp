//Фибоначчи
//Напишите функцию, которая находит число Фибоначчи с нужным номером.
//
//F(1) = 0
//F(2) = 1
//F(N) = F(N - 1) + F(N - 2), N >= 3
//Если требуется больше информации о данной последовательности, можете почитать, например, здесь.
//
//unsigned long long int fibonacci(unsigned int n);
//Аргументы
//Одно целое положительное число.
//
//Возвращаемое значение
//Число Фибоначчи с соответствующим номером.
//
//#include <iostream>
//using namespace std;
//
//unsigned int sum_of_numbers(unsigned long long int n);
//unsigned long long int fibonacci(unsigned int n);
//
////----------------------------------------------------
//
//unsigned long long int fibonacci(unsigned int n)
//{
//    int f1 = 0;
//    int f2 = 1;
//    int fn;
//    if (n < 2) return 0;
//    if (n == 2) return 1;
//    if (n > 2)
//    {
//        for (int j = 2; j < n; j++)
//        {
//            fn = f1 + f2;
//            f1 = f2;
//            f2 = fn;
//        }
//        return fn;
//    }
//}
//
//unsigned int sum_of_numbers(unsigned long long int n)
//{
//    unsigned int res = 0;
//    while (n)
//    {
//        res += n % 10;
//        n /= 10;
//    }
//    return res;
//}
//
//int main()
//{
//    unsigned int n;
//    cin >> n;
//    cout << sum_of_numbers(fibonacci(n)) << endl;
//    return 0;
//}