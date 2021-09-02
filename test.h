#include <stdio.h>

//split内で使う、区切り文字かの判定を行う
int isDelimiter(char p, char delim);
//(区切った文字列の配列のポインタ、元の文字列、区切り文字)
int split(char *dst[], char *src, char delim);
