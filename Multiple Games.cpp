#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t=1;
	cin>>t;
	while(t--){
	    int n,q,m;
	    cin>>n>>q>>m;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
        int array1[1000001]={};
        map <pair<int,int>,int> mpp;
        while(q--){
            int y,z;
            cin>>y>>z;
            y--,z--;
            if(arr[y]>m){
                continue;
            }
            else if(arr[y]<=m && arr[z]>m){
                array1[arr[y]]++;
                array1[m+1]--;
            }else{
                array1[arr[y]]++;
                array1[m+1]--;
                mpp[{arr[y],arr[z]}]++;
            }
        }
        for(auto x:mpp){
            int a1=x.first.first;
            int b1=x.first.second;
            int l=x.second;
            array1[b1+a1]-=l;
            array1[b1 + 2 * a1]+=l;
            int  c=b1 + 2 * a1;
            while(c+b1 <= m){
                c+=b1;
                array1[c]-=l;
                array1[c+a1]+=l;
                c+=a1;
            }
        }
        int f=0;
        for(int i=1;i<=m;i++){
            array1[i]+=array1[i-1];
            f=max(f,array1[i]);
        }
        cout<<f<<endl;
	}
// 	return 0;
}
