#include <bits/stdc++.h>
typedef long long ll;
#define N 55
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int f[N][N];
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::string q;
    std::cin>>q;
    int n=q.size();
    q=' '+q;
    memset(f,0x3f,sizeof(f));
    for(int i=1;i<=n;i++)f[i][i]=1;
    for(int l=2;l<=n;l++){
        for(int i=1;i+l-1<=n;i++){
            int j=i+l-1;
            if(q[i]==q[j])f[i][j]=std::min(f[i][j],std::min(f[i+1][j],f[i][j-1]));
            for(int k=i;k<j;k++)f[i][j]=std::min(f[i][j],f[i][k]+f[k+1][j]);
        }
    }
    std::cout<<f[1][n];
    return 0;
}