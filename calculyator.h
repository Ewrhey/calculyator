#ifndef CALCULYATOR_H_INCLUDED
#define CALCULYATOR_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

int char_number(char c);
char number_char(int n);
long long len(string str);
bool only_numbers(string num);
string nuli_d(string itog, int len1);
string plus_raz_s(int len_max, int raz, string itog);
string perehod_raz_d(int raz, int len1, string itog);
string reverse_str(string str);
string itog_sum(int raz, string sup, string itog);
string slice_str(string str, int start, int end_);


string multiplication(string num1, string num2);
string difference(string num1, string num2);
string sum(string num1, string num2);
#endif // CALCULYATOR_H_INCLUDED
