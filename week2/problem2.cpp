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

        bool x=false;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                //binary search to find the sum
                int k=v[i]+v[j];
                int low=j+1;
                int high=n-1;
                while(low<=high)
                {
                    int mid=(low+high)/2;
                    if(v[mid]==k)
                    {
                        x=true;
                        cout<<i+1<<" "<<j+1<<" "<<mid+1<<endl;
                        break;
                    }
                    else if(v[mid]>k)
                    {
                        high=mid-1;
                    }
                    else
                    {
                        low=mid+1;
                    }
                }
                if(x==true)
                {
                    break;
                }
            }
            if(x==true)
            {
                break;
            }
        }
        if(x==false)
        {
            cout<<"No Sequence found"<<endl;
        }
    }
    return 0;
}
