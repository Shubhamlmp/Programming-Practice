#include<bits/stdc++.h>

using namespace std;
void knapsack(int wat[],int val[],int w,int n){
    int t[n+1][w+1];
    for(int i=0;i<=n;i++){
        t[i][0]=0;
    }
    for(int i=0;i<=w;i++){
        t[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=w;j++){
            if(wat[i-1]<=j){
                t[i][j]=max(val[i-1]+t[i-1][j-wat[i-1]],t[i-1][j]);
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }

    vector<int> v;
    int i=n,j=w;
    while(i!=0||j!=0){
        if(t[i][j]!=t[i-1][j]){
            v.push_back(i);
            i--;
            j=j-wat[i];
        }
        else{
            i--;
        }
    }
    cout<<"\nMax profit:"<<t[n][w];
    cout<<endl;
    for(i=0;i<v.size();i++){
        cout<<"Item:"<<v[i]<<"-Weight:"<<wat[v[i]-1]<<" value:"<<val[v[i]-1]<<" "<<endl;
    }
}
int main(){
    int n=4;        //number of elements
    int w=8;        //total capacity
    int val[]={3,4,5,6};    //value or profit of each element
    int wat[]={2,3,4,5};    //weight of each element
    knapsack(wat,val,w,n);
    return 0;
}
//Output:
//Max profit:10
//Item:4-Weight:5 value:6
//Item:2-Weight:3 value:4
