#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int n, d;
char *str;
double time1, time2, time3, time4;

int gendata();
void reverse(char *str, int x, int y);
void reversal(char *str);
void printvalue();
int countdistance(int d, int n);