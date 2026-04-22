// #include <stdio.h>
// int main(){
//     int x = 50;
//     int *ptr1 = &x;
//     int *ptr2 = &x;
//     int y = ++*ptr2;
//     printf("%d %d\n",++*ptr1,y);
//     return 0;
// }


// swap two variables using pointers
#include <stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int *p1 = &a;
    int *p2 = &b;
    int temp = a;
    *p1 = *p2;
    *p2 = temp;
    printf("%d %d",a,b);
    return 0;
}
