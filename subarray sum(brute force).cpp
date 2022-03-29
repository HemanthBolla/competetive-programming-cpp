#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)  // two pointers are intiated i,j and k for printing array item.
    {
        for(int j=i+1;j<=n;j++)
        {
            for(int k=i;k<j;k++)
            {
                cout<<a[k];
            }
            cout<<endl;
        }
    }
}
