#include <stdio.h>
int main()
{ 
    int s1, s2, s3;
    printf("Enter sides of triangle : ");
    scanf("%d%d%d", &s1, &s2, &s3);

    if (( s1 + s2 > s3 ) && ( s2 + s3 > s1 ) && ( s1 + s3 > s2 )){
        printf("The triangle is valid \n");
        
        if ( s1 == s2 && s2 == s3){
            printf("The triangle is equilateral \n");
        }   
        else if ( s1 == s2 || s2 == s3 || s3 == s1){
            printf("The triangle is isoceles \n");
        }
        else {
            printf("The triangle is scalene \n");
        }
    }
    else {
        printf("The triangle is not valid \n");
    }
    return 0;
}

