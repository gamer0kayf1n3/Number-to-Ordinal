
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    //get number from user
    int number;
    string number_str;
    cout << "Ordinal of: ";
    cin >> number;
    number_str = to_string(number);
    
    //convert to character array
    string s = number_str;
    int n = s.length();
    char char_array[n + 1];
    strcpy(char_array, s.c_str());
    
    //convert for real
    string suffix = "th"; //for now
    int len = sizeof(char_array)/sizeof(char_array[0]) - 1;
        
    if (len == 1) {
        if (char_array[len - 1] == '1') {
            suffix = "st";
        }
        else if (char_array[len - 1] == '2') {
            suffix = "nd";
        }
        else if (char_array[len - 1] == '3') {
            suffix = "rd";
        }
        else {
            suffix = "th";
        }
    }
    else if (char_array[len - 2] == '1') {
        suffix = "th";
    }
    else {
        if (char_array[len - 1] == '1') {
            suffix = "st";
        }
        else if (char_array[len - 1] == '2') {
            suffix = "nd";
        }
        else if (char_array[len - 1] == '3') {
            suffix = "rd";
        }
        else {
            suffix = "th";
        }
    }
    
    cout << "\n" << number << suffix;
    return 0;
    
}
