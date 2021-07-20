#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int low=0;
        int high=n-1;
        int c=0;
        int key;
        cin>>key;
        bool x=true;
        while(low<=high)
        {
            c++;
            int mid=low+(high-low)/2;
            if(v[mid]==key)
            {
                x=false;
                cout<<"Present "<<c<<endl;
                break;
            }
            else if(v[mid]<key)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
            
        }
        if(x)
        {
            cout<<"Not Present "<<c<<endl;
        }
    }
    return 0;
}
