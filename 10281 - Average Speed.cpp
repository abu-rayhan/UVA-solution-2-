#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll pret=0,h=0,m=0,sc=0;
    double d=0.0,prev;
    string s;
    while(getline(cin,s)){
        ll c=s.size();
        if(c>=9){
            h=(s[0]-'0')*10+s[1]-'0';
            m=(s[3]-'0')*10+s[4]-'0';
            sc=(s[6]-'0')*10+s[7]-'0';
            ll t=h*3600+m*60+sc;
            d+=(t-pret)*1.0*(prev/3600.0);
            pret=t;
            string v;
            stringstream x(s);
            while(getline(x,v,' '));
            prev=0;
            for(ll i=0;i<v.size();i++)prev=prev*10+v[i]-'0';
        }
        else{
            h=(s[0]-'0')*10+s[1]-'0';
            m=(s[3]-'0')*10+s[4]-'0';
            sc=(s[6]-'0')*10+s[7]-'0';
            ll t=h*3600+m*60+sc;
            double ans=d+(t-pret)*1.0*(prev/3600.0);
            cout<<s<<" "<<fixed<<setprecision(2)<<ans<<" km"<<endl;
        }
    }
    return 0;
}
