#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter num of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elemenst ";
    for(int i=0; i<n; i++)
    {
        cout<<"for a["<<i+1<<"]: ";
        cin>>a[i];
    }
    int tmp;
    for(int i=1; i<n; i++)
    {
        tmp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>tmp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=tmp;
    }
    cout<<"Sorted array is: \n";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

