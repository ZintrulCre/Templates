#include <iostream>
#include <vector>
using namespace std;

int Func(int n, vector<int> &parameters, int k) {
    if (n == 0 && k <= static_cast<int>(parameters.size()))
        return 1;
    else if (k >= static_cast<int>(parameters.size()))
        return 0;
    int curr = n / parameters[k];
    int count = 0;
    for(int i = 0; i <= curr; ++i) {
        int temp = n - i * parameters[k];
        if (temp < 0)
            break;
        count += Func(temp, parameters, k + 1);
    }
    return count;
}



int main() {
    int n;
    cin >> n;
    vector<int> parameters{5,2,1};
    int res = Func(n, parameters, 0);
    cout << res << endl;
    return 0;
}