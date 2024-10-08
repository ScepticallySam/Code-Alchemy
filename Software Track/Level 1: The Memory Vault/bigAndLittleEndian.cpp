/*
    A corrupted memory dump has been retrieved in **big-endian** format, but the system you're working with processes memory in **little-endian** format. 
    Your task is to convert an array of 32-bit hexadecimal values from big-endian to little-endian.

    Given an array of 32-bit hex values (in string format), convert each value from big-endian to little-endian.

    Input:
    An array/vector of 32-bit hexadecimal strings in big-endian format.

    Output:
    An array/vector of strings representing the corresponding values in little-endian format.

    Example
    Input
    memory_dump = ["0x12345678", "0xABCDEF01", "0x98765432"]

    Output
    ["0x78563412", "0x01EFCDAB", "0x32547698"]

*/

// WRITE YOUR CODE HERE

//C++
#include <iostream>
#include <vector>
using namespace std;

Class Solution{
public:
    vector<string> little_endian(vector<string> input){
        vector <string> output;
        string temp;
        for(auto elem : input){
            temp = "";
            temp1 = "";
            for(int x = 2 ; x < 10 ; x++){
                temp1+=elem[x];
                if(x%2!=0){
                    temp = temp1 + temp;
                    temp1 = "";
                }
            }
            temp = "0x" + temp;
            output.push_back(temp);
        }
        return output;
    }
};
