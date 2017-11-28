//HackerRank Algorithm Sorting Challenge #2
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int arr[1000],n,value;
    cin>>value;
    cin>>n;
    for(int i =0; i< n; i++)
    {
        cin>>arr[i];
    }
    for(int i =0; i < n; i++)
    {
        if(arr[i]==value)
            cout<<i;
    }
    return 0;
}
