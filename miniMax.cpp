//Hackerrank Algorithm Warmup Challenge #9
#include <bits/stdc++.h>

using namespace std;

int main() {
    int64_t min, max;
    vector<int64_t> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i]; 
    }
    int small, pos, temp;
    for(int i =0; i< 5; i++)
    {
        small = arr[i];
        pos = i;
        for(int j = i+1 ; j < 5 ; j++)
            {
            if(arr[j]<small)
            {
                small = arr[j];
                pos = j;
                
            }
        }
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
        
    }
    
    
    for(int arr_i=0 ; arr_i<5; arr_i++)
    {
        min = arr[0] + arr[1] + arr[2] + arr[3];
        max = arr[1] + arr[2] + arr[3] + arr[4];
    }
    cout<<min<<" "<<max;
    return 0;
}
