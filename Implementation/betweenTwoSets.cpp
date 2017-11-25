//HackerRank Algorithm Implementation Challenge #4
#include <bits/stdc++.h>

using namespace std;
int gcd(int num1, int num2) {
    auto divisor = min(num1, num2);
    for(; divisor > 0; --divisor)
        if ((num1 % divisor == 0) && (num2 % divisor == 0))
            break;
    return divisor;
}

int gcd_element(const vector<int>& v)
{
    return accumulate(begin(v), end(v), *begin(v), gcd);
}

int lcm(int num1, int num2)
{
    return (num1 * num2) / gcd(num1, num2);
}

int lcm_element(const vector<int>& v)
{
    return accumulate(begin(v), end(v), *begin(v), lcm);
}

int is_divisible(int num1, int num2)
{
    return num1 % num2 == 0 ? 1 : 0;
}

int main() {
    int m, n;
    cin >> m >> n;
    
    vector<int> A(m);
    vector<int> B(n);
    
    copy_n(istream_iterator<int>(cin), m, begin(A));
    copy_n(istream_iterator<int>(cin), n, begin(B));
    
    auto lcmOfA = lcm_element(A);
    auto gcdOfB = gcd_element(B);
    
    auto counter = 0;
    auto multipleOfLcm = lcmOfA;
    
    while (multipleOfLcm <= gcdOfB)
    {
        counter += is_divisible(gcdOfB, multipleOfLcm);
        multipleOfLcm += lcmOfA;
    }
    
    cout << counter << endl;
    
    return 0;
}
