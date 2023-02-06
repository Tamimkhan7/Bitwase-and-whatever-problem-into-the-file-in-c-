#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int k = (a<b) && (b++);//using and operator
    cout<<k<<endl;
    cout<<b<<endl;

    int l = (a<b) || (b++);//using or operator
    cout<<l<<endl;
    cout<<b<<endl;

}
