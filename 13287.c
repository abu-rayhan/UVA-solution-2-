#include<stdio.h>

int main(){
    long long w,n,a,b,s;
    while(scanf("%lld",&w)!=EOF){
        scanf("%lld",&n);
        s=0;
        while(n--){scanf("%lld %lld",&a,&b);s+=(a*b);}
        printf("%lld\n",s/w);
    }
    return 0;
}
