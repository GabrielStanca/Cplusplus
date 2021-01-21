// Ex 4 b,c
#include <iostream>

using namespace std;

int main()
{
    int B[8][8],A[8][8],C[8][8],p=1,i,j,k,n,s=0;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>B[i][j];
    for(i=1;i<=n;i++)
        {for(j=1;j<=n;j++)
        cout<<B[i][j]<<" ";
        cout<<endl;}
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            if(j%2!=0)
                p=p*B[i][j];
        }
    cout<<"b) Produsul de pe coloanele impare este: "<<p<<endl;

    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        C[i][j]=B[i][j]+B[j][i];

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
    {
        s=0;
        for(k=1;k<=n;k++)
            s=s+C[i][k]*C[k][j];
        A[i][j]=s;}
    }
    cout<<"c) A=(B+Bt)^2= "<<endl;
    for(i=1;i<=n;i++)
        {for(j=1;j<=n;j++)
        cout<<A[i][j]<<" ";
        cout<<endl;}

    return 0;
}
