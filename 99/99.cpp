#include "StdAfx.h"
#include <iostream>
#include <limits>
#include <string>
using namespace std;
int add(int a, int b) {
    return a + b; // ���� a �� b �ĺ�
}
void modify(int &num) {
    num += 10; // �޸����ò���
}
float multiply(float a, float b) {
    return a * b;
}
 
int multiply(int a, int b) {
    return a * b;
}
inline int square(int x) {
    return x * x;
}
int main() {
	
     for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << "*" << i << "=" << i * j << "\t";
        }
        cout << endl;
    }
	system("pause");
	cout << "type: \t\t" << "************size**************"<< endl;  
    cout << "bool: \t\t" << "��ռ�ֽ�����" << sizeof(bool);  
    cout << "\t���ֵ��" << (numeric_limits<bool>::max)();  
    cout << "\t\t��Сֵ��" << (numeric_limits<bool>::min)() << endl;  
    cout << "char: \t\t" << "��ռ�ֽ�����" << sizeof(char);  
    cout << "\t���ֵ��" << (numeric_limits<char>::max)();  
    cout << "\t\t��Сֵ��" << (numeric_limits<char>::min)() << endl;  
    cout << "signed char: \t" << "��ռ�ֽ�����" << sizeof(signed char);  
    cout << "\t���ֵ��" << (numeric_limits<signed char>::max)();  
    cout << "\t\t��Сֵ��" << (numeric_limits<signed char>::min)() << endl;  
    cout << "unsigned char: \t" << "��ռ�ֽ�����" << sizeof(unsigned char);  
    cout << "\t���ֵ��" << (numeric_limits<unsigned char>::max)();  
    cout << "\t\t��Сֵ��" << (numeric_limits<unsigned char>::min)() << endl;  
    cout << "wchar_t: \t" << "��ռ�ֽ�����" << sizeof(wchar_t);  
    cout << "\t���ֵ��" << (numeric_limits<wchar_t>::max)();  
    cout << "\t\t��Сֵ��" << (numeric_limits<wchar_t>::min)() << endl;  
    cout << "short: \t\t" << "��ռ�ֽ�����" << sizeof(short);  
    cout << "\t���ֵ��" << (numeric_limits<short>::max)();  
    cout << "\t\t��Сֵ��" << (numeric_limits<short>::min)() << endl;  
    cout << "int: \t\t" << "��ռ�ֽ�����" << sizeof(int);  
    cout << "\t���ֵ��" << (numeric_limits<int>::max)();  
    cout << "\t��Сֵ��" << (numeric_limits<int>::min)() << endl;  
    cout << "unsigned: \t" << "��ռ�ֽ�����" << sizeof(unsigned);  
    cout << "\t���ֵ��" << (numeric_limits<unsigned>::max)();  
    cout << "\t��Сֵ��" << (numeric_limits<unsigned>::min)() << endl;  
    cout << "long: \t\t" << "��ռ�ֽ�����" << sizeof(long);  
    cout << "\t���ֵ��" << (numeric_limits<long>::max)();  
    cout << "\t��Сֵ��" << (numeric_limits<long>::min)() << endl;  
    cout << "unsigned long: \t" << "��ռ�ֽ�����" << sizeof(unsigned long);  
    cout << "\t���ֵ��" << (numeric_limits<unsigned long>::max)();  
    cout << "\t��Сֵ��" << (numeric_limits<unsigned long>::min)() << endl;  
    cout << "double: \t" << "��ռ�ֽ�����" << sizeof(double);  
    cout << "\t���ֵ��" << (numeric_limits<double>::max)();  
    cout << "\t��Сֵ��" << (numeric_limits<double>::min)() << endl;  
    cout << "long double: \t" << "��ռ�ֽ�����" << sizeof(long double);  
    cout << "\t���ֵ��" << (numeric_limits<long double>::max)();  
    cout << "\t��Сֵ��" << (numeric_limits<long double>::min)() << endl;  
    cout << "float: \t\t" << "��ռ�ֽ�����" << sizeof(float);  
    cout << "\t���ֵ��" << (numeric_limits<float>::max)();  
    cout << "\t��Сֵ��" << (numeric_limits<float>::min)() << endl;  
    cout << "size_t: \t" << "��ռ�ֽ�����" << sizeof(size_t);  
    cout << "\t���ֵ��" << (numeric_limits<size_t>::max)();  
    cout << "\t��Сֵ��" << (numeric_limits<size_t>::min)() << endl;  
    cout << "string: \t" << "��ռ�ֽ�����" << sizeof(string) << endl;  
    // << "\t���ֵ��" << (numeric_limits<string>::max)() << "\t��Сֵ��" << (numeric_limits<string>::min)() << endl;  
    cout << "type: \t\t" << "************size**************"<< endl; 
	int a;
    cout << "������һ������: ";
    cin >> a; // ���û������ȡ����
    cout << "�������������: " << a << endl; // ����û����������
	if (a > 0) {
    cout << "a ������" << endl; // ��� a ���� 0
} else {
    cout << "a ��������" << endl; // ����
}
	int day = a;
switch (day) {
    case 1:
        cout << "����һ" << endl;
        break;
    case 2:
        cout << "���ڶ�" << endl;
        break;
    default:
        cout << "���ǹ�����" << endl;
}
for (int i = 0; i < 5; i++) {
    cout << "i ��ֵ: " << i << endl; // ��� i ��ֵ
}
int j = 0;
while (j < 5) {
    cout << "j ��ֵ: " << j << endl; // ��� j ��ֵ
    j++;
}
int k = 0;
do {
    cout << "k ��ֵ: " << k << endl; // ��� k ��ֵ
    k++;
} while (k < 5);

int result = add(5, 3); // ���ú���
    cout << "5 + 3 = " << result << endl;
	
    int x = 5;
    modify(x);
    cout << "x ��ֵ: " << x << endl; // ��� 15
 	int arr[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " "; // �������Ԫ��
}
int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        cout << matrix[i][j] << " " << endl; // �������Ԫ��
    }
}	
string str = "�ַ���";
cout << "�ַ�������: " << str.length() << endl; // ����ַ�������
str += "+------����"; // �����ַ���
cout << str << endl; // ��� "Hello World"
int a1 = 10;
int *p = &a1; // p �洢 a �ĵ�ַ
cout << "a ��ֵ: " << *p << endl; // ��� 10

int arrb[5] = {1, 2, 3, 4, 5};
int *pb = &arrb[3]; // �ȼ��� int *p = &arr[0];
cout << "*pb�����ǣ�"<< *(pb + 1) << endl; // ��� 2
pb = NULL;
int bc = 50;
int &r = bc; // r �� b ������
r = 30; // �޸� r Ҳ���޸� b
cout << "bc ��ֵ: " << bc << endl; // ��� 30
system("pause");
	return 0;
}