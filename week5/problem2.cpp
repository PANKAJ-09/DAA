#include<iostream>
#include<algorithms>
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
    sort(a,a+n);
    int i=0,j=n-1;
    int key;
    cin>>key;
    while(i<j)
    {
        if(a[i]+a[j]==key)
        {
            cout<<a[i]<<" "<<a[j]<<" ";
        }
        else if(a[i]+a[j]<key)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}
