/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 *
 * Created on September 23, 2016, 9:21 PM 
 */

//The program works but from 10 to 35, which need to be A to Z 
//However it stays on the numerical values 
//The Decimal Value of 58 for example in Base16, Base36 
//Base16 your output would be (3 10), it should be (3A) 
//Base36 your output would be (1 22), it should be (1M) 

/*
 * C++ Program which Converts Base 10 to any other Base 
 */

//(0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z) 
//(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35 )

//(0-9),(A-Z)

//( A=10, B=11, C=12, D=13, E=14, F=15, G=16, H=17, I=18, J=19, K=20, L=21, M=22, N=23, O=24, P=25, Q=26, R=27, S=28, T=29, U=30, V=31, W=32, X=33, Y=34, Z=35 )


#include <iostream>
#include <cmath>



int main()
{
    using namespace std;
    
    int decNum, base, index, remainder, yesNo, temp, arraySize;

    while (yesNo != 2)
        {
        cout << "Please enter your decimal number: " << endl;
        cin >> decNum;
        cout << "What base should I convert it to? :" << endl;
        cin >> base;
        index = 0;
        remainder = 0;
        arraySize = 0;
        temp = decNum;
        
        //Calculate Array Size needed
            while (temp != 0)
                {
                
                    temp = temp/base;
                    arraySize++;

                }         
        
        int digit[arraySize];
        cout<<"Array Size: " << arraySize << endl;
        
        //Fill Array
            while (decNum != 0)
                 {

                     remainder = decNum % base;
                     decNum = decNum / base;
                     digit[index] = remainder;
                     cout << decNum << " R" << remainder <<"  Index: "<< index << "  Array value: " << digit[index] <<endl;
                     index ++;

                 }
        
            index--;
        
        //Print array
        cout << "Your output: ";
        
            while (index >= 0)
                {
                
                    cout << digit[index];
                        if (index != 0)
                            {
                                cout << " ";
                            }
                    index--;
                
                }
        
        cout << endl << endl << "Would you like to go again? (1 = yes, 2 = no): ";
        cin >> yesNo;

            if (yesNo == 2)
                {
                    cout << "Ok, goodbye" << endl;
                }
        
        }   
    
    return 0;
    
}


