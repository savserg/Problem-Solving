#include <iostream>
using namespace std;

long long C(int n,int m){
    long long z = 1;
    for(int i=0; i<m; i++)
        z = z*(n-i)/(i+1);
    return z;
}
int main(){
    int n,m,p; cin>>n>>m>>p;
    cout<<C(n+m,p)-C(n,p)-C(m,p)-C(n,1)*C(m,p-1)-C(n,2)*C(m,p-2)-C(n,3)*C(m,p-3);
    return 0;
}
