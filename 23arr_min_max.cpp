#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[5] = {223, 34, 321, 12, 1};
    int ans = INT_MAX;
    for (int i = 0; i < 5; i++) {
        if (a[i] < ans)
            ans = a[i];
    }
    cout << "minimum number: "<<ans << endl;

     ans = INT_MIN;
    for (int i = 0; i < 5; i++) {
        if (a[i] > ans)
            ans = a[i];
    }
    cout <<"Maximum number: "<< ans << endl;
}
