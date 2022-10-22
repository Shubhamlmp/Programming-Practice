#include <bits/stdc++.h>
using namespace std;
#define type int
#define point pair<type, type>
#define X first
#define Y second
 
point operator-(point a, point b)
{
    return {a.X - b.X, a.Y - b.Y};
}
 
type operator*(point a, point b)
{
    return a.X * b.Y - a.Y * b.X;
}
 
int n;
vector<point> P;
point R;
 
int dist(point a, point b)
{
    return (a.X - b.X) * (a.X - b.X) + (a.Y - b.Y) * (a.Y - b.Y); 
}
 
bool cmp(point a, point b)
{
    if((a - R).Y * (b - R).Y <= 0) return a.Y > R.Y;
    int c = (a - R) * (b - R);
    if(c == 0) return dist(R, a) <= dist(R, b);
    return c > 0;
}
 
int main()
{   
    cin >> n >> R.X >> R.Y;
    for(int i = 0; i < n; i++)
    {
        type x, y;
        cin >> x >> y;
        P.push_back({x, y});
    }
    sort(P.begin(), P.end(), cmp);
    for(point p : P) cout << p.X << ' ' << p.Y << '\n';
 
    return 0;
}
