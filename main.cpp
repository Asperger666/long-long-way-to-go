#include <iostream>

using namespace std;

int main()
{
    char s[100]="This is only for practice.";
    char *p;
    for(p=&s[0];*p!='\0';) *p++=0; //ɾ���ַ����е�ÿһ���ַ�
    cout<<s<<endl;//����Ƿ�ɹ�ɾ����ÿһ���ַ�
    return 0;
}
