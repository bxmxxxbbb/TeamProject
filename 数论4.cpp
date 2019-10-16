#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return a/gcd(a,b)*b;
}
ll qow1(ll a,ll b)
{
    ll ans=1;
    while(b>0)
    {
        if(b&1)
            ans=ans*a;
            a=a*a;
            b>>=1;
    }
    return ans;
}
 int main()
 {
     int n;
     printf("该程序可以求两个数的最小公倍数的最大公因数次方\n");
     printf("请输入判断的次数,以回车键结束输入\n");
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
         ll a,b;
         printf("请输入你想要求的数字以空格分隔，以回车键结束\n");
         scanf("%lld%lld",&a,&b);
         ll x=gcd(a,b);
         ll y=lcm(a,b);
         ll ad=qow1(y,x);
         printf("%lld\n",ad);
     }
    return 0;
 }
