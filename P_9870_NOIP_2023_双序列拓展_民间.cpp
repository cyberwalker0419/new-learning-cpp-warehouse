#include <bits/stdc++.h>
typedef long long ll;
#define N 500005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int c,n,m,q,sn,sm,ok1,ok2;
int sa[N],a[N],sb[N],b[N];
int premaxa[N],premaxb[N],premina[N],preminb[N];
int sucmaxa[N],sucmaxb[N],sucmina[N],sucminb[N];
void Swap(){
    for(int i=1;i<=std::max(n,m);i++){
        std::swap(a[i],b[i]);
    }
}
void solve1 (int x,int y){
    if(ok1)return;
    if(x==1||y==1){
        ok1=1;
        return;
    }
    if(premaxa[x]>premaxb[y])solve1(premaxa[x],y);
    if(premina[y]<preminb[x])solve1(x,preminb[y]);
}
void solve2 (int x,int y){
    if(ok2)return;
    if(x==1||y==1){
        ok2=1;
        return;
    }
    if(sucmaxa[x]>sucmaxb[y])solve1(sucmaxb[x],y);
    if(sucmina[y]<sucminb[x])solve1(x,sucminb[y]);
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::cin>>c>>sn>>sm>>q;
    for(int i=1;i<=n;i++){
        std::cin>>sa[i]; 
    }
    for(int i=1;i<=m;i++){
        std::cin>>sb[i];
    }
    for(int k=1;k<=q+1;k++){
        for(int i=1;i<=n;i++)a[i]=sa[i];
        for(int i=1;i<=n;i++)b[i]=sb[i];
        n=sn;
        m=sm;
        if(k>1){
            int kx,ky;
            std::cin>>kx>>ky;
            while(kx--){
                int p,v;
                std::cin>>p>>v;
                a[p]=v;
            }
            while(ky--){
                int p,v;
                std::cin>>p>>v;
                b[p]=v;
            }

        }
        if(a[1]=b[1]){std::cout<<0; continue;}
        else if(a[1]<b[1]){
            Swap();
            std::swap(n,m);
        }
        premaxa[0]=0;
        premina[0]=INF;
        for(int i=1;i<=n;i++){
            premaxa[i]=std::max(premaxa[i-1],a[i]);
            premina[i]=std::min(premina[i-1],a[i]);
        }
        premaxb[0]=0;
        preminb[0]=INF;
        for(int i=1;i<=n;i++){
            premaxb[i]=std::max(premaxb[i-1],a[i]);
            preminb[i]=std::min(preminb[i-1],a[i]);
        }
        sucmaxa[n+1]=0;
        sucmina[n+1]=INF;
        for(int i=1;i<=n;i++){
            sucmaxa[i]=std::max(sucmaxa[n+1],a[i]);
            sucmina[i]=std::min(sucmina[n+1],a[i]);
        }
        sucmaxb[n+1]=0;
        sucminb[n+1]=INF;
        for(int i=1;i<=n;i++){
            sucmaxb[i]=std::max(sucmaxb[n+1],a[i]);
            sucminb[i]=std::min(sucminb[n+1],a[i]);
        }
        if(premaxa[n]<=premaxb[n]||preminb[n]>premina[n]){
            std::cout<<0;
            continue;
        }
        int sx=
    }
    return 0;
}