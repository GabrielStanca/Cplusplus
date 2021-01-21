#include <iostream>

using namespace std;

int citire(int n)
{
    int i,v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"Vectroul "<<i<<" :";
        cin>>v[i];
    }
    cout<<endl;
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
int perfect(int m)
{
    int j,s=0;
    for(j=1;j<=m/2;j++)
        if(m%j==0)
        s=s+j;
    if(m==s)
        return 1;
    else
        return 0;
}
int main()
{
    int n,i;
    cin>>n;
    int v[n];
    citire(n);
    for(i=1;i<=n;i++)
        if(perfect(v[i]))
        cout<<v[i]<<endl;
    return 0;
}
