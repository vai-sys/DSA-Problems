#include<iostream>
using namespace std;

int sqrt(int x){
    int start = 0;
    int end = x;
    int ans = 0;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (mid * mid == x) {
            ans = mid;
            return ans;
        }
        if (mid * mid > x) {
            end = mid - 1;
        }
        else {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

double findPrecision(double x, int precision, double ans){
    double factor = 1;
    for(int i = 0; i < precision; i++){
        factor /= 10;
    }

    while (ans * ans < x) {
        ans += factor;
    }
    
    return ans;
}

int main() {
   
    int finalAns = sqrt(37);
     cout << finalAns << endl;
    cout << findPrecision(37, 3, finalAns);
   
    return 0;
}
