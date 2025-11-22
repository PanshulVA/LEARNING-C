// for (initialization; condition; updation) { 
//      // body of for loop
// }


// #include<stdio.h>

// int main(){
//     printf("HELLOOOO!!\n");
//     printf("HEHEHEHEHEHE!!\n");
//     printf("IM AWESOME!!\n");

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     for (int i =0; i <3; i++) {
//         printf("HEHEHEHEHEHEHEHEHEHEHEHEHE\n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     for (int i = 0; i<7; i++) {
//         printf("%d\n" , i+1);
//     }
//     return 0;
// }

// while (condition) {
//     // Body of the loop
// }

// #include<stdio.h>

// int main(){
//     int i =0;

//     while (i<=5) {
//         printf("%d\n", i+1);

//         i++;
//     }
//     return 0;
// }


// do {
//     // Body of the loop
// } while (condition);

// #include<stdio.h>

// int main(){
//     int i =0;

//     do {
//         printf("%d\n", i);

//         i++;

//     } while (i <=3);
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     for ( ;  ;  ) {
//         printf("MWAHAHAHAHAHAHAHAHAHAHAHAHAHAHA");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     while(1){
//         printf("MWAHAHHAHAHAHAHAH");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     do {
//         printf("MWAHAHAHAHAHAHAHAHAHAHAHA");

//     } while (1);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     for (int i =0; i < 3; i++) {
//         for (int j = 0; j <2; j++) {
//             printf("i = %d, j= %d\n" , i, j);
//         }
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     for (int i =0; i<5; i++) {
//         if (i==3) {
//             break;
//         }
//         printf("%d\n", i);
//     }
//     printf("\n");

//     for (int i=0; i<5; i++) {
//         if (i==3) {
//             continue;
//         }
//         printf("%d\n",i);
//     }
//     printf("\n");

//     for (int i =0; i<5; i++) {
//         if (i==3) {
//             goto skip;
//         }
//         printf ("%d\n", i);
//     }
//     skip:
//         printf("\nJumped to the 'skip' label %s", "when i equals 3.\n");
//     return 0;
// }