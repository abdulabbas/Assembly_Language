/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 *
 * Created on October 20, 2016, 12:59 PM
 */

#include <cstdlib>
#include <cstdio>

using namespace std;

/*
 * 
 */
int main() {

	int sum = 0;
	int n;

	do
	{
		printf("Enter a positive value for N: ");
		scanf("%d",&n);
		if ( n<0 ) printf("Invalid value for N, must be positive!\n");
	} while (n<0);

	int counter=1;

	while(counter<=n)
	{
		sum=sum+counter;
		counter++;
	}

	printf("The sum from 1 to %d is %d\n",n,sum);
	return 0;
}



