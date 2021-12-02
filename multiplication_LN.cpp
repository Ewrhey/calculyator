#include "calculyator.h"

string multiplication(string num1, string num2){
if (num1 == "0" || num2 == "0")
    return "0";
int raz = 0, m = 0, i1 = 0, i2 = 0;
string num1_1 = reverse_str(num1), num2_2 = reverse_str(num2), itog = "", sup = "", nuli = "0";
while (num2_2[i2] != '\0'){
    while(num1_1[i1] != '\0'){
        m = (char_number(num1_1[i1]) * char_number(num2_2[i2])) + raz;
        raz = m/10;
        sup = sup + number_char(m%10);
        i1++;
    }
    itog = itog_sum(raz, sup, itog);
    i1 = 0;
    sup = "";
    raz = 0;
    sup = sup + nuli;
    nuli = nuli + "0";
    i2++;
}
return itog;
}
