#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> job_id,profit,deadline;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        job_id.push_back(a);
    }
    for(int i=0;i<n;i++){
        int a;cin>>a;
        deadline.push_back(a);
    }
    for(int i=0;i<n;i++){
        int a;cin>>a;
        profit.push_back(a);
    }
    vector<pair<int,pair<int,int>>> jobs;
    for(int i=0;i<n;i++){
        jobs.push_back(make_pair(profit[i],make_pair(job_id[i],deadline[i])));
    }
    sort(jobs.begin(),jobs.end(),greater<>());
   /* for(int i=0;i<jobs.size();i++){
        cout<<jobs[i].first<<" "<<jobs[i].second.first<<" "<<jobs[i].second.second<<" "<<endl;
    }*/
    int maxideadline=*max_element(deadline.begin(),deadline.end());
    int maxprofit=0;
    int count=0;
    vector<int> seq(maxideadline+1,-1);
    for(int i=0;i<jobs.size();i++){
        int a=jobs[i].first;
        int b=jobs[i].second.first;
        int c=jobs[i].second.second;
        
        for(int k=c;k>0;k--){
            if(seq[k]== -1){
                count++;
                maxprofit+=a;
                seq[k]=b;
                break;
            }
        }
    }
    cout<<count<<endl;
    cout<<maxprofit<<endl;
    return 0;
}