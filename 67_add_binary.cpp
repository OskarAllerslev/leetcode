#include <algorithm>
#include <iostream>




class Solution {
public:

        std::string addBinary(std::string a, std::string b){
            std::string res; 
            int i = a.size() -1;
            int j = b.size() -1;
            int tmp = 0;

            while( i >= 0 || j >= 0 || tmp)
            {
                // this converts char to int 
                int a_bit = (i >= 0) ? a[i] - '0' : 0;
                int b_bit = (j>= 0) ? b[j] - '0' : 0;
                // next we sum the bits for each position and add the tmp which is a temorary counter of remainder
                int sum = a_bit + b_bit + tmp;
                // here we assign a position in the string with 0 + the remainder of sum mod 2 
                res.push_back('0' + (sum % 2));
                tmp = sum / 2;
                i--;
                j--;
            }
            std::reverse(res.begin(), res.end());
            return res;

        }
};

