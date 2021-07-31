#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
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
		int swaps=n-1;
		int comp=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				comp++;
				if(v[j]<v[i])
				{
					swap(v[i],v[j]);
				}
			}
		}
			for(int i=0;i<n;i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl<<"comparisions = "<<comp<<endl<<"swaps = "<<swaps<<endl;
	}
	return 0;
}
