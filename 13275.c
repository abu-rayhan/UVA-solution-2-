#include<stdio.h>

int rayhan(int year)
 {
    if (year % 400 == 0) return 1;
    else if(year % 100 == 0) return 0;
    else if(year % 4 == 0) return 1;
    else return 0;
 }
int main(){
    int t,i,j,d,m,y,qy,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d %d",&d,&m,&y,&qy);
        if(rayhan(y)==1&&d==29){
            c=0;
            for(j=y+4;j<=qy;j+=4){
               if(rayhan(j)==1)c++;
            }
            printf("Case %d: %d\n",i,c);
        }
        else printf("Case %d: %d\n",i,qy-y);
    }
    return 0;
}
