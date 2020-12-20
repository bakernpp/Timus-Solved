#include<bits/stdc++.h>
#include <cmath>
#include<cstdio>
int maxn=2e5+10;
using namespace std;
int main(){
    long long arr[maxn],k=0,i;
    double ans;
    while(scanf("%lld",&arr[k++])!=EOF);
    for( i=k-2;i>=0;i--){
        ans=sqrt(arr[i]);
        printf("%.4lf\n",ans);
    }
    return 0;
}

