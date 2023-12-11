// WAP FOR FIND THE AREA OF RECTANGULER PRISM

#include<stdio.h>
main()
{ 
    int h,w,l,area;
    printf("enter the value of hieght : ");
    scanf("%d",&h);
    
    printf("Enter the value of wieght : ");
    scanf("%d",&w);
    
    printf("Enter the value of lenght : ");
    scanf("%d",&l);
    
    area= 2*(w*l+h*l+h*w);
    printf("The area of rectanguler prism %d",area);

    return 0;
}
