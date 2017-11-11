//Hackerrank Algorithm Warmup Challenge #7
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[100][100], n, diagonal1 = 0, diagonal2 = 0, difference = 0;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
               cin>>a[i][j];
            }
       }
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(i == j)
                    {
                    diagonal1 += a[i][j];
                    }
                if(i+j == (n-1))
                {
                    diagonal2 += a[i][j];
                }
            }
        }
    
        difference = abs(diagonal1 - diagonal2);
        cout<<difference;
    
    return 0;
}
