#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)  // two pointers are intiated i,j and k for printing array item.
    {
        for(int j=i+1;j<=n;j++)
        {   sum=0;
            for(int k=i;k<j;k++)
            {
                sum=sum+a[k]
            }
            cout<<sum;
            cout<<endl;
        }
    }
}
