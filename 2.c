//Q1
#include<stdio.h>
int q1main()
{int a,b,x;
printf("select a valid option\n1.square\n2.rectangle\n3.circle\n4.triangle\n5.exit\n");
scanf("%d",&x);
switch(x)
{case 1:
printf("enter a lenght of side in square\n");
  scanf("%d",&a);
    printf("area of square is %d",a*a);
     break;
case 2:
  printf(" enter a rectangle lenght and breath\n");
    scanf("%d %d",&a,&b);
      printf("area of rectangke is %d",a*b);
       break;
 case 3:
   printf("enter radius of circle");
     scanf("%d",&a);
      printf("area of circle id %f",3.14*a*a);
       break;
  case 4: 
      printf("enter base and height of triangle");
        scanf("%d %d",&a,&b);
          printf("area of triangle if %d",a*b/2);  
           break;    


   case 5:
        printf("exit");
        break;
   default :
     printf("not match");}    
        
  return 0; 

}

//Q1
/*
{int x,a,b;
printf("select a valid option\n1.square\n2.rectangle\n3.circle\n4.triangle\n5.exit\n");
scanf("%d",&x);
if(x==1){
printf("enter a lenght of side in square\n");
scanf("%d",&a);
printf("area of square is %d",a*a);}
else if(x==2){
    printf(" enter a rectangle lenght and breath\n");
    scanf("%d %d",&a,&b);
    printf("area of rectangke is %d",a*b);}
    else if(x==3){
    printf("enter radius of circle");
    scanf("%d",&a);
    printf("area of circle id %f",3.14*a*a);}
    else if (x==4){
    printf("enter base and height of triangle");
    scanf("%d %d",&a,&b);
    printf("area of triangle if %d",a*b/2);}
    else printf("exit");
    return 0;}*/

    //Q2
    int q2main()
    {int n,i=1,fac;
    printf("enter a number\n");
    scanf("%d",&n);
    for(fac=1;i<=n;i++)
    fac=fac*i;
    printf("factorial is :%d",fac);
    return 0;}
