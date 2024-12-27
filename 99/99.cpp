#include "StdAfx.h"
#include <iostream>
#include <limits>
#include <string>
using namespace std;
int add(int a, int b) {
    return a + b; // 返回 a 和 b 的和
}
void modify(int &num) {
    num += 10; // 修改引用参数
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
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);  
    cout << "\t最大值：" << (numeric_limits<bool>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;  
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);  
    cout << "\t最大值：" << (numeric_limits<char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;  
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);  
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;  
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);  
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;  
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);  
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;  
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);  
    cout << "\t最大值：" << (numeric_limits<short>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;  
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);  
    cout << "\t最大值：" << (numeric_limits<int>::max)();  
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;  
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);  
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;  
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);  
    cout << "\t最大值：" << (numeric_limits<long>::max)();  
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;  
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);  
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;  
    cout << "double: \t" << "所占字节数：" << sizeof(double);  
    cout << "\t最大值：" << (numeric_limits<double>::max)();  
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;  
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);  
    cout << "\t最大值：" << (numeric_limits<long double>::max)();  
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;  
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);  
    cout << "\t最大值：" << (numeric_limits<float>::max)();  
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;  
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);  
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();  
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;  
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;  
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
    cout << "type: \t\t" << "************size**************"<< endl; 
	int a;
    cout << "请输入一个数字: ";
    cin >> a; // 从用户输入读取数字
    cout << "你输入的数字是: " << a << endl; // 输出用户输入的数字
	if (a > 0) {
    cout << "a 是正数" << endl; // 如果 a 大于 0
} else {
    cout << "a 不是正数" << endl; // 否则
}
	int day = a;
switch (day) {
    case 1:
        cout << "星期一" << endl;
        break;
    case 2:
        cout << "星期二" << endl;
        break;
    default:
        cout << "不是工作日" << endl;
}
for (int i = 0; i < 5; i++) {
    cout << "i 的值: " << i << endl; // 输出 i 的值
}
int j = 0;
while (j < 5) {
    cout << "j 的值: " << j << endl; // 输出 j 的值
    j++;
}
int k = 0;
do {
    cout << "k 的值: " << k << endl; // 输出 k 的值
    k++;
} while (k < 5);

int result = add(5, 3); // 调用函数
    cout << "5 + 3 = " << result << endl;
	
    int x = 5;
    modify(x);
    cout << "x 的值: " << x << endl; // 输出 15
 	int arr[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " "; // 输出数组元素
}
int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        cout << matrix[i][j] << " " << endl; // 输出矩阵元素
    }
}	
string str = "字符串";
cout << "字符串长度: " << str.length() << endl; // 输出字符串长度
str += "+------长度"; // 连接字符串
cout << str << endl; // 输出 "Hello World"
int a1 = 10;
int *p = &a1; // p 存储 a 的地址
cout << "a 的值: " << *p << endl; // 输出 10

int arrb[5] = {1, 2, 3, 4, 5};
int *pb = &arrb[3]; // 等价于 int *p = &arr[0];
cout << "*pb的数是："<< *(pb + 1) << endl; // 输出 2
pb = NULL;
int bc = 50;
int &r = bc; // r 是 b 的引用
r = 30; // 修改 r 也会修改 b
cout << "bc 的值: " << bc << endl; // 输出 30
system("pause");
	return 0;
}