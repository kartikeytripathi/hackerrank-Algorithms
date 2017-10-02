//Hackerrank Algorithms Warmup Challenge 3
#include <bits/stdc++.h>
using namespace std;
vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2)
{
    vector <int> resultArray(2);
    resultArray[0]= 0;
    resultArray[1] =0;
    
    if(a0 > b0)
        resultArray[0] += 1;
    else if(a0 < b0)
        resultArray[1] += 1;
    
    if(a1 > b1)
        resultArray[0] += 1;
    else if(a1 < b1)
        resultArray[1] += 1;
    
    if(a2 > b2)
        resultArray[0] += 1;
    else if(a2 < b2)
        resultArray[1] += 1;
   
    return resultArray;
}
int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > resultArray = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < resultArray.size(); i++) {
        cout << resultArray[i] << (i != resultArray.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}
 
