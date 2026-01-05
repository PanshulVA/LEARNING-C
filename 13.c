//return_type (*pointer_name)(parameter_types);

// #include <stdio.h>

// int sub(int a, int b) {
//     return a - b;
// }

// int main() {
  
//     // Declare a function pointer that matches
//   	// the signature of add() function
//     int (*fptr)(int, int);

//     // Assign to add()
//     fptr = &sub;

//     // Call the function via ptr
//     printf("%d\n", fptr(10, 5));
//     return 0;
// }

// #include <stdio.h>

// // A simple addition function
// int add(int a, int b) {
//     return a + b;
// }

// // A simple subtraction function
// int subtract(int a, int b) {
//     return a - b;
// }

// void calc(int a, int b, int (*op)(int, int)) {
//     printf("%d\n", op(a, b));
// }

// int main() {
  
//     // Passing different 
//     // functions to 'calc'
//     calc(10, 5, add);
//   	calc(10, 5, subtract);
//     return 0;
// }

// #include <stdio.h>

// // Function declarations
// int add(int a, int b) {
//     return a + b;
// }
// int sub(int a, int b) {
//     return a - b;
// }
// int mul(int a, int b) {
//     return a * b;
// }
// int divd(int a, int b) {
//     if(b!=0)
//     return a / b;
//     else
//     return -1;
// }

// int main() {
    
//     // Declare an array of function pointers
//     int (*farr[])(int, int) = {add, sub, mul, divd};
//     int x = 57, y = 28;

//     // Dynamically call functions using the array
//     printf("Sum: %d\n", farr[0](x, y)); 
//     printf("Difference: %d\n", farr[1](x, y));
//     printf("Product: %d\n", farr[2](x, y));
//     printf("Divide: %d\n", farr[3](x, y));

//     return 0;
// }

// #include <stdio.h>

// // Define a union with 
// // different data types
// union Student {
//     int rollNo;
//     float height;
//     char firstLetter;
// };

// int main() {
    
//     // Declare a union variable
//     union Student data;

//     // Assign and print the roll number
//     data.rollNo = 21;
//     printf("%d\n", data.rollNo);
//     data.height = 5.2;
//     printf("%.2f\n", data.height);
//     data.firstLetter = 'N';
//     printf("%c\n", data.firstLetter);

//     return 0;
// }

// #include <stdio.h>

// // Define a union with 
// // different data types
// struct Student {
//     int rollNo;
    
//     // Anonymous union
//     union {
//         int marks;
//     } performance;
// };

// int main() {
    
//     // Declare a structure variable
//     struct Student abc;

//     abc.rollNo = 21;
//     printf("%d\n", abc.rollNo);
    
//     // Assign and print the member of anonymous union
//     abc.performance.marks = 91;
//     printf("%d", abc.performance.marks);

//     return 0;
// }
