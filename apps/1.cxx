#include <iostream>


int main() {
    using namespace std;
    int a, b, result;
    cin >> a;
    cin >> b;

    for (int i = a; i<=b; i++) {
        int ans = 0;
        int temp_num = i;
        while(temp_num > 0) {
            if (temp_num%10 == 1) {
                ans++;
            }

            temp_num /= 10;
        }
        if(ans == 2) {
            result++;
        }
    }

    cout << result << endl;
}
