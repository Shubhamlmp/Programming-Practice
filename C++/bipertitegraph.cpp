#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> col;
bool biper = true;
void color(int u, int curr)
{ // cout<<col[u]<<" ";
    if (col[u] != -1 and col[u] != curr)
    {  
       biper = false;
        return;
    }
    col[u] = curr;
    if (vis[u])
    {
        return;
    }
    vis[u] = true;
    for (auto i : adj[u])
    {
        color(i, curr xor 1);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n, false);
    col = vector<int>(n, -1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            color(i, 0);
        }
    }
    if (biper)
    {
        cout << "bipertite";
    }
    else
    {
        cout << "not bipertitie";
    }
    return 0;
}
