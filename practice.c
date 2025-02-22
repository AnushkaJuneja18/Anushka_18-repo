#include<stdio.h>

// int main() {
//     printf("Hello World");
// }

// int main() {
//     int x;
//     printf("enter a number : ");
//     scanf("%d", &x);
//     printf("%d", x % 2 == 0);
//     return 0;
// }
// # include<math.h>
// int main() {
//     int b, c;
//     b = c = 4;
//     int a = b + c;
//     int power = pow(b,c);
//     printf("%d", power);
//     return 0;
// }

// int main() {
//     int i = 1;
//     while(i <= 5) {
//         printf("%d \n", i);
//         i++;
//     }
//     return 0;
// }

// int main() {
//     int n;
//     printf("enter number :");
//     scanf("%d \n", &n);

//     int sum = 0;
//     for(int i = 1; j = n; i <= n && j >= 1; i++; j--) {
//         sum = sum + j;
//         printf("%d \n", j);
//     }
//     printf("sum is %d", sum);
//     return 0;
// }

// int main() {
//     int n;
//     printf("enter n : ");
//     scanf("%d", &n);

//     int sum = 0;
//     for(int i=1, j=n; i<=n && j>=1; i++,j--) {
//         sum = sum + j; //sum += i
//         printf("%d \n", j);
//     }
//     printf("sum is %d", sum);
//     // for(int i = n; i>=1; i--) {
//     //     printf("%d \n", i)
//     // }
//     return 0;
// }

int main() {
    int initial_saving, increment, days, total = 0;
    printf("");
    scanf("%d %d %d", &initial_saving, &increment, &days);
    total += initial_saving;
    for(int i = 1; i<= days; i++) {
        total += (i * increment);
    }
    printf("%d", total);
    return 0;
}

