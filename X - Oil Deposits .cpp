#include<bits/stdc++.h>

using namespace std;
int fx[]={0,0,1,1,1,-1,-1,-1};
int fy[]={1,-1,0,1,-1,0,1,-1};
struct node{
    int r,c;
};
int main(){
    int n,m,i,j,k;
    while(1){
        cin>>m>>n;
        if(m==0)break;
        char s[101][101];
        int level[101][101]={0};
        for(i=0;i<m;i++){
            for(j=0;j<n;j++)cin>>s[i][j];
        }
        int l=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(s[i][j]=='@'&&level[i][j]==0){
                    l++;
                    level[i][j]=l;
                    node nd,u;
                    queue<node>q;
                    nd.r=i;nd.c=j;
                    q.push(nd);
                    while(!q.empty()){
                        u=q.front();
                        q.pop();
                        for(k=0;k<8;k++){
                            nd.r=u.r+fx[k];
                            nd.c=u.c+fy[k];
                            if(nd.r<0||nd.r>=m||nd.c>=n||nd.c<0)continue;
                            if(s[nd.r][nd.c]=='@'&&level[nd.r][nd.c]==0){
                                level[nd.r][nd.c]=l;
                                q.push(nd);
                            }
                        }
                    }
                }
            }
        }
        cout<<l<<endl;
    }
    return 0;
}

