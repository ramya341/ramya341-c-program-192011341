#include<stdio.h>
void main()
{
    int m1,m2,m3,m4,agg,tot;
    printf("Enter your marks in python :");
    scanf("%d",&m1);
    printf("Enter your marks in C :");
    scanf("%d",&m2);
    printf("Enter your marks in physics :");
    scanf("%d",&m3);
    printf("Enter your marks in maths :");
    scanf("%d",&m4);
    agg=(m1+m2+m3+m4)/4;
    printf("Aggregate = %d\n",agg);
    if(agg>75){
    	printf("Distinction");
	}
	else if(60<=agg && agg<75){
    	printf("First class");
	}
	else if(50<=agg && agg<60){
    	printf("Second class");
	}
	else if(40<=agg && agg<50){
    	printf("Third class");
	}
	else if(agg<40){
    	printf("Fail");
	}

Output
Enter the marks in python: 90
Enter the marks in c programming: 91
Enter the marks in Mathematics: 92
Enter the marks in Physics: 93
Total= 366
Aggregate = 91.5
DISTINCTION
