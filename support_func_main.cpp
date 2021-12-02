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

string chose(string num1, string num2, string znac){
    string itog = "";
    if ((num1[0] == '-' && num2[0] == '-' && znac == "-") || (num1[0] == '-' && num2[0] == '+' && znac == "+"))
        itog = difference(num1, num2);
    else if ((num1[0] == '-' && num2[0] != '-' && znac == "-") || (num1[0] == '-' && num2[0] == '-' && znac == "+"))
        itog = "-" + (sum(num1, num2));
    else if ((num1[0] != '-' && num2[0] == '-' && znac == "-") || (num1[0] != '-' && num2[0] != '-' && znac == "+"))
        itog = sum(num1, num2);
    else if ((num1[0] != '-' && num2[0] == '-' && znac == "+") || (num1[0] != '-' && num2[0]!= '-' && znac == "-"))
        itog = difference(num1, num2);
    else if ((num1[0] == '-' && num2[0] == '-' && znac == "*") || (num1[0] != '-' && num2[0]!= '-' && znac == "*"))
        itog = multiplication(num1, num2);
    else if ((num1[0] != '-' && num2[0] == '-' && znac == "*") || (num1[0] == '-' && num2[0] != '-' && znac == "*"))
        itog = "-" + multiplication(num1, num2);
return itog;
}
