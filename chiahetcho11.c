#include <stdio.h>
#define ll long long

int count(ll n){
    int cnt = 0;
    while (n>0){
        cnt++;
        n/=10;
    }
    return cnt;
}
int sum(ll n){
    int sum1 = 0, sum2 = 0;
    int dv, res = 1, cnt = count(n);
    while(res<=cnt){
        dv = n%10;
        if (res%2==0)
            sum1 += dv;
        else
            sum2 += dv;
        res++;
        n/=10;
    }
    int tong = sum1 - sum2;
    if (tong < 0)
        tong *= -1;
    return tong;
}
void main(){
    ll n;
    scanf("%lld",&n);
    int s = sum(n);
    printf("%d ",s);
    if (s%11==0)
        printf("Yes");
    else
        printf("No");
}