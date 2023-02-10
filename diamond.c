#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
int n;
printf("Enter required number: ");
scanf("%d", &n);

for(int i=1 ; i<=n ; i++){
    printf("\n");
    
    for(int k=n-i ; k>=1 ; k--){
        printf(" ");
    }
    for(int j=1 ; j<=i ; j++){
    printf("* ");
    }
}

for(int i=n-1 ; i>=1 ; i--){
    printf("\n");
    for(int k=1 ; k<=n-i ; k++){
        printf(" ");
    }
    for(int j=1 ; j<=i ; j++){
    printf("* ");
    }
}

printf("\n");

for(int i=1 ; i<=n ; i++){
    printf("\n");
    
    for(int k=n-i ; k>=1 ; k--){
        printf(" ");
    }
    for(int j=1 ; j<=i ; j++){
        if(j==1 || j==i){
    printf("* ");
    }
    else{
        printf("  ");
    }
    }
}

for(int i=n-1 ; i>=1 ; i--){
    printf("\n");
    for(int k=1 ; k<=n-i ; k++){
        printf(" ");
    }
    for(int j=1 ; j<=i ; j++){
        if(j==1 || j==i){
    printf("* ");
    }
    else{
        printf("  ");
    }
    }
}

return 0;
}