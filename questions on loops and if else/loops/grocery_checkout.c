// #include <stdio.h>

// int main(){
//     int price;
//     int sum = 0;
//     do
//     {
//         scanf("%d",&price);
//         sum += price;
//     } while (price != 0);
//     printf("%d\n",sum);
//     printf("the bill after 10 percent discount : %f",(sum-(sum*0.10)));
//     return 0;
// }

#include <stdio.h>

int main(){
    int price;
    int sum = 0;
    for(int i = 0;;i++){
        scanf("%d",&price);
        sum += price;
        if(price ==0){
            break;
        }
    }
    printf("%d\n",sum);
    printf("the bill after 10 percent discount : %f",(sum-(sum*0.10)));
    return 0;
}