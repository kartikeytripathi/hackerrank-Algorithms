//Hackerrank Algorithms Warmpup Challenge #8 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float nop=0,non=0,noz=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(int arr_i=0; arr_i  < n; arr_i++)
        {
            if(arr[arr_i]>0)
            {
                nop++;
            }
        else if(arr[arr_i]<0)
        {
            non++;
        }
        else if(arr[arr_i]==0)
        {
            noz++;
        }
        }
    cout<<nop/n<<"\n";
    cout<<non/n<<"\n";
    cout<<noz/n<<"\n";
    return 0;
}
