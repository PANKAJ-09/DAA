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
		int shifts=0;
		int comp=0;
		for(int i=1;i<n;i++)
		{
			int current=v[i];
			int j=i-1;
			shifts++;
			while(v[j]>current and j>=0)
			{
				shifts++;
				comp++;
				v[j+1]=v[j];
				j--;
			}
			v[j+1]=current;
		}
		for(int i=0;i<n;i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl<<"comparisions = "<<comp<<endl<<"shifts = "<<shifts<<endl;
	}
	return 0;
}
