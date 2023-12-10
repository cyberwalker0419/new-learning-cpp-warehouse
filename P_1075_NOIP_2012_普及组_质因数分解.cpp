#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n,q;
    std::cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            q=n/i;
            break;
        }
    }
    std::cout<<q;
    return 0;
}
