#include <iostream>

using namespace std;

int main()
{
    char s[100]="This is only for practice.";
    char *p;
    for(p=&s[0];*p!='\0';) *p++=0; //删除字符串中的每一个字符
    cout<<s<<endl;//检测是否成功删除了每一个字符
    return 0;
}
