//HackerRank Algorithm Implemenatation Challenge 5
#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++)
    {
       cin >> s[s_i];
    }
    int min,max,imin = 0, imax = 0;
    min = s[0];
    max = s[0];
    for(int i=1; i<n;i++)
    {
        if(s[i]>max)
        {
            max= s[i];
            imax++;
           
        }
        else if(s[i]<min)
        {
            min = s[i];
            imin++;
                
        }
    
    }
    cout<<imax<<" "<<imin;
    return 0;
}
