/*
--ANDREA BERARDO--
10/12/2025
v 1.0.0
*/

#include<iostream>
#include<stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int const a = 32;
int const b = 9/5;

float conversione (int gradi_c);
int main () 
{
for (int i=0; i<=20; i++)
	{
		cout <<i<<" gradi celsius sono equivalenti a : "<< conversione (i) <<" gradi fareneith"<< endl;
	}
}
float conversione (int gradi_c)
{
	return a+b*gradi_c;
}
