#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter arra elemenst: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int tmp;
    for(int i=0; i<n-1; i++)
    {
        for(int j =0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]= tmp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {

        cout<<a[i]<<" ";
    }
}
