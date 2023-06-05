// rian-kh, 06/05/2023
// 20. Valid Parentheses

/*

Given a string s containing just the characters
'(', ')', '{', '}', '[' and ']', determine if the input string is valid.

*/


class Solution {
public:
bool isValid(string s) {

    // Instead use a stack? Pretty much the same thing
    // as a vector with the popping but more natural/scalable
    // to other languages
    vector<char> openingChars = {};



    for (int i = 0; i < s.length(); i++) {

        // Add most recent opening character to the back of the openingChars vector
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            openingChars.push_back(s[i]);

        // If any ending characters are found while there is an opening
        // in the vector and it matches the most recent opening,
        // pop that opening character from the vector as it is now complete parentheses
        else if (s[i] == ')' && openingChars.size() > 0 && openingChars.back() == '(')
            openingChars.pop_back();
        else if (s[i] == '}' && openingChars.size() > 0 && openingChars.back() == '{')
            openingChars.pop_back();
         else if (s[i] == ']' && openingChars.size() > 0 && openingChars.back() == '[')
            openingChars.pop_back();

         // In this case, the character is a closing character
         // that does NOT match the most recent opening (ex. ([)] )
         else
            return false;

    }

    // Check if all openings have been completed
    // (Necessary for single character input '[')
    if (openingChars.size() == 0)
        return true;
    else
        return false;

}
};
