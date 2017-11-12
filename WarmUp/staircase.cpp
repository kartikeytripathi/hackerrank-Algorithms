//Hackerrank Algorithm WarmUp Challenge 7 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
        for(int i=n;i>=1;i--)
         {
        for(int j=1;j<i;j++)
        {
        cout<<" ";
        }
        for(int k=n;k>=i;k--)
        {
        cout<<"#";
        }
        cout<<"\n";
        }
    return 0;
}
