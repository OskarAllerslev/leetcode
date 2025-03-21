#include <iostream>
#include <vector> 
class Solution {
public: 
	int singleNumber(std::vector<int>& nums){
		int res = 0;
		for (auto num : nums)
		{
			res ^= num;
		}
		return res;
	}
};

int main(){
	int n; 
	std::cout << "Indtast en vektor som eks [2,2,1]";
	std::cin >> n;

	std::vector<int> nums(n);
	std::cout << "Indtast " << n << "tal:\n";
	for (int i = 0; i < n; i++)
	{
		std::cin >> nums[i];
	}
	Solution s;
	int res = s.singleNumber(nums);
	std::cout << "Tallet der kun optræder en gang er: " << res << std::endl;
	return 0 ;
}
