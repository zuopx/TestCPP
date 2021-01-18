/*
变量，常量，枚举
*/
#include <iostream>
using namespace std;

/*
声明局部变量，不会默认初始化？No，会默认初始化；
*/
void func1();
int a;

/*
#define 也是声明常量的方式
*/
void func2();
#define LENGTH 10
#define max(a, b) (a > b ? a : b) // 带参宏名
const int WIDTH = 5;

/*存储类修饰符
static、extern 决定变量、函数的可见性范围和声明周期
*/
void func3();
// extern int counter;  // counter必须声明在别的文件中，extern表示从别的文件找

int main(int argc, char const *argv[])
{
    func3();
    func3();
    return 0;
}

void func1()
{
    cout << a + 1 << endl;

    int b;
    cout << b + 1 << endl;
}

void func2()
{
    cout << LENGTH * WIDTH << endl;
    cout << max(1, 2) << endl;
}

void func3()
{
    static int i = 0;  // 由于被static修饰了，变量i只会声明一次，而且存在直到程序退出
    i++;
    cout << i << endl;
}