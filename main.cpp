#include <iostream>
#include "sha256.h"

using namespace std;

int main()
{
    
    string input;
    cout << "SHA-256 ENCRYPTOR 1.1"<<endl;
    cout << "Made by Olivier Gay and Louis Nam"<<endl;
    while (true) {
    cout <<"Enter string below to convert"<<endl;
    cout << "********************************************************************************"<<endl;
    cin >> input;

    string output1 = sha256(input);
    
    cout << "SHA-256 of ('"<< input << "') is: " << output1 << endl;
    }
    return 0;
}
