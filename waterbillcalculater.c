/*
Name;lekipalu hellen lelemusi
Regno;PA106/G/28728/25
Description;program to display water bill calculater
*/
#include<stdio.h>
int main(){
    int units;
    float totalbill;
    printf("enter number of water units:");
    scanf("%d,&units");
    if(units<=30){
        totalbill=units*20;
    }
    else if(units<=60){
        totalbill=units*25;
    }
        else(units>=60){
            totalbill=units*30;
        }
    printf("totalbill is %.2KES\n,totalbill");
    return 0;
}