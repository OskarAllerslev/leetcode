#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
    public:
        int maximumCount(std::vector<int>& nums){
            int neg_count = 0;
            int pos_count = 0;
            for (int i = 0; i < nums.size(); i++)
            {
               if ( nums[i] < 0) 
               {
                    neg_count++; 
               }
               else if ( nums[i] > 0)
               {
                    pos_count++;
               }
            }
            int res = std::max(neg_count, pos_count);
            return res;
        }
};
// jeg får chatgpt til at lave en main der tester min ovenstående funktion, lidt ligesom på leetcode.
// Her starter programmet
int main() {
    // Eksempel på input
    std::vector<int> nums = {-3, -2, -1, 0, 0, 1, 2, 3};

    // Opretter objekt af Solution-klassen
    Solution solution;

    // Kald maximumCount og gem resultat
    int result = solution.maximumCount(nums);

    // Udskriv resultat
    std::cout << "Største antal positive/negative tal: " << result << std::endl;

    return 0; // Programmet slutter
}
