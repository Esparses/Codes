#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> ls;


 string suma(string a,string b){
 	int l = 1+ (a.length() > b.length()?a.length():b.length());
 	string c(l,'0');
 	a = string (l-a.length(), '0')+a;
 	b = string (l-b.length(), '0')+b;
 	int ac=0,sum =0;
 	for(int i=l-1; i >=0; i--){
 		sum=a[i]+b[i]-'0'-'0' +ac;
 		c[i]=(sum%10)+'0';
 		ac=sum/10;
 	}
 	while(c.length()> 0 && c[0] == '0')
 		c.erase(c.begin());
 	return c;
 }

 string fibunacci(int n){
 	if(n <= ls.size())
 		return ls[n-1];
 	else{
 		ls.push_back(suma(fibunacci(n-1),fibunacci(n-2)));
 		return ls[n-1];
 	}
 }
int main() {
  int n;
  ls.push_back("1");
  ls.push_back("1");
  while(cin>>n){
  		cout<<fibunacci(n)<<endl;
  }
}
