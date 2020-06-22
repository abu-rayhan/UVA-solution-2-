#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define pb push_back
#define vec vector<ll>
#define pr pair<ll,ll>
struct node{
    ll r,c;
    node(ll x,ll y){
        r=x;
        c=y;
    }
};
ll fx[]={0,0,1,-1};
ll fy[]={1,-1,0,0};
int main()
{
    //fast;
    ll r,c,i,j,t,s1,s2,d1,d2,r1,n,c1;
    while(scanf("%lld %lld",&r,&c)){
        if(!r&&!c)break;
        map<pr,ll>mat;
        scanf("%lld",&t);
        while(t--){
            scanf("%lld %lld",&r1,&n);
            while(n--){
                scanf("%lld",&c1);
                mat[{r1,c1}]=-1;
            }
        }
        scanf("%lld %lld %lld %lld",&s1,&s2,&d1,&d2);
        queue<node>q;
        q.push(node(s1,s2));
        ll z=0;
        while(!q.empty()){
            node u=q.front();
            q.pop();
            for(i=0;i<4;i++){
                ll x=u.r+fx[i];
                ll y=u.c+fy[i];
                if(mat[{x,y}]==0&&x>=0&&x<r&&y>=0&&y<c&&!(x==s1&&y==s2)){
                    mat[{x,y}]=mat[{u.r,u.c}]+1;
                    //cout<<x<<" "<<y<<" "<<mat[x][y]<<endl;
                    q.push(node(x,y));
                    if(x==d1&&y==d2){z=1;break;}
                }
            }
            if(z)break;
        }
        printf("%lld\n",mat[{d1,d2}]);
    }
    return 0;
}

