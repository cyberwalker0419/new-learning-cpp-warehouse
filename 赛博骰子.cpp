#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
        srand(time(NULL));
        int a,b;
        std::cin>>a>>b;
        std::cout<<(rand()%(b-a+1))+1<<'\n';
    return 0;
}
