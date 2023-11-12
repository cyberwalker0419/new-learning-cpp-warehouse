#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::vector<int> pr;
    std::vector<bool> ok(10001,1);
    ok[1]=0;
    for(int i=2;i<=10000;i++){//O(nlog(n))
        if(ok[i]){
            pr.push_back(i);
            for(int j=i*2;j<=10000;j+=i){
                ok[j]=0;
            }
        }
    }
    int n,m=pr.size();
    std::cin>>n;
    std::vector<std::vector<int> > w(n+1,std::vector<int>(m+1));
    for(int i=0;i<=n;i++){
        int x;
        std::cin>>x;
        for(int j=0;j<m;j++){
            while(x%pr[j]==0){
                w[i][j]++;
                x/=pr[j];
            }
            if(x==1)break;
        }
    }
    ll ans=1;
    for(int j=0;j<m;j++){
        std::priority_queue<int,std::vector<int>,std::greater<int> > q;
        for(int i=1;i<=n;i++){
            q.push(w[i][j]);
        }
        while(w[0][j]--){
            int x=q.top();q.pop();
            q.push(++x);
        }
        while(!q.empty()){
            ans*=q.top()+1;
            ans%=998244353;
            q.pop();
        }
    }
    std::cout<<ans;
    return 0;
}