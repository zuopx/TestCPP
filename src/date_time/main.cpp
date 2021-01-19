/*
日期和时间

目标：打印和比较
*/
#include <iostream>
#include <ctime>
using namespace std;

/*
整数时间和结构化时间的获取和转化
*/
void func1();

int main(int argc, char const *argv[])
{
    func1();
    return 0;
}

void func1()
{
    time_t t = time(NULL);
    char* t_str = ctime(&t);  // time_t to str
    cout << t << endl;
    cout << t_str << endl;
    tm* t_tm = localtime(&t);  // time_t to tm
    
    t = mktime(t_tm);  // tm to time_t
    t_str = asctime(t_tm);  // tm to str
    cout << t << endl;
    cout << t_str << endl;
}
