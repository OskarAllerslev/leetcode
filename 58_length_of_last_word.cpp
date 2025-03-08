#include <string>
#include <iostream>

// så det der skal gøres her at vi vil starte fra den sidste bit i strengen, 
class Solution {
public:
    int lengthOfLastWord(std::string s) {
    
        int n = s.length();
        int i = n-1;
        int count = 0;        
        while ( i >= 0 && s[i] == ' ')
        {
            i--;
        }
        while ( i >=0 && s[i] != ' ')
        {
            count++;
            i--;
        }
        return count;
    }
};
int main()
{
    Solution sol;
    std::string s = "Hej med dig jeg hedder Kaj";
    std::cout << "Vores teksstreng er her: " << s << std::endl;
    std::cout << "Længden af det sidste ord i ovenstående string er " << sol.lengthOfLastWord(s) << std::endl;
    return 0;
}

