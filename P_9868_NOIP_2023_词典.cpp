#include <bits/stdc++.h>
typedef long long ll;
#define N 3001
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
char c[N][N];
bool cmp(int a,int b){
    return a>b;
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n,m;
    std::cin>>n>>m;
    if(n==1){
        std::cout<<1;
        return 0;
    }
    std::vector<std::string> s1(n+1);
    std::vector<std::string> s2(n+1);
    for(int i=1;i<=n;i++){
        std::cin>>c[i];
        std::sort(c[i],c[i]+m);
        s1[i]=c[i];
        std::sort(c[i],c[i]+m,cmp);
        s2[i]=c[i];
    }
    std::sort(s2.begin()+1,s2.end());
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         std::cout<<c[i][j];
    //     }
    //     std::cout<<'\n';
    // }
    for(int i=1;i<=n;i++){
            std::cout<<(s1[i]<=s2[1]?1:0);
    }
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         s2[i-1][j-1]=c[i][j];
    //     }
    // }
    // for(int i=1;i<=n;i++){
    //     sort(s1[i].begin(),s1[i].end());
    //     sort(s2[i].begin(),s2[i].end(),cmp);
    // }
    return 0;
}