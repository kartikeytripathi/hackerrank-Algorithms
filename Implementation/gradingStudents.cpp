#Hackerrank Algorithms Implentation Challenge #1
#include <bits/stdc++.h>
using namespace std;

vector < int > solve(vector < int > grades)
{
    int pre,next_multiple;
    for(int i = 0 ; i < grades.size(); i++)
    {
        pre = grades[i] / 5;
        next_multiple = (pre + 1) * 5;
        if(next_multiple - grades[i] < 3 && grades[i] >= 38)
        {
            grades[i] = next_multiple;
        }
        
     
    }
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}
