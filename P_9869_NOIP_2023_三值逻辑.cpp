#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int c,t;
    std::cin>>c>>t;
    while(t--){
        int n,m;
        std::cin>>n>>m;
        std::vector<int> x(n+2,1);
        std::iota(x.begin(),x.end(),0);
        while(m--){
            char op;
            int i,j;
            std::cin>>op>>i;
            if(op=='T'||op=='F')x[i]=x[n+i]=0;
            else if(op=='U')x[i]=x[n+i]=-1;
            else if(op=='+'){
                std::cin>>j;
                x[i]=x[j];
                x[n+i]=x[n+j];
            }else{
                std::cin>>j;
                if(i==j)std::swap(x[i],x[n+i]);
                else{
                    x[i]=x[j+n];
                    x[i+n]=x[j];
                }
            }   
        }
    }
    
    return 0;
}