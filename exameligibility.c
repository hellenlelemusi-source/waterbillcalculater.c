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
        totalbill=20
    }
    if else(units<=60){
        totalbill=25
    }
        else(units>=60){
            totalbill=30
        }
    printf("totalbill is %.2KES\,totalbill");
    return 0;
}