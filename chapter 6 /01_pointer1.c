#include <stdio.h>
int main(){
    int a = 5 ;
    int* x = &a;
    printf("%p\n",x); // %p se address print hota h 
    printf("%p",&x); // this prints address of x(pointer)
    printf("\n%d",*x); // this prints value at address stored in x
    *x = 10; // this changes the value at address stored in x to 10
    return 0;
}
// so in above code
// 1. A pointer x is declared and initialized to the address of the variable a.
// 2. The address of a is printed using the pointer x.
// 3. The pointer x is dereferenced to get the value at the address it points to.
// 4. The value at the address stored in x is changed to 10.



// // printing of address 
// #include <stdio.h>
// int main(){
//     int age = 18;
//     int *ptr = &age;  // ptr holds address of age
//     // printing addresses
//     printf("%p\n",&age);  // printing address of age
//     printf("%p\n",ptr);   // printing address stored in ptr
//     // upper both will print same address because ptr holds address of age
//     printf("%p\n",&ptr);  // printing address of ptr
//     return 0;
// }