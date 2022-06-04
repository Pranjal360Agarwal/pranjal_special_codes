#include <iostream>

using namespace std;

int main()
{
    int n,t=1000;
    while(t--)
    {
        cin>>n;
        if(n==42)
        break;
        else
        cout<<n<<endl;
    }

    return 0;
}