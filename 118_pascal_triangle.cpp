#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        
    std::vector<std::vector<int>> res;


    for (int i = 0; i < numRows; i++)
    {
        std::vector<int> row;

        row.push_back( 1);

        for( int j = 1; j < i; j++)
        {
            row.push_back(res[i-1][j-1]+ res[i-1][j]);
        }
        if ( i > 0) row.push_back( 1); 
        res.push_back(row);
    }
    return res; 
    }
};


void printPascal(const std::vector<std::vector<int>>& triangle) {
    for (const auto& row : triangle) { // Loop gennem hver række
        for (int num : row) { // Loop gennem hvert tal i rækken
            std::cout << num << " "; // Print tallet efterfulgt af mellemrum
        }
        std::cout << std::endl; // Ny linje efter hver række
    }
}

// Main funktion til at teste
int main() {
    Solution sol;
    int numRows = 5; // Test med 5 rækker (du kan ændre det til fx 10, 118 osv.)
    std::vector<std::vector<int>> result = sol.generate(numRows);

    printPascal(result); // Print Pascal's triangle

    return 0;
}
