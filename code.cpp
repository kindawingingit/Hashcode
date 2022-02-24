#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"

void solve(int n)
{
	map<string,map<string,int>>constributor;
	for(int i=0;i<n;i++)
	{
		string name="";
		int num=0;
		cin>>name>>num;
		for(int j=0;j<num;j++)
		{
			string skill="";
			int power=0;
			cin>>skill>>power;
			map<string, int> umap;
			umap[skill]=power;
		}
		contributor[name].push_back(umap);
	}
	for(auto it: contributor)
	{
		cout<<it.first<<endl;
		for(auto itr: it.second)
		{
			for(auto itrr: itr)
			{
				cout<<itrr.first<<" "<<itrr.second<<endl;
			}
		}
	}
}
void solve2(int num)
{
	map<string, vector<map<string, int>>> project;
	map<string, vector<int>> projectDetails;
	for(int i=0;i<num;i++)
	{
		string projectName="";
		int d=0,s=0,b=0,r=0;
		cin>>projectName>>d>>s>>b>>r;
		// cout<<projectName<<endl;
		projectDetails[projectName]={d,s,b};
		for(int j=0;j<r;j++)
		{
			string name="";
			int level=0;
			cin>>name>>level; 
			map<string, int> umap;
			umap[name]=level;
			project[projectName].push_back(umap);
		}
		
		// project[name]={}
	}

	for(auto it: project)
	{
		cout<<it.first<<endl;
		for(auto itr: it.second)
		{
			for(auto itrr: itr)
			{
				cout<<itrr.first<<" "<<itrr.second<<endl;
			}
		}
	}
}
int main()
{
	
	IOS;
	ll c=0,p=0;
	cin>>c>>p;
	
	solve(c);
	solve2(p);

}