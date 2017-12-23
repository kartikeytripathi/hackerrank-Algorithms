//Hackerrank Algorithm Implementation Challenge 12
#include <bits/stdc++.h>

using namespace std;

static bool IsEven(int n)
{
    if(n%2==0)
        return true;
    return false;
}
    int solve(int n , int p)
    {
        int last;
        int fstart,flast;
        if(IsEven(n))
            last = n;
        else
            last = n-1;
        if(p<=1 || p>= last)
            return 0;
        else
        {
            fstart = IsEven(p)?(p+1)/2 : (p-1)/2;
            flast = IsEven(p)?(last - p)/2 : (last-p)/2 + 1;
            
            if(fstart < flast)
                return fstart;
            else
                return flast;
        }
    }


int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
