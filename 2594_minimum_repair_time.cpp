#include <cmath>
#include <vector>



class Solution {
    public:
        long long repairCars(std::vector<int>& ranks, int cars)
        {
            long long left = 1, right = 1e14;
            long long res = right;

            while (left <= right)
            {
                long long mid = left + (right - left) / 2;
                long long total = totalCarsRepaired(ranks, mid);
                
                if (total >= cars)
                {
                    res = mid;
                    right = mid -1;
                } else {
                left = mid +1;
                }
            }
            return res;
        }




        long long totalCarsRepaired(const std::vector<int>& ranks, long long T)
        {
            long long total = 0;
            for (int r : ranks)
            {
                total += (long long) std::sqrt(T / (double) r);
            }
        return total;
        }
};



// 
