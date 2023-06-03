// rian-kh, 06/03/23
// 13. Roman to Integer

/*

Given a roman numeral, convert it to an integer.

*/



#include <iostream>

using namespace std;


int romanToInt(string s) {
    int sum = 0;

    for (int i = 0; i < s.length(); i++) {

        // Each special combination earlier in the if-else
        // to take priority, followed by the single characters.

        // (there has to be a better way than this, using
        // the C++ equivalent of dictionaries maybe?)
        if (s[i] == 'C' && s[i+1] == 'M') {
            sum += 900;
            i += 1;
        } else if (s[i] == 'C' && s[i+1] == 'D') {
            sum += 400;
            i += 1;
        } else if (s[i] == 'X' && s[i+1] == 'C') {
            sum += 90;
            i += 1;
        } else if (s[i] == 'X' && s[i+1] == 'L') {
            sum += 40;
            i += 1;
        } else if (s[i] == 'I' && s[i+1] == 'X') {
            sum += 9;
            i += 1;
        } else if (s[i] == 'I' && s[i+1] == 'V') {
            sum += 4;
            i += 1;
        } else if (s[i] == 'M')
            sum += 1000;
        else if (s[i] == 'D')
            sum += 500;
        else if (s[i] == 'C')
            sum += 100;
        else if (s[i] == 'L')
            sum += 50;
        else if (s[i] == 'X')
            sum += 10;
        else if (s[i] == 'V')
            sum += 5;
        else if (s[i] == 'I')
            sum += 1;
    }

    return sum;
}