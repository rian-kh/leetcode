// rian-kh, 06/02/23
// 9. Palindrome Number

/*

Given an integer x, return true
if x is a palindrome, and false otherwise.

*/

#include <iostream>

using namespace std;

class Solution {
    public:
        bool isPalindrome(int x) {

            string input = to_string(x);
            string reversed = "";

            // Negative numbers cannot be palindromes
            // (ex. -12321, 12321-)
            if (x < 0)
                return false;

            // Loop from last to first index and add
            // each character to the reversed string
            for (int i = input.length() - 1; i >= 0; i--) {
                reversed += input[i];
            }


            if (input == reversed)
                return true;
            else
                return false;
        }
};

