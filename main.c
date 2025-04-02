#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(){
    int t;
    printf("Choose the Time Format\n");
    printf("1. 24 hour format\n");
    printf("2. 12 hour format\n");
    printf("choose your option: [1/2]\n");
    scanf("%d", &t);


    if(t==1 || t==2){
            while(1){
  time_t rawtime; //step-1 where we declare
  struct tm *currenttime; //declaring a structure
  char buffer[50];

  time(&rawtime); //store the value of time in raw time
  currenttime = localtime(&rawtime); //using the structure here to get the local time

  system("cls");

   if(t==1){
       //24 hour format
        strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", currenttime); //here we can declare the FORMAT  of the time to show
  //string-f-time = string format time and to know all the format's visit cppreference page (browser)
  printf("Current Date & Time:%s", buffer);
   }
  else if(t == 2){
        //12 hour format
        strftime(buffer, sizeof(buffer), "%d-%m-%Y || %I:%M:%S %p", currenttime);
        printf("Current Date & Time:%s", buffer);
    }

    Sleep(1000);
            }
    } else{
    printf("Invalid choice! please select 1 or 2");
  }
     return 0;
}

