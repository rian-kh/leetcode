// rian-kh, 06/03/2023
// 14. Longest Common Prefix

/*

Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

    string prefix = "";

    // Loop for the characters of the first word of the array.
    // (The specific word chosen doesn't matter as
    // we're checking between ALL words for common letters.)
    for (int i = 0; i < strs.at(0).length(); i++){

        // Loop through the remaining words
        for (int j = 1; j < strs.size(); j++) {

            // If at any point the characters between the first word
            // and the current word stop matching, return the prefix.
            if (!(strs.at(j)[i] == strs.at(0)[i]))
                return prefix;

        }

        // Only append the character to the total prefix if
        // the letter successfully matches between all words.
        prefix += strs.at(0)[i];
    }

    // In this case, the entire word is a prefix
    // for the other words as all characters matched.
    // This would happen if it's an especially short word (ex. 'as')
    return prefix;

}
};