#include "calculyator.h"

int main()
{
    string num1, num2, znac, test;
    getline(cin, num1);
    getline(cin, num2);
    getline(cin, znac);
    test = num1 + num2 + znac;
    if (only_numbers(test) == false){
            cout << "_____"<<endl;
        if (znac == "+"){
            cout << sum_prep(num1, num2);
        }
        else if (znac == "-"){
            cout << 0;
        }
        else if (znac == "*"){
            cout << 0;
        }
    }
    return 0;
}
