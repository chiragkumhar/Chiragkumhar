// Program 12 WAP to accept 5 students name and store it in array 

#include <stdio.h>
main() 
{
    int a[5],r;
    
    for(r=0;r<5;r++)
    {
        printf("Enter Name : ");
        scanf("%s",&a[r]);
        
    }
    for(r=0;r<5;r++)
    {
        printf("%s\n",a[r]);
    }
}
