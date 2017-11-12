//Hackerrank Algorithms Warmup Challenge 4
#include<iostream>
using namespace std;

int main()
{
    long long int arr[10], n, sum=0;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        sum += arr[i];
    }
    
    cout<<sum;
    return 0;
}
