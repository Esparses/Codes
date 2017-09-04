#include <bits/stdc++.h>
using namespace std;

int main()
{
    string w,n;
    int s,m;
    cin>>m;
    while(m){
        cin>>w;
        s= w.size();
        if(s > 11 ){
         n = w[0];
         n+= (s-2)/10 + 48;
         n+=(s-2)%10 + 48;
         n+= w[s-1];
        }else if (s < 11) {
            n = w;
        }else {
               n = w[0];
               n+=(s-2)%10 + 48;
               n+= w[s-1];
            }
        cout<<n<<endl;
        m--;
      }
}
