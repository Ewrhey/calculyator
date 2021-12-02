#include "calculyator.h"

string sum(string num1, string num2){
int raz = 0, s = 0, len1 = len(num1) - 1, len2 = len(num2) - 1, len_min = len1, len_max = len2;
string itog = num2;
if (len1 >= len2){
    len_min = len2;
    len_max = len1;
    itog = num1;
    }
while (len_min >= 0){
s = char_number(num1[len1]) + char_number(num2[len2]) + raz;
raz = 0;
if (s >= 10){
    s = s - 10;
    raz = 1;
}
itog[len_max] = number_char(s);
len_min--;
len_max--;
len1--;
len2--;}
itog = plus_raz_s(len_max, raz, itog);
return itog;
}





