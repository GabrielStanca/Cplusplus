#include <iostream>

using namespace std;
int v[100][100];
int citire(int &n, int &m,int v[100][100])
{
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;i++)
        cin>>v[i][j];
}

int main()
{
    int i,j,n,m;
    cin>>n;
    cin>>m;
    citire(n,m,v);

    return 0;
}
