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
        int high=n-1;
        int count=0;

        while(low<=high)
        {
            int mid=(low+high)/2;

            if(v[mid]==k)
            {
                count++;
                for(int i=mid+1;i<n;i++)
                {
                    if(v[i]==k)
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                }
                for(int j=mid-1;j>=0;j--)
                {
                     if(v[j]==k)
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                }
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
        if(count==0)
        {
            cout<<"Key not present"<<endl;
        }
        else
        {
            cout<<k<<" - "<<count<<endl;
        }
    }
    return 0;
}
