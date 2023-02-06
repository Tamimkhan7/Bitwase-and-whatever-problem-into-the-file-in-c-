#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,pos,cout=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>pos;
    for(int i=pos-1; i<n; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    for(int j=0; j<n; j++)
    {
        cout<<" "<<arr[j];
    }
    cout<<endl;
}
