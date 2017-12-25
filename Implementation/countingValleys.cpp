//Hackerrank Algrithm Implementation Challenge #13
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    int val = 0;
    int level = 0;
    int base =0;
    int n;
    string s;
    cin>>n;
    cin>>s;
    for(int i =0 ; i  < n; i++)
     {   
    if(s[i]=='U')
        ++level;
    if(s[i]=='D')
        --level;
        
        if(level == base && s[i]=='U')
            val++;
    }
    cout<<val;
    
    return 0;
}
