#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,r;
	cin>>t;
	while(t--)
	{
	   int fruits[3];
	   cin>>x>>fruits[0]>>fruits[1]>>fruits[2];
	   sort(fruits,fruits+3);
	   r = (x-1)*fruits[0] + fruits[1];
	   cout<<r<<endl;
	   
	}
	return 0;
}
