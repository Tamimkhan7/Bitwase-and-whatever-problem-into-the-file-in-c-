#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base:: sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define len(a) sizeof(a) / sizeof(int)
int main ()
{
    IOS;
    int a,b,d;
    cin>>a>>b>>d;
    int c= a>>d;
    int f = a<<d;
    cout<<c<<endl;
    cout<<f<<endl;
    return 0;
}
