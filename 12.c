// #include <stdio.h>

// int main() {
//     int var = 10;
    
//     // Store address of var variable
//     int* ptr = &var;
    
//     // Dereferencing ptr to access the value
//     printf("%d\n", *ptr);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int *ptr1;
//     char *ptr2;
    
//     // Finding size using sizeof()
//     printf("%zu\n", sizeof(ptr1));
//     printf("%zu\n", sizeof(ptr2));
    
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// 
// int main() {
    // int* ptr = (int*)malloc(sizeof(int));
// 
    //After below free call, ptr becomes a dangling pointer
    // free(ptr);
    // printf("Memory freed\n");
// 
    //removing Dangling Pointer
    // ptr = NULL;
// 
    // return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 90;
//     int b = 50;

//     // Creating a constant pointer
//     int* const ptr = &a;
    
//     // Trying to reassign it to b
//     ptr = &b;

//     return 0;
// }

// #include <stdio.h>

// int add(int a, int b) {
//     return a + b;
// }

// int main() {
  
//     // Declare a function pointer that matches
//   	// the signature of add() function
//     int (*fptr)(int, int);

//     // Assign address of add()
//     fptr = &add;

//     // Call the function via ptr
//     printf("%d\n", fptr(10, 5));

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int var = 10;
  
//     // Pointer to int
//     int *ptr1 = &var;
  
//     // Pointer to pointer (double pointer)
//     int **ptr2 = &ptr1;  

//     // Accessing values using all three
//     printf("var: %d\n", var);          
//     printf("*ptr1: %d\n", *ptr1);
//     printf("**ptr2: %d\n", **ptr2);
//     printf("var: %d\n", var);          
//     printf("*ptr1: %d\n", ptr1);
//     printf("**ptr2: %d\n", ptr2);
//     return 0;
// }



