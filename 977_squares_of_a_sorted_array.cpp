#include <iostream>
#include <vector>
#include <algorithm>

// vi er givet en vektor nums som er ikke aftagende vi skal returnere en vektor nums som er andenpotensen


class Solution { 
    public: 
        std::vector<int> sortedSquares(std::vector<int>& nums){
            std::vector<int> res(nums.size());
            for (int i =0; i < nums.size(); i++){
                res[i] = nums[i] * nums[i];
        }
        std::sort(res.begin(), res.end());
        return res;
        }
};

void printvector(const std::vector<int>& v){
    for (int x : v) 
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vec = {1,2,3,4,5,6,7};
    std::cout << "The original vector" << std::endl;
    printvector(vec);
    
    Solution s;
    std::vector<int> sol = s.sortedSquares(vec);
    printvector(sol);
    return 0;

};
