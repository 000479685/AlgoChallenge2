// Challenge2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 1)
        {
            return 1;
        }
        if (n <= 0)
        {
            return 0;
        }
        return fib(n - 1) + fib(n - 2);
    }
    int removeDuplicates(vector<int>& nums) {
        std::vector<int> temp;
        int count = 0;
        for (int i : nums)
        {
            if (std::find(temp.begin(), temp.end(), i) == temp.end())
            {
                temp.push_back(i);
                count++;
            }
        }

        nums = temp;
        return count;
    }
};

int main()
{
    cout << "Aiden Wu | 000479685\n";    

    Solution sol = Solution();

    cout << "Fibonacci method with input 5 : " << sol.fib(5) << endl;

    vector<int> testCase = { 1, 2, 3, 4, 5, 1, 2, 5, 4, 3, 1 };

    cout << "Remove duplicates method with input {1,2,3,4,5,1,2,5,4,3,1} : " << sol.removeDuplicates(testCase) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
