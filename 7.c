// #include<stdio.h>

// int main(){
//     int num= 57;
//     if (num>28) {
//         printf("REALLLLYYY????\n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int age = 20;
//     if (age>=18) {
//         printf("Eligible to drive\n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     // int age =18;
//     int age =10;
    
//     if (age>=18) {
//         printf("Eligible to drive\n");
//     }
    
//     else {
//         printf("Don't break basic rules\n");
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int age = 5;

//     if (age>=18) {
//         if (age>=55){
//             printf("You're to old!!!");
//         }
//         else {
//             printf("You're eligible to drive!!");
//         }
//     }
//     else {
//         if (age>=16){
//             printf("Have your learning license!");
//         }
//         else {
//             printf("You're too young!");
//         }
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int a = 18;

//     if (a==10) {
//         printf("You are too young!");
//     }
//     else if (a==16) {
//         printf("Learning licesence is available for you!");
//     }
//     else if (a>=18) {
//         printf("GET YOUR FOOKING DRIVING LICENSE!!\n");
//     }
//     else {
//         printf("You're too old");
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int age =18;

//     switch (age) {
//     case 16:
//         printf("Get your L.L.!");
//         break;
//     case 18:
//         printf("Get your D.L.!\n");
//         break;
//     default:
//         printf("Default case is executed");
//         break;
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int age;
//     int flag =0;

//     age = flag == 0? 25: -25;
//     printf("Value of var when flag is 0: %d\n", age);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int arr[] = {2,5,7,8};
//     int key = 5;
//     int size= 4;

//     for (int i =0; i< size; i++) {
//         if (arr[i] == key) {
//             printf("Element is at: %d\n", (i+1));
//             break;
//         }
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     for (int i = 1; i <= 10; i++) {

//         // If i is equals to 6,
//         // continue to next iteration
//         // without printing
//         if (i == 6)
//             continue;
//         else
//             printf("%d ", i);
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n = 1;
// label:
//     printf("%d ", n);
//     n++;
//     if (n <= 10)
//         goto label;
//     return 0;
// }


// #include <stdio.h>

// int sum(int a, int b) {
//     int s1 = a + b;
//     return s1;
// }

// int main()
// {
//     int num1 = 10;
//     int num2 = 10;
//     int sumOf = sum(num1, num2);
//     printf("%d", sumOf);
//     return 0;
// }