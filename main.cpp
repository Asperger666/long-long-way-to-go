#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int* x,y;
    x=&a[0];
    y=&a[1];
    a[0]=123;
    a[1]=456;
    cout<<*x<<endl<<*x++<<endl<<*++x;
    return 0;
    }
