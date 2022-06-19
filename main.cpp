//#include<iostream>
#include <iostream> //标准输入输出流
#include <ctime>
#include <string> //字符串的库
#include <vector>
#define PI 3.14

using namespace std;
struct Name
{
  string firstName;
  string lastName;
} name, *namePointer;
// extern int c;

void test01()
{
    vector<int> v1;
    for (int i = 0; i < 13; i++)
    {
        v1.push_back(i);
    }

    cout << "\nv1的容量 = " << v1.capacity() << endl;
}
int main(int argc, char *argv[])
{
  //执行chcp 65001,避免UTF-8中文乱码
  system("chcp 65001");
  //复习C++基础语法
  // enum color {red,green,blue};
  // color c=green;
  // int count=100;
  // //Lambda表达式： [Capture] (parameter) mutable -> Return-Type { /*Function
  // body*/; }
  // auto total = [](int x,int y)mutable->int{return x+y;};
  // cout<<"Total is "<<total(1,2)<<endl;
  // //Lambda表达式：Capture
  // /*
  // []      // 沒有定义任何变量。使用未定义变量会引发错误。
  // [x, &y] // x以传值方式传入（默认），y以引用方式传入。
  // [&]     // 任何被使用到的外部变量都隐式地以引用方式加以引用。
  // [=]     // 任何被使用到的外部变量都隐式地以传值方式加以引用。
  // [&, x]  // x显式地以传值方式加以引用。其余变量以引用方式加以引用。
  // [=, &z] // z显式地以引用方式加以引用。其余变量以传值方式加以引用。
  // */
  // auto get_count_increased = [count] () mutable -> void {
  //     cout<<"Count is increased!" << endl<< "It's " << ++count <<"
  //     now!"<<endl;
  //     };
  // get_count_increased();
  // cout<<"Real Count is "<<count<<"."<<endl;

  // ctime库
  time_t now = time(0);

  // 把 now 转换为字符串形式
  char *dt = ctime(&now);

  cout << "本地时间：" << dt << endl;

  // 把 now 转换为 tm 结构
  tm *GMT = gmtime(&now);
  dt = asctime(GMT);
  cout << "UTC 日期和时间：" << dt << endl;

  // //使用结构 tm 格式化时间
  // cout << "1970 到目前经过秒数:" << now << endl;
  // tm *ltm = localtime(&now);
  // cout << "年: "<< 1900 + ltm->tm_year << endl;
  // cout << "月: "<< 1 + ltm->tm_mon<< endl;
  // cout << "日: "<<  ltm->tm_mday << endl;
  // cout << "时间: "<< ltm->tm_hour << ":";
  // cout << ltm->tm_min << ":";
  // cout << ltm->tm_sec << endl;
  name.firstName = "Peter";
  name.lastName = "Pan";
  namePointer = &name;
  // cout << name.firstName;
  // cout << (*namePointer).lastName;
  //同cout<<namePointer->lastName，因为 . 的优先级 高于 *，后缀高于一元
  double V,r,S;
  //double PI = 3.14;
  r = 1.44;
  V = 4/3*PI*r*r*r;
  cout << V;
  test01();
}
