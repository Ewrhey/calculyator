#include "calculyator.h"
string difference(string num1, string num2){
int raz = 0, d = 0, len1 = len(num1) - 1, len2 = len(num2) - 1, len_min = len1, len_max = len2;
string itog = num2;
if (len1 >= len2){
    len_min = len2;
    len_max = len1;
    itog = num1;}
while (len_min >= 0){
d = char_number(num1[len1]) - char_number(num2[len2]) - raz;
raz = 0;
if (d < 0 && num1[len1 - 1] != '0'){
    d+= 10;
    raz = 1;}
else if (d < 0 && num1[len1 - 1] == '0'){
    d += 10;
    itog = nuli_d(itog, len1 - 1);}
itog[len_max] = number_char(d);
num1 = itog;
len_min--;
len_max--;
len1--;
len2--;}
itog = perehod_raz_d(raz, len1, itog);
return itog;}
