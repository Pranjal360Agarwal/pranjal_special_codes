#include <bits/stdc++.h>
using namespace std;

int main (void)
{
    int arr[12] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
    int n,i,p,div;

    cin >> n;

    while (n--)
    {
        cin >> p;

        div = 0;

        for (i=11; i>=0; i--)
        {
            if (p >= arr[i])
            {
                div += p/arr[i];

                if (p % arr[i] == 0)
                    break;
                else
                    p -= ((p / arr[i]) * arr[i]);
            }
        }

        cout << div << endl;
    }

    return 0;
}