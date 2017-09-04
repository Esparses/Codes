#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,a,x,y;
    while(cin>>n>>m>>a){
         x = (m%a)>0? (m/a + 1):(m/a);
         y = (n%a)>0? (n/a + 1):(n/a);
        cout<<x*y<<endl;
    }

}
