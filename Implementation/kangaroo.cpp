#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
        if(v1 > v2 && !((x2-x1)%(v1-v2)))
        cout<<"YES";
           else
          cout<<"NO";
    
    

    return 0;
}
