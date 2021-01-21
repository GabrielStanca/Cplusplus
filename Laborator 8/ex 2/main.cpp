#include <iostream>

using namespace std;

void minim(int a[] , int n)
{
    int i,minim=a[1],pozmin=0,pozmax=0;
    int maxim=0;
    for(i=2;i<=n;i++)
    {
        if(minim>a[i])
        {minim=a[i];
        pozmin=i;}
        if(maxim<a[i])
        {maxim=a[i];
        pozmax=i;}
    }
    cout<<minim<<" poz minim "<<pozmin<<endl;
    cout<<maxim<<" poz maxim "<<pozmax;

    }

    void citire(int a[],int &n)
    {
        int i;
        for(i=1;i<=n;i++)
            cin>>a[i];
    }

int main()
{
    int n;
    cin>>n;
    int a[n];
    citire(a,n);
    minim(a,n);
    return 0;
}
