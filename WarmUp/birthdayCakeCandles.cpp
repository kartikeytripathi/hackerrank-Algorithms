// Hackerrank Algorithms Warmup Challenge 9
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int c, n, max = 0;
    std::cin.ignore();
    while(std::cin >> n)
        max < n ? c = !!(max = n) : c += max == n;
    std::cout << c;
    return 0;
}
