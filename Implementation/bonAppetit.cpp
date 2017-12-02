//Hackerrank Algorithms Implementation Challenge 10
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int b;
    cin >> b;
     int sum = 0,actualsum;
    for(int i = 0 ; i < n; i++)
    {
        sum += ar[i];
    }
    actualsum = (sum - ar[k])/2;
    if(actualsum!=b)
       {
        cout<<b - actualsum;
       }
    else
       { 
        
        cout<<"Bon Appetit";
       }
    
    return 0;
}
