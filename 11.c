// #include<stdio.h>

// int main(){
//     char str[] = "HELLLOOOOOO!!";

//     printf("The string i want to print ij: %s\n", str);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char str[]="yeyeyeyeyeyeyeyeyeye";
//     printf("%s\n" , str); //%s is for the whole string
//     printf("%c\n" , str[0]); // %c is for a single character
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char str[]= "yeyeyeyeyeyeyeyeyeye";

//     str[0]='h';
//     printf("%c\n", str[0]);
//     printf("%s\n", str);
//     return 0;
// }

// #include<stdio.h>
// #include <string.h>

// int main(){
//     char str[]="HEHEHEHEHEHEHEHHEHEHEHE";

//     printf("%d\n", strlen(str));
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char str[7];
    
//     scanf("%s", str); // For user input
//     printf("%s\n", str);
    
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     char str[7];
//     scanf("%[^\n]s" , str); //%[ introduces a set of characters to accept. ^\n means accept every character except newline. %[^\n] allows scanf to read a full sentence including spaces.
//     printf("%s\n" , str);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char str[8];
//     fgets(str, 8, stdin); // better alter to scanf doesnt need [^\n] this shit. Just need to extend one index more
//     printf("%s\n", str);
//     return 0;
// }


// #include<stdio.h>

// void printStr(char str[]) {
//     printf("%s\n" , str);
// }
// int main(){
//     char str[]="Panshul is awesome";
//     printStr(str);
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     char str[16]="Panshul";
//     char* ptr=str;
//     while (*ptr != '\0') {
//         printf("%c\n" , *ptr);
//         ptr++;
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     const char *str = "Panshul says hello";
//     printf("%s\n" , str);
//     return 0;
// }