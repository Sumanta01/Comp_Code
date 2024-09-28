#include<bits/stdc++.h>
using namespace std;

int solve(string str, unordered_map<char, int> umap, int k){
	int count = 0, maxSize = 0;
	int i = 0, j = 0;
	while(j < str.length()){
		if(umap[str[j]] == 1){
			count++;
		}
		while(count > k and i <= j){
			if(umap[str[i]] == 1){
				count--;
			}
			i++;
		}
		maxSize = max(maxSize, j - i + 1);
		j++;
	}
	return maxSize;
}

int main(){
	string p, q;
	cin>>p;
	cin>>q;
	int k;
	cin>>k;
	unordered_map<char, int> umap;
	for(int i = 0; i < 26; i++){
		if(q[i] == '0'){
			umap[i + 'a']++;
		}
	}
	cout<<solve(p, umap, k)<<endl;
}