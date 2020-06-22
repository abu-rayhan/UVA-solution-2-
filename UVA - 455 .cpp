#include<bits/stdc++.h>

using namespace std;
int boka(string s,string b,int a[]){
    int i=0,j=0;
    vector<int>v;
    while(i<s.size()){
        if(s[i]==b[j]){i++;j++;}
        if(j==b.size()){
            v.push_back(i-j+1);
            j=0;
        }
        if(s[i]!=b[j]){
            if(j)j=a[j-1];
            else i++;
        }
    }
    if(v.size()==s.size()/b.size())return 1;
    else return 0;
}
int main(){
    int n,z=0,t;
    string s;
    cin>>n;
    while(n--){
        int a[100]={0},ar[100]={0};
        if(z)cout<<endl;
        cin>>s;
        int i=1,j=0;
        while(i<s.size()){
            if(s[i]==s[j]){
                j++;
                a[i]=j;
                i++;
            }
            else{
                if(j){
                    j=a[j-1];
                    a[i]=0;
                }
                else{
                    a[i]=0;
                    i++;
                }
            }
        }
        for(i=1;i<=s.size();i++){
            if(s.size()%i)continue;
            string b;
            for(j=0;j<i;j++)b+=s[j];
            int ans=boka(s,b,a);
            if(ans){
                cout<<i<<endl;
                break;
            }
        }
        z=1;
    }
    return 0;
}
