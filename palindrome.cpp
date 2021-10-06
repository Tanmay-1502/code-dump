#include <iostream>
using namespace std;

int checkPalindrome(string str)
{

    int len = str.length();

    for (int i = 0; i < len / 2; i++) {

        if (str[i] != str[len - i - 1])
            return false;
    }
 
    return true;
}
 

int main()
{ 
    string st
        = "1122334444332211";
    if (checkPalindrome(st) == true)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
