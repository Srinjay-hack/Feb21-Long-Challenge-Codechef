#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int frog[30],cost[30];
int hit;

void arrange(int index,bool com){
	int flag=0;
	for(int i=index;i<30;i++){
		if(frog[i]==-1){continue;}
		for(int j=i+1;j<30;j++){
			if(frog[j]==-1){continue;}
			if(frog[i]>frog[j]){
				int ii=i+cost[i];
				hit++;
				while(frog[ii]!=-1){
					if(frog[ii]>frog[i]){
						arrange(ii,true);
						break;
					}
					ii=ii+cost[i];
					hit++;
				}
				frog[ii]=frog[i];
				cost[ii]=cost[i];
				frog[i]=-1;
				cost[i]=0;
				flag=1;
				break;
			}
		}
		if(com && flag==0){
			int ii=i+cost[i];
			hit++;

		while(frog[ii]!=-1){
			if(frog[ii]>frog[i]){
				arrange(ii,true);
				break;
			}
			ii=ii+cost[i];
			hit++;
	}
	frog[ii]=frog[i];
	cost[ii]=cost[i];
	frog[i]=-1;
	cost[i]=0;
	com=false;
}

}
}

int main()
{
	fastio
	int t;
	cin>>t;
	int n;
	while(t--){
		hit=0;
		memset(frog,-1,sizeof(frog));
		memset(cost,0,sizeof(cost));
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>frog[i];
		}
		for(int i=0;i<n;i++){
			cin>>cost[i];
		}
		arrange(0,false);
		cout<<hit<<endl;

	}




	return 0;
}
