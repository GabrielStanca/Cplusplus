#include <iostream>

using namespace std;

void prim(int a[],int &n)
{
    int i,contor=0,j=1;
    for(i=1;i<=n;i++)
    {j=1;
    contor=0;
        while(j<=a[i])
    {
        if(a[i]%j==0)
            contor++;
        j++;
    }
    if(contor==2)
        cout<<a[i]<<" ";
    }
}

int main()
{
   int n,i;
   cin>>n;
   int a[n];
   for(i=1;i<=n;i++)
    cin>>a[i];
   prim(a,n);
    return 0;
}
