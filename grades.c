#include<stdio.h>
void main()
{ 
    int marks;
    marks=88;
     if(marks>85 && marks<=100)
     printf("congrats A GRADE");
     
     else if(marks>60 && marks<=85)
     printf("B GRADE");
     else if(marks>45 && marks<=60)
     printf("C GRADE");
     else if(marks>35 && marks<=45)
     printf("D grade");
     
     else
     printf("FAIL"); 
}