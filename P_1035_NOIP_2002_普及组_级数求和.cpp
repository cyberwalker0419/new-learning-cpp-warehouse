#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    double s=0,k,i=1.0;
    std::cin>>k;
    while(s<=k){
        s+=(1.0/i);
        i++;
    }
    std::cout<<i-1;
    return 0;
}