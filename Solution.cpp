
#include <array>
#include <string>
#include <vector>
using namespace std;

class Solution {
    
public:
    int xorAllNums(vector<int>& inputOne, vector<int>& inputTwo) {
        if (inputOne.size() % 2 == 0 && inputTwo.size() % 2 == 0) {
            return 0;
        }
        if (inputOne.size() % 2 == 1 && inputTwo.size() % 2 == 0) {
            return accumulate(inputTwo.begin(), inputTwo.end(), 0, [](int subtotalXOR, int n) {return subtotalXOR ^n;});
        }
        if (inputOne.size() % 2 == 0 && inputTwo.size() % 2 == 1) {
            return accumulate(inputOne.begin(), inputOne.end(), 0, [](int subtotalXOR, int n) {return subtotalXOR ^ n;});
        }

        return accumulate(inputOne.begin(), inputOne.end(), 0, [](int subtotalXOR, int n) {return subtotalXOR ^ n;})
               ^ accumulate(inputTwo.begin(), inputTwo.end(), 0, [](int subtotalXOR, int n) {return subtotalXOR ^ n;});
    }
};
