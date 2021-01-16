/*
变量，常量，枚举
*/
#include <iostream>
using namespace std;

/*
声明局部变量，不会默认初始化？No，会默认初始化；
*/
int a;
void func1();


/*
#define 也是声明常量的方式
*/
#define LENGTH 10
const int WIDTH = 5;
void func2();

int main(int argc, char const *argv[])
{
    func2();
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
}