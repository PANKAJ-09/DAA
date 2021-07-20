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
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int k;
        cin>>k;
        int low=0;
        int high=0;
        int count=0;
        bool y=true;
        while(pow(2,high) <=n )
        {
            
            if(v[pow(2,high)] == k or v[pow(2,low)] == k)
            {
                count++;
                y=false;
                cout<<"Present "<<count<<endl;
                break;
            }
            else if(v[pow(2,high)] < k)
            {
                count++;
                low=high;
                high++;
            }
            else
            {
                bool x=true;
                for(int i=pow(2,low)+1;i<pow(2,high);i++)
                {
                    count++;
                    if(v[i]==k)
                    {
                        y=false;
                        x=false;
                        cout<<"Present "<<count<<endl;
                        break;
                    }
                }
                if(x)
                {
                    y=false;
                    cout<<"Not Present "<<count<<endl;
                }
                break;
            }
        }
        if(y)
        {
            for(int i=pow(2,low);i<n;i++)
            {
                count++;
                 if(v[i]==k)
                {
                    y=false;
                    cout<<"Present "<<count<<endl;
                    break;
                }
            }
            if(y)
            {
                cout<<"Not Present "<<count<<endl;
            }
        }
    }
    return 0;

}
