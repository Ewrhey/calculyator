#include "calculyator.h"
int char_number(char c){
return c - '0';
}

char number_char(int n){
return 48 + n;
}

long long len(string str){
int i = 0;
while (str[i] != '\0')
        i++;
return i;
}

bool only_numbers(string num){
for (long long i = 0; num[i] != '\0'; i++)
    if (num[i] < '0' || num[i] > '9' && num[i] != '-' && num[i] != '+' && num[i] != '*')
        return false;
return true;
}
