#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    if (a>b)
    {
        /* code */
        e = a;
    }
    else
    {
        e = b;
    }
     if (c>d)
    {
        /* code */
        f = c;
    }
    else
    {
        f = d;
    }
    if (e>f)
    {
        cout<<e;
    }
    else
    {
        cout<<f;
    }
    
    return 0;
}