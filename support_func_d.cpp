#include "calculyator.h"

string nuli_d(string itog, int len1){
    while (itog[len1] == '0'){
        itog[len1] = '9';
        len1--;
    }
    itog[len1] = number_char(char_number(itog[len1]) - 1);
    return itog;
}

string perehod_raz_d(int raz, int len1, string itog){
if (itog[0] == '0'){itog[0] = '\n';}
else {itog = '\n' + itog;}
if (raz == 1){itog[len1 + 1] = number_char(char_number(itog[len1 + 1]) - 1);}
return itog;
}
