#include <iostream>
#include <vector>
int findtarget(const std::vector<int>& vec, int target) 
{
	for ( int i = 0; i < vec.size(); i++)
	{
		if( vec[i] == target) 
		{
			return vec[i];
		}
	}
	return -1;
};



int main() {
	int n;
	std::vector<int> VEC = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
	std::cout << "I provide you with numbers from 1 to 18!!" << std::endl;
	std::cout << "Now you must choose a number!, choose wisely.." << std::endl;
	std::cin >> n;
	int num = findtarget(VEC, n);

	if (num != -1)
	{
		std::cout << "I know you number, i know you!! It is.. " << num << std::endl;
	}
	else {
		std::cout << "You try to trick me!!!! i banish you!" << std::endl;
	}
return 0;	
}

