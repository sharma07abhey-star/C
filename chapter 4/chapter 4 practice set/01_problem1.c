// #include <stdio.h>

// //  print multiplication table of a given number n using while loop

// int main(){
//     int n , i = 1;
//     scanf("%d",&n);
//     while (i<11)
//     {
//         printf("%d X %d = %d\n",n,i,n*i);
//         i ++;
//     }
    
//     return 0;
// }

#include <stdio.h>

//  print multiplication table of a given number n  using for loop

int main(){
    int n , i = 1;
    scanf("%d",&n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    
    
    return 0;
}