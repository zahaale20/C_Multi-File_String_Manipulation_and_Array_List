# C_Multi-File_String_Manipulation_and_Array_List

### Description:
This GitHub repository showcases a project in C, demonstrating multi-file code organization and data structure implementation. This project is a testament to my proficiency in managing complex C programming tasks, focusing on string manipulation functions and dynamic array list management.

### String Manipulation Across Multiple Files (Task1): 
This part of the project emphasizes the effective organization of C code across multiple files. The highlights are:

- Efficient Use of Header Files: Demonstrating the proper use of header files (.h) for function prototypes, structure definitions, and other declarations.
- Function Implementation: Successfully implemented two functions in task1.c: str_lower, for converting strings to lowercase, and str_lower_mutate, for in-place string mutation to lowercase.
- Robust Testing: Developed comprehensive test cases in task1_tests.c, using checkit macros to ensure the reliability and accuracy of the string functions.
- Preprocessor Directives: Skillfully used preprocessor directives, especially #include, to compile multi-file programs.
- Code Clarity and Maintainability: Achieved a high level of clarity and maintainability by organizing code into logical units across different files.
- Array List Implementation (Task2): This task exhibits my ability to implement and manage a dynamic data structure in C. Key components include:
- Dynamic Data Structure Creation: Created an array_list_new function for dynamic allocation of a new array list structure, effectively managing its capacity and length.
- Resizable Array Functionality: Implemented array_list_add_to_end to add elements to the array list and resize the underlying array as necessary, demonstrating adept use of realloc.
- Makefile Mastery: Employed a Makefile for compilation, showcasing an understanding of its role in streamlining the build process.
- Comprehensive Testing: Wrote extensive tests to validate the functionality of the array list, particularly in scenarios requiring the resizing of the array.

### Array List Implementation (Task2): 
This task exhibits my ability to implement and manage a dynamic data structure in C. Key components include:

- Dynamic Data Structure Creation: Created an array_list_new function for dynamic allocation of a new array list structure, effectively managing its capacity and length.
Resizable Array Functionality: Implemented array_list_add_to_end to add elements to the array list and resize the underlying array as necessary, demonstrating adept use of realloc.
Makefile Mastery: Employed a Makefile for compilation, showcasing an understanding of its role in streamlining the build process.
Comprehensive Testing: Wrote extensive tests to validate the functionality of the array list, particularly in scenarios requiring the resizing of the array.

### Repository Contents:
- Complete source code for both tasks (task1.c, task1.h, task1_tests.c, array_list.c, array_list.h, array_list_tests.c).
- Makefiles for each task, demonstrating efficient project build management.
- A suite of test cases, confirming the functionality and robustness of the implemented features.
- Detailed documentation on the design, functionality, and usage of each component in the project.


To compile task 1:

    gcc -Wall -std=c99 -pedantic task1.c task1_tests.c -o task1

To run task 1:

    ./task1_tests

To compile task 2:

    make

To run task 2:

    ./task2_tests
