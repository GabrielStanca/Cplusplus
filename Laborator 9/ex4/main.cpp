#include <iostream>

using namespace std;
int i,j,n,m,v[100],a[100][100],l;

void citireV(int n)
{
    for(i=1;i<=n;i++)
        {cout<<"Vectorul:"<<i<<" ";
        cin>>v[i];}
}
void citireM(int n, int m)
{
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        {cout<<"Elentrul din matrice "<<i<<" "<<j<<" ";
        cin>>a[i][j];}
}

void adaugare(int l,int &n,int m,int v[100],int a[100][100])
{
    n=n+1;
    for(i=n;i>=l;i--)
        for(j=1;j<=m;j++)
        a[i][j]=a[i-1][j];

        for(int k=1;k<=m;k++)
                a[l][k]=v[k];
}

void afisare(int n,int m)
{
    for(i=1;i<=n;i++)
        {for(j=1;j<=m;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
        }
}

int main()
{
    cin>>n;
    cin>>m;
    cin>>l;
    citireV(m);
    citireM(n,m);
    adaugare(l,n,m,v,a);
    afisare(n,m);
    return 0;
}
