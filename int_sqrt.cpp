#include <iostream>
#include <cmath>


class Solution {
public:
    int mySqrt(int x) {
        if (x==0) return 0;
        if (x==1) return 1;

        double a = x;
        double x_n = x / 2;
        double tol = 1e-6;

        for ( int i = 0; i < 100; ++i)
        {
            double x_naste = 0.5 * ( x_n + a / x_n);

            if ( std::abs(x_naste - x_n) < tol)
            {
                break;
            }

            x_n = x_naste;
        }
        return static_cast<int>(x_n);
    }
};
// Test program
int main() {
    Solution sol;
    int test_cases[] = {0, 1, 4, 8, 16, 2147395600}; // Test værdier
    for (int x : test_cases) {
        std::cout << "sqrt(" << x << ") = " << sol.mySqrt(x) << std::endl;
    }
    return 0;
}
