#include <vector>
#include <iostream>
#include <cmath> 

// vi ønsker at lave en funktion der kan finde ud af om en matrix er symmetrisk


class Solution { 
	public:
		bool isSymmetric(const std::vector<std::vector<double>>& matrix){

		int n = matrix.size();
		int m = matrix[0].size();

		for (int i =0; i < n; ++i){
			for (int j = 0; j < m; ++j){
				if (i == j) 
				{
					continue;
				} else 
				{
					double a = matrix[i][j];
					double b = matrix[j][i];
					if (std::fabs(a - b) > 1e-9)
					{
						return false;
					}
				}
			}
		}
		return true;
		}
};


int main() {
	std::vector<std::vector<double>> A = {
		{1,2,3},
		{2,5,6},
		{3,6,9}
	};

	Solution sol;

	bool result  = sol.isSymmetric(A);
	std::cout <<  (result ? "Matrix is symmetric." : "Matrix is not symmetric.") << std::endl;
	return 0;
}
