#include <iostream>
using namespace std;

int main() {
	int t,i,x;
	string s;
	cin>>t;
	while(t--)
	{
	    int b,r,m,e;
	    for(i=0;i<4;i++)
	    {
	        cin>>s>>x;
	        if(s=="Barcelona ") b=x;
	        if(s=="RealMadrid") r=x;
	        if(s=="Malaga")     m=x;
	        if(s=="Eibar")      e=x;
	    }
	    if(b>e && r<m)
	    cout<<"Barcelona\n";
	    else
	    cout<<"RealMadrid\n";
	}
	return 0;
}
