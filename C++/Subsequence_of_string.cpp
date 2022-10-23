#include <bits/stdc++.h>
using namespace std;

void solve(string str,string ans,int index,vector<string>& subseq){
    if(index>=str.size()){
        if(ans.size()!= 0){
            subseq.push_back(ans);
        }
        return;
    }
    solve(str,ans+str[index],index+1,subseq);
    solve(str,ans,index+1,subseq);
    return;
}

vector<string> subsequences(string str){
    vector<string> subseq;
    string ans = "";
    int index = 0;
    
    solve(str,ans,index,subseq);
	return subseq;
}