#include "calculyator.h"

string slice_str(string str, int start, int end_){
if(end_ < start){
    return str;
}
else if(end_ > len(str)-1){
    end_ = len(str)-1;
}
string str1 = "";
while (start <= end_){
    str1 += str[start];
    start ++;
}
return str1;
}

string chose(string num1,string num2,string znac){
if (znac == "+" && num1[0] != '-' && num2[0] != '-') // a + b
    return sum(num1, num2);
if (znac == "*" && num1[0] != '-' && num2[0] != '-' || znac == "*" && num1[0] == '-' && num2[0] == '-')
    return multiplication(num1, num2);
if (znac == "*" && num1[0] != '-' && num2[0] == '-')
    return '-' + multiplication(num1, slice_str(num2, 1, len(num2)));
if (znac == "*" && num1[0] == '-' && num2[0] != '-')
}

string chose(string num1, string num2, string znac){//znak_str1 = num1[0], znak_str2 = num2[0], znak = znac
    string itog = "";
    if ((num1[0] == '-' && num2[0] == '-' && znac == "-") || (num1[0] == '-' && num2[0] == '+' && znac == "+"))
        itog = vichitator(str2, str1);
    else if ((num1[0] == '-' && num2[0] == '+' && znak == "-") || (num1[0] == '-' && num2[0] == '-' && znac == "+"))
        itog = "-" + (sum(num1, num2));
    else if ((num1[0] == '+' && num2[0] == '-' && znak == "-") || (num1[0] == '+' && num2[0] == '+' && znac == "+"))
        itog = sum(num1, num2);
    else if ((num1[0] == '+' && num2[0] == '-' && znak == "+") || (num1[0] == '+' && num2[0] == '+' && znac == "-"))
        itog = vichitator(str1, str2);
    else if ((num1[0] == '-' && num2[0] == '-' && znak == "*") || (num1[0] == '+' && num2[0] == '+' && znac == "*"))
        itog = multiplication(num1, num2);
    else if ((num1[0] == '+' && num2[0] == '-' && znak == "*") || (num1[0] == '-' && num2[0] == '+' && znac == "*"))
        itog = "-" + umnozhator(str1, str2);
return itog;
    
}
