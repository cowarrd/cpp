//Факториал
//Напишите функцию, которая находит факториал введенного числа.
//
//unsigned long long int factorial(unsigned int n);
//Аргументы
//Одно целое положительное число.
//
//Возвращаемое значение
//Факториал полученного числа.
//
//#include <iostream>
//using namespace std;
//
//unsigned long long int factorial(unsigned int N)
//{
//    if (N == 0)
//        return 1;
//    return N * factorial(N - 1);
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
//    cout << sum_of_numbers(factorial(n)) << endl;
//    return 0;
//}
