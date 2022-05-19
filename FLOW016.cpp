#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
    int t=0;
    cin>>t;
    while(t--)
    {
        long long int a=0,b=0;
        cin>>a>>b;
        cout<<__gcd(a,b)<<" "<<((a*b)/__gcd(a,b))<<endl;
    }
    return 0;
}