/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

#include <iostream>
using namespace std;

int pick;  // Global variabel til at holde det hemmelige tal

int guess(int num) {
    if (num > pick) return -1;  // Gættet er for højt
    if (num < pick) return 1;   // Gættet er for lavt
    return 0;                   // Korrekt gæt
}

class Solution {
public:
    int guessNumber(int n) {
        int left = 1;
        int right = n;
        while (left <= right)
        {
            int mid = left + (right -left) / 2; // undgår her overflow 
            int dir = guess(mid);

            if (dir == 0) return mid;
            else if (dir == 1) left = mid +1 ;
            else right = mid -1;
        }
        return -1; 
    }
};

int main() {
    Solution sol;

    // Test 1: n = 10, pick = 6
    pick = 6;
    cout << "Test 1: n = 10, pick = 6 -> Resultat: " << sol.guessNumber(10) << " (Forventet: 6)" << endl;

    // Test 2: n = 1, pick = 1
    pick = 1;
    cout << "Test 2: n = 1, pick = 1 -> Resultat: " << sol.guessNumber(1) << " (Forventet: 1)" << endl;

    // Test 3: n = 2, pick = 2
    pick = 2;
    cout << "Test 3: n = 2, pick = 2 -> Resultat: " << sol.guessNumber(2) << " (Forventet: 2)" << endl;

    // Test 4: n = 100, pick = 75
    pick = 75;
    cout << "Test 4: n = 100, pick = 75 -> Resultat: " << sol.guessNumber(100) << " (Forventet: 75)" << endl;

    // Test 5: n = 1,000,000,000, pick = 987654321 (Stress test)
    pick = 987654321;
    cout << "Test 5: n = 1,000,000,000, pick = 987654321 -> Resultat: " << sol.guessNumber(1000000000) << " (Forventet: 987654321)" << endl;

    return 0;
}
