//����������������� �����
//�������� �������, ������� ��������� � ������ ���� ����� � ����������������� �������.
//
//unsigned long get_a_hexadecimal();
//���������
//���.
//
//������������ ��������
//�����, ��������� � ������.��� ������� ������������ �������� ���������� 0. ����������� ��������� ������ ����� � ��������� A, B, C, D, E, F.������ ����� ��������� ������ � ������ ����� ������.

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
