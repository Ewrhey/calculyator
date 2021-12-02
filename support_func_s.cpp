#include "calculyator.h"

string plus_raz_s(int len_max, int raz, string itog){
int s = 0;
while (len_max >= 0 && raz == 1){
s = char_number(itog[len_max]) + 1;
raz = 0;
if (s >= 10){
    s = s - 10;
    raz = 1;
    }
itog[len_max] = number_char(s);
len_max--;
}
if (len_max < 0 && raz == 1){
    itog = "1" + itog;
}
return itog;
}
