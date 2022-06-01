#include <iostream>
#include <unistd.h>
#include <ctime>
#define OSWindows "cls"
#define OSLinux "clear"
using namespace std;

void SleepFunction()//this is a sleep function
{
  for(int i = 0; i <= 10999999;i++){}
}

void gameload1(char LetterArray[],/*this the sleep function counting with the for loop*/void SleepFun(),int num)
{
          SleepFun();
          cout<<LetterArray[num];
}
void gameload2(char CharArray[],/*this the sleep function counting with the for loop*/void SleepFun(),int num)
{
          SleepFun();
          cout<<CharArray[num];
}


int main()
{

       char loadingletter[]={'P','r','o','g','r','a','m',' ','L','o','a','d','i','n','g'};
       char   loadingChar[]={'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'};

       for(int c =0; c <5;c++)
       {
         for(int i = 0; i<=14;i++)
         {

           int hold =c%2;
           if(hold== 0)

           {
             gameload1(loadingletter,SleepFunction,i);
             if(i==14)
             /*
              this nested if statmant will make sure
              the the program pause at the end of the array
              so the user will see it and read it
             */
              {
                sleep(2);
                i +=1;
                gameload1(loadingletter,SleepFunction,i);
              }
           }
           else if(hold ==1)
            {
              gameload2(loadingChar,SleepFunction,i);
            }


         }
         system(OSWindows);
         //system(OSLinux);
     }
 return 0;
}
