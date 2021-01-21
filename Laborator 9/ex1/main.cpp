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
int echilibrat(int n)
{
    int j,np,ni;
    while(n)
    {
        j=n%10;
        if(j%2==0)
            np++;
        else
            ni++;
    }
    if(np==ni)
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
        if(echilibrat(v[i]))
        cout<<v[i]<<endl;
    return 0;
}
