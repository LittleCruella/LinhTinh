

#include <iostream>
#include <vector>

using namespace std;

int f[1001];
int a[1001][1001];
int n, m, l, r;
vector <int> adj[1001];

void inp()
{
    int road = 0;

    for (int i = 0; i < m; i++)
    {
        
        int x, y; cin >> x >> y;
        if (x < y)
            adj[x].push_back(y);
        
        
    }
    
}
void dfs(int u)
{
    f[u] = 1;
    for (int x : adj[u])
    {
        if (f[x] != 1)
        {
            
            dfs(x);
        }
    }
}

int cnt()
{
    int dem = -1;
    for (int i = 0; i < n; i++)
    {
        if (f[i] != 1)
        {
            dem++;
            dfs(i);
        }
    }
    return dem;
}



void opt()
{
    int road = 0;
    for (int i = 0; i < n; i++)
    {
        road = road + adj[i].size();
    }
    int res1 = road * r + cnt() * l;
    int res2 = n * l;
    if (res1 < res2)
        cout << res1;
    else
        cout << res2;
    
    
    

}


int main()
{
    cin >> n >> m;
    inp();
    cout << cnt();


    system("pause");
    return 0;
}


