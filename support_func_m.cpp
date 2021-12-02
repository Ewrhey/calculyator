#include "calculyator.h"

string reverse_str(string str){
long long i = len(str) - 1;
string str1 = "";
while (i >= 0){
    str1 += str[i];
    i--;
}
return str1;
}

string itog_sum(int raz, string sup, string itog){
    if (raz > 0){
        sup = sup + number_char(raz);
    }
    sup = reverse_str(sup);
    itog = sum(itog, sup);
    return itog;
}
