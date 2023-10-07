// Online C++ compiler to run C++ program online
#include <iostream>
 
using namespace std;
 
int main ()
{
   int  var = 20;   // 实际变量的声明
   int  *ip;        // 指针变量的声明
 
   ip = &var;       // 在指针变量中存储 var 的地址
 
   cout << "Value of var variable: " << var << endl;
 
   // 输出在指针变量中存储的地址
   cout << "Address stored in ip variable: " << ip << endl;
 
   // 访问指针中地址的值
   cout << "Value of *ip variable: " << *ip << endl;
 
   return 0;
}

/**
Value of var variable: 20
Address stored in ip variable: 0x7ffd2d0882b4
Value of *ip variable: 20
*/
