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
        int c=0;
        int key;
        cin>>key;
        bool x=true;
        for(int i=0;i<n;i++)
        {
            c++;
            if(v[i]==key)
            {
                x=false;
                cout<<"Present"<<" "<<c<<endl;
                break;
            }
        }
        if(x)
        {
            cout<<"Not Present"<<" "<<c<<endl; 
        }
    }
    return 0;
}
