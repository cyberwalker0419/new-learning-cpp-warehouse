#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int a,num=0;
    std::cin>>a;
    for(int i=0;i<=std::pow(10,a);i++){  
        int sum=0;
    while(i/10){
            sum+=i%10;
            i/=10;
        }
        num+=sum;
    }
    
    std::cout<<a;
    return 0;
}
