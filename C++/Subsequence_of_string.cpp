/*
 Your task is to find all nonempty possible subsequences of 'STR'.
*/


#include <bits/stdc++.h>
using namespace std;

// function to print all possible subsequences (non empty)

//recursive approach

void solve(string str,string ans,int index,vector<string>& subseq){
    if(index>=str.size()){
        if(ans.size()!= 0){
            //add the subsequence ans in the subseq vector 
            subseq.push_back(ans);
        }
        return;
    }
    // take case
    solve(str,ans+str[index],index+1,subseq);
    // not take case
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