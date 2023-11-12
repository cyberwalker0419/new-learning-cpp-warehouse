#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    ll a,sum=0,b=1;
    std::cin>>a;
    for(int j=1;j<=a;j++){
        b=1;
        for(int i=1;i<=j;i++){
            b*=i;
        }
        //std::cout<<b<<' ';
        sum+=b;
    }
    
    std::cout<<sum;
    return 0;
}