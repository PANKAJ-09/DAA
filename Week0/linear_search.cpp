#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int key;
        cin>>key;
        int c=0;
        bool found=false;
        for(int i=0;i<n;i++)
        {
              c++;
            if(a[i]==key)
            {
                cout<<"element found at index "<<i<<" and total number of comparisions are "<<c<<endl;
                found=true;
                break;
            }
        }
        if(!found)
            cout<<"element not found and total number of comparisions are "<<c<<endl;
    }
    return 0;
}
