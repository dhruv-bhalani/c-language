#include <stdio.h> 

int main() {
    int n,i,t = 1; 

    printf("Enter any number : ");
    scanf("%d", &n); 

    for(i = 1; i <= n; i++) 
    {
        printf("%ld,", t); 
	    t = (t * 10) + 1;
    }

   
}


    
