#include <iostream>

using namespace std;

void gaseste_cifra(int n, int k)
{
    int i=1,m=n;
    while(i<k)
    {
       m=n%10;
       n=n/10;
       i++;
    }

    cout<<n%10;

}

int main()
{
    int i=1,n,k;
    cin>>n;
    cin>>k;
    gaseste_cifra(n,k);
    return 0;
}
