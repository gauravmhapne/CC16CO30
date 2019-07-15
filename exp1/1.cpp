#include<iostream>
using namespace std;

int main()
{
    int i,l;
    char str[10];
    cout<<"Enter length of string";
    cin>>l;
    cout<<"Enter the string";
    for(i=0;i<l;i++)
        cin>>str[i];

    for(i=0;i<l;i++)
    {
        if(str[i]>=48&&str[i]<=57)
            cout<<str[i]<<" is an integer \n";
        else //if(str[i]>=65&&str[i]<=90)
            cout<<str[i]<<" is a character \n";
        //else if(str[i]>=42&&str[i]<=47)
            //cout<<str[i]<<" is an operator \n";
    }
    return 0;
}
