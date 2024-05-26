#include<stdio.h>
int main()
{
    long long n,k,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        long long r=(n+k-1)/k;
        k=k*r;
        printf("%d\n",(n+k-1)/n);
    
    }
    return 0;
}
