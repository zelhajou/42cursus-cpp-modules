# C++ Programming Language cheat sheet

C++ is a general-purpose programming language that was developed as an extension of the C programming language. It is known for its efficiency, flexibility, and performance, making it a popular choice for system programming, game development, and high-performance applications.

<table>
<tr>
<td> <b>Category</b> </td>
<td> <b>Information</b> </td>
</tr>
<tr>
<td>Name</td>
<td>C++ Programming Language</td>
</tr>
<tr>
<td>Paradigm</td>
<td>Multi-paradigm: procedural, functional, object-oriented, generic</td>
</tr>
<tr>
<td>Designed by</td>
<td>Bjarne Stroustrup</td>
</tr>
<tr>
<td>Developer</td>
<td>Bjarne Stroustrup and various contributors</td>
</tr>
<tr>
<td>Standardization</td>
<td>ISO/IEC 14882:1998 (C++98), ISO/IEC 14882:2003 (C++03), ISO/IEC 14882:2011 (C++11), ISO/IEC 14882:2014 (C++14), ISO/IEC 14882:2017 (C++17), ISO/IEC 14882:2020 (C++20)</td>
</tr>
<tr>
<td>First appeared</td>
<td>1985</td>
</tr>
<tr>
<td>Stable release</td>
<td>C++20 / December 2020</td>
</tr>
<tr>
<td>Typing discipline</td>
<td>Static, nominative, partially inferred</td>
</tr>
<tr>
<td>OS</td>
<td>Cross-platform</td>
</tr>
<tr>
<td>Syntax Style</td>
<td>C-like</td>
</tr>
<tr>
<td>File Extension</td>
<td>.C, .cc, .cpp, .cxx, .c++, .h, .hh, .hpp, .hxx, .h++</td>
</tr>
<tr>
<td>Compilation</td>
<td>Compiled language</td>
</tr>
<tr>
<td>Uses</td>
<td>
<ul>
<li>Application software</li>
<li>Systems software</li>
<li>Device drivers</li>
<li>Client-server applications</li>
<li>Embedded firmware</li>
</ul>
</td>
</tr>
<tr>
<td>Advantages</td>
<td>
<ul>
<li>Highly versatile</li>
<li>Performance efficiency</li>
<li>Rich standard library</li>
<li>Strong abstraction capabilities</li>
<li>Compatibility with C</li>
</ul>
</td>
</tr>
<tr>
<td>Key Features</td>
<td>
Object-oriented, Generic programming, Metaprogramming, Exception handling, Standard Template Library (STL), Standardization, Smart pointers, Multi-threading support, Lambda expressions, Move semantics, Rvalue references, Strong typing
</td>
</tr>
<tr>
<td>Major implementations</td>
<td>GNU Compiler Collection (GCC), Clang, Microsoft Visual C++, Intel C++ Compiler</td>
</tr>
<tr>
<td>Influenced by</td>
<td>C, Simula 67, Algol 68, Ada, ML</td>
</tr>
<tr>
<td>Influenced</td>
<td>
  D, Objective-C++, Java, C#, Swift, Rust, PHP, Perl, Python, JavaScript, Go
</td>
</tr>
</table>

## Table of Contents

- [C++ Programming Language cheat sheet](#c-programming-language-cheat-sheet) 
    - [Table of Contents](#table-of-contents)
    - [Code Example](#code-example)
    - [Installation and Setup](#installation-and-setup)
    - [Hello World Program](#hello-world-program)
       - [Header Files and Preprocessor Directives](#header-files-and-preprocessor-directives)
       - [Comments](#comments)
       - [Main Function](#main-function)
       - [Output Statement](#output-statement)
       - [Return Statement](#return-statement)
    - [keywords](#keywords)
    - [Data Types](#data-types)
       - [Static and Dynamic Data Types](#static-and-dynamic-data-types)
       - [Type Casting](#type-casting)
    - [Operators](#operators)
    - [Control Structures](#control-structures)
       - [Conditional Statements](#conditional-statements)
       - [Loops](#loops)
       - [Jump Statements](#jump-statements)
       - [Conditional Operator](#conditional-operator)
       - [Control Flow](#control-flow)
       - [Exception Handling](#exception-handling)
       - [Conditional Compilation](#conditional-compilation)
    - [Command Line Arguments](#command-line-arguments)
    - [Functions](#functions)
       - [Function Declaration](#function-declaration)
       - [Function Definition](#function-definition)
       - [Function Call](#function-call)
       - [Function Parameters](#function-parameters)
       - [Return Statement](#return-statement)
       - [Function Overloading](#function-overloading)
       - [Default Arguments](#default-arguments)
       - [Function Prototypes](#function-prototypes)
       - [Recursive Functions](#recursive-functions)
       - [Inline Functions](#inline-functions)
       - [Lambda Functions (C++11)](#lambda-functions-c11)
       - [Function Pointers](#function-pointers)
       - [Function Objects](#function-objects)
       - [Variadic Functions](#variadic-functions)
       - [Function Templates](#function-templates)
    - 


   




## Code Example

```cpp
#include <iostream>

// A simple function to add two numbers
int add(int a, int b) {
    return a + b;
}

class Calculator {
public:
    // A member function to multiply two numbers
    int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    int x = 5;
    int y = 3;

    // Using the standalone function 'add'
    int sum = add(x, y);
    std::cout << "Sum: " << sum << std::endl;

    // Using a class and member function
    Calculator calc;
    int product = calc.multiply(x, y);
    std::cout << "Product: " << product << std::endl;

    return 0;
}
```

## Installation and Setup

Before you can start programming in C++, you need to set up your development environment. Here are the basic steps to get started:

1. **Install a C++ compiler**: You need a C++ compiler to compile and run your C++ code. Some popular C++ compilers include:
   - GCC (GNU Compiler Collection): A free and open-source compiler available on Linux, macOS, and Windows.
   - Clang: Another open-source compiler that supports C++ and is known for its fast compilation times.
   - Microsoft Visual C++: A compiler provided by Microsoft for Windows development.

2. **Choose a text editor or IDE**: You can write C++ code in any text editor, but using an Integrated Development Environment (IDE) can make your coding experience more productive. Some popular C++ IDEs include:
   - Visual Studio Code: A lightweight and versatile code editor with C++ support through extensions.
   - Visual Studio: A full-featured IDE from Microsoft that provides comprehensive C++ development tools.
   - CLion: A cross-platform C++ IDE from JetBrains that offers advanced code analysis and refactoring features.

3. **Set up a build system**: To compile and run your C++ code, you need a build system that automates the compilation process. Common build systems for C++ include:

   - Make: A build automation tool that uses Makefiles to specify build rules.
   - CMake: A cross-platform build system generator that simplifies the process of building C++ projects.
   - Visual Studio Build Tools: A set of tools provided by Microsoft for building C++ projects on Windows.

## Hello World Program

```cpp
#include <iostream> // Preprocessor directive to include the iostream header file
int main() { // Main function directive
    std::cout << "Hello, World!" << std::endl; // Output statement
    return 0; // Return statement
}
```
Save the above code in a file named `hello.cpp` and compile it using a C++ compiler. For example, if you are using GCC, you can compile the code with the following command:

```bash
g++ hello.cpp -o hello
```

This will generate an executable file named `hello`. Run the executable to see the output:

```bash
./hello
```

You should see the output `Hello, World!` printed to the console.

### Header Files and Preprocessor Directives

- **Header Files**: Header files in C++ contain declarations of functions, classes, and variables that are used in a program. They typically have a `.h` or `.hpp` extension and are included in the source code using the `#include` directive.

- **Preprocessor Directives**: Preprocessor directives in C++ are commands that are processed by the preprocessor before compilation. They start with a `#` symbol and are used to include header files, define macros, and conditionally compile code.

in the `hello world` program, the `#include <iostream>` directive includes the `iostream` header file, which provides input and output functionality in C++. The `std::cout` statement is used to print the output `Hello, World!` to the console.

### Comments

Comments in C++ are used to document code and improve its readability. They are ignored by the compiler and do not affect the program's execution.

- **Single-line comments**: Single-line comments in C++ start with `//` and continue until the end of the line. They are used to add explanatory notes or disable code temporarily.

- **Multi-line comments**: Multi-line comments in C++ start with `/*` and end with `*/`. They can span multiple lines and are used for longer comments or to comment out blocks of code.

### Main Function

- The `main()` function is the entry point of a C++ program. It is called automatically when the program is executed and is responsible for controlling the program's flow.

- The `int` before `main()` indicates that the function returns an integer value. By convention, a return value of `0` indicates successful execution, while a non-zero value indicates an error.

### Output Statement

- The `std::cout` object is used to output data to the console in C++. It is part of the `iostream` standard library and is used with the insertion operator `<<` to display text, variables, and expressions.

- The `std::endl` manipulator is used to insert a newline character and flush the output buffer. It is equivalent to `\n` but ensures that the output is displayed immediately.

### Return Statement

- The `return` statement is used to exit a function and return a value to the caller. In the `main()` function, returning `0` indicates successful program execution, while returning a non-zero value indicates an error.

## keywords

C++ has a set of reserved keywords that have special meanings and cannot be used as identifiers (such as variable names, function names, or class names). These keywords are used to define the syntax and structure of the language and should not be used for other purposes.

[Keywords in C++ | List of all keywords in C++ ( Full Explanation )](https://www.scholarhat.com/tutorial/cpp/keywords-in-cpp)

## Data Types

Data types in C++ specify the type of data that a variable can hold. They define the size, range, and operations that can be performed on the data. C++ provides a variety of built-in data types, including primitive types, derived types, and user-defined types.

- **Primitive Data Types**: Basic data types that are directly supported by the language. They include integers, floating-point numbers, characters, and booleans.

  - **Integer Types**: `int`, `short`, `long`, `long long`, `unsigned int`, `unsigned short`, `unsigned long`, `unsigned long long`, `char`, `bool`
  - **Floating-Point Types**: `float`, `double`, `long double`
  - **Character Types**: `char`, `wchar_t`, `char16_t`, `char32_t`
  - **Boolean Type**: `bool`

- **Derived Data Types**: Data types that are derived from primitive types or other derived types. They include pointers, arrays, references, and functions.

  - **Pointers**: `int*`, `char*`, `double*`, `void*`
  - **Arrays**: `int[]`, `char[]`, `double[]`
  - **References**: `int&`, `char&`, `double&`
  - **Functions**: `int(*)(int, int)`, `void(*)(int)`

- **User-Defined Data Types**: Data types that are defined by the user using classes, structures, and enumerations.

  - **Classes**: User-defined data types that encapsulate data and functions into a single entity.
  - **Structures**: User-defined data types that group related data items together.
  - **Enumerations**: User-defined data types that define a set of named constants.

- **Standard Library Data Types**: Data types provided by the C++ standard library that offer additional functionality and features.

  - **Strings**: `std::string`, `std::wstring`, `std::u16string`, `std::u32string`
  - **Containers**: `std::vector`, `std::list`, `std::map`, `std::set`
  - **Iterators**: `std::iterator`, `std::reverse_iterator`, `std::move_iterator`
  - **Algorithms**: `std::sort`, `std::find`, `std::transform`, `std::accumulate`

- **User-Defined Literals**: Custom data types that can be defined by the user to extend the language's syntax and functionality.

- **User-Defined Literals**: `42s`, `3.14f`, `100ms`, `2h`

- **Type Modifiers**: Keywords that modify the properties of data types, such as signedness, size, and volatility.

  - **Type Modifiers**: `signed`, `unsigned`, `short`, `long`, `const`, `volatile`

- **Type Aliases**: Custom names given to existing data types to improve code readability and maintainability.

  - **Type Aliases**: `using`, `typedef`, `alias`

- **Type Inference**: Mechanism that allows the compiler to deduce the type of a variable based on its initializer.

  - **Type Inference**: `auto`, `decltype`, `std::decay`, `std::common_type`

- **Type Traits**: Template classes that provide information about the properties of data types at compile time.

  - **Type Traits**: `std::is_integral`, `std::is_floating_point`, `std::is_pointer`, `std::is_array`

### Static and Dynamic Data Types

- **Static Data Types**: Data types that are known at compile time and do not change during program execution. They are determined by the compiler based on the variable declaration.

Example:
```cpp
int x = 42; // Static data type (int)
```

- **Dynamic Data Types**: Data types that are determined at runtime and can change during program execution. They are typically used in dynamically allocated memory and polymorphic programming.

Example:
```cpp
int *ptr = new int; // Dynamic data type (int*)
```

### Type Casting

Type casting in C++ is the process of converting a variable from one data type to another. It can be done implicitly by the compiler or explicitly by the programmer using casting operators.

- **Implicit Type Casting**: Automatic conversion of data types by the compiler when compatible.

    ```cpp
    int x = 5;
    double y = x; // Implicit type casting from int to double
    ```

- **Explicit Type Casting**: Manual conversion of data types using casting operators.

    ```cpp
    double x = 3.14;
    int y = static_cast<int>(x); // Explicit type casting from double to int
    ```

- **C++ Casting Operators**: `static_cast`, `dynamic_cast`, `const_cast`, `reinterpret_cast`.

    `satic_cast` : It is used to convert one data type to another. It is similar to the C-style cast but provides more type safety.

    ```cpp
    double x = 3.14;
    int y = static_cast<int>(x); // Convert double to int
    ```

    `dynamic_cast` : It is used for safe downcasting of pointers and references in polymorphic classes.

    ```cpp
    class Base {
    public:
        virtual void foo() {}
    };

    class Derived : public Base {};

    int main() {
        Base *base = new Derived;
        Derived *derived = dynamic_cast<Derived*>(base);
        if (derived) {
            derived->foo();
        }
        delete base;
        return 0;
    }
    ```

    `const_cast` : It is used to add or remove const or volatile qualifiers from a variable.

    ```cpp
    const int x = 42;
    int y = const_cast<int>(x); // Remove const qualifier
    ```

    `reinterpret_cast` : It is used to convert one pointer type to another pointer type or to convert a pointer to an integer type.

    ```cpp
    #include <iostream>
    int main() {
        int num = 42;
        int *num_ptr = &num;

        // Disguise the integer pointer as a char pointer
        char *char_ptr = reinterpret_cast<char *>(num_ptr);

        for (size_t i = 0; i < sizeof(int); ++i) {
            // Print the individual bytes of the integer as characters
            std::cout << "Byte " << i << ": " << char_ptr[i] << std::endl;
        }

        return 0;
    }
    ```

- **C-Style Casting**: Traditional casting method that can be used to convert between data types.

    ```cpp
    double x = 3.14;
    int y = (int)x; // C-style casting from double to int
    ```

- **Type Conversion Functions**: Functions provided by the standard library to convert between data types.

    ```cpp
    std::string str = std::to_string(42); // Convert int to string
    int num = std::stoi("42"); // Convert string to int
    ```

## Operators

Operators in C++ are symbols that perform specific operations on one or more operands. They can be classified into various categories based on their functionality and usage.

- **Arithmetic Operators**: Perform mathematical operations on numeric operands.
    - **Addition (+)**: Adds two operands.
    - **Subtraction (-)**: Subtracts the second operand from the first.
    - **Multiplication (*)**: Multiplies two operands.
    - **Division (/)**: Divides the first operand by the second.
    - **Modulus (%)**: Returns the remainder of the division.

- **Relational Operators**: Compare two operands and return a boolean value.
        - **Equal to (==)**: Checks if two operands are equal.
        - **Not equal to (!=)**: Checks if two operands are not equal.
        - **Greater than (>)**: Checks if the first operand is greater than the second.
        - **Less than (<)**: Checks if the first operand is less than the second.
        - **Greater than or equal to (>=)**: Checks if the first operand is greater than or equal to the second.
        - **Less than or equal to (<=)**: Checks if the first operand is less than or equal to the second.

- **Logical Operators**: Combine multiple conditions and return a boolean value.
        - **Logical AND (&&)**: Returns true if both operands are true.
        - **Logical OR (||)**: Returns true if at least one operand is true.
        - **Logical NOT (!)**: Returns the opposite of the operand's value.

- **Assignment Operators**: Assign a value to a variable and perform an operation on it.
        - **Assignment (=)**: Assigns the value of the right operand to the left operand.
        - **Addition assignment (+=)**: Adds the right operand to the left operand and assigns the result.
        - **Subtraction assignment (-=)**: Subtracts the right operand from the left operand and assigns the result.
        - **Multiplication assignment (*=)**: Multiplies the left operand by the right operand and assigns the result.
        - **Division assignment (/=)**: Divides the left operand by the right operand and assigns the result.
        - **Modulus assignment (%=)**: Calculates the modulus of the left operand by the right operand and assigns the result.

- **Increment and Decrement Operators**: Increase or decrease the value of a variable by one.
        - **Increment (++)**: Increases the value of the operand by one.
        - **Decrement (--)**: Decreases the value of the operand by one.

- **Bitwise Operators**: Perform bitwise operations on integer operands.
        - **Bitwise AND (&)**: Performs a bitwise AND operation.
        - **Bitwise OR (|)**: Performs a bitwise OR operation.
        - **Bitwise XOR (^)**: Performs a bitwise XOR (exclusive OR) operation.
        - **Bitwise NOT (~)**: Performs a bitwise NOT (complement) operation.
        - **Left shift (<<)**: Shifts the bits of the left operand to the left by the number of positions specified by the right operand.
        - **Right shift (>>)**: Shifts the bits of the left operand to the right by the number of positions specified by the right operand.

- **Ternary Operator**: A conditional operator that evaluates a condition and returns one of two values based on the result.
        - **Ternary Operator (condition ? value1 : value2)**: Returns value1 if the condition is true, and value2 if the condition is false.

- **Comma Operator**: Evaluates multiple expressions and returns the value of the last expression.
        - **Comma Operator (expr1, expr2, expr3, ...)**: Evaluates expr1, expr2, expr3, and so on, and returns the value of the last expression.

- **Member Access Operators**: Access members of a class or structure.
        - **Dot Operator (.)**: Accesses members of an object using the object name.
        - **Arrow Operator (->)**: Accesses members of an object using a pointer to the object.

- **Scope Resolution Operator**: Specifies the scope of a function or variable.
        - **Scope Resolution Operator (::)**: Specifies the scope of a function or variable in a namespace or class.

## Control Structures

Control structures in C++ are used to alter the flow of a program based on certain conditions or loops. They include if-else statements, switch statements, loops, and jump statements.

### Conditional Statements

Conditional statements in C++ are used to execute different blocks of code based on specified conditions. They include if statements, if-else statements, nested if statements, and switch statements.

- **if Statement**: Executes a block of code if a specified condition is true.

    ```cpp
    int x = 5;
    if (x > 0) {
        std::cout << "Positive number" << std::endl;
    }
    ```
- **if-else Statement**: Executes one block of code if a condition is true and another block if it is false.

    ```cpp 
    int x = -5;
    if (x > 0) {
        std::cout << "Positive number" << std::endl;
    } else {
        std::cout << "Negative number" << std::endl;
    }
    ```
- **Nested if Statements**: Using if statements inside other if statements to create complex conditions.

    ```cpp
    int x = 5;
    if (x > 0) {
        if (x % 2 == 0) {
            std::cout << "Positive even number" << std::endl;
        } else {
            std::cout << "Positive odd number" << std::endl;
        }
    }
    ```
- **switch Statement**: Executes different code blocks based on the value of an expression.

    ```cpp
    int day = 3;
    switch (day) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        default:
            std::cout << "Invalid day" << std::endl;
    }
    ```

### Loops

Loops in C++ are used to execute a block of code repeatedly based on a specified condition. They include while loops, do-while loops, for loops, and range-based for loops.

- **while Loop**: Executes a block of code as long as a specified condition is true.

    ```cpp
    int i = 0;
    while (i < 5) {
        std::cout << i << std::endl;
        i++;
    }
    ```

- **do-while Loop**: Executes a block of code at least once and then repeats it as long as a specified condition is true.

    ```cpp
    int i = 0;
    do {
        std::cout << i << std::endl;
        i++;
    } while (i < 5);
    ```

- **for Loop**: Executes a block of code a specified number of times.

    ```cpp
    for (int i = 0; i < 5; i++) {
        std::cout << i << std::endl;
    }
    ```

- **Range-based for Loop (C++11)**: Iterates over the elements of a range-based container.

    ```cpp
    std::vector<int> vec = {1, 2, 3, 4, 5};
    for (int x : vec) {
        std::cout << x << std::endl;
    }
    ```

- **Nested Loops**: Using loops inside other loops to create complex patterns or iterate over multi-dimensional arrays.

    ```cpp
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << i << "," << j << std::endl;
        }
    }
    ```

### Jump Statements

Jump statements in C++ are used to alter the flow of a program by transferring control to a different part of the program. They include break, continue, return, and goto statements.

- **break Statement**: Exits the innermost loop or switch statement.

    ```cpp
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            break;
        }
        std::cout << i << std::endl;
    }
    ```

- **continue Statement**: Skips the current iteration of a loop and continues with the next iteration.

    ```cpp
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            continue;
        }
        std::cout << i << std::endl;
    }
    ```

- **return Statement**: Exits a function and returns a value to the caller.

    ```cpp
    int add(int a, int b) {
        return a + b;
    }
    ```

- **goto Statement**: Transfers control to a labeled statement in the program. (use sparingly, can lead to spaghetti code)

    ```cpp
    goto label;
    // Code
    label:
    // Statement
    ```

### Conditional Operator

The conditional operator in C++ is a ternary operator that evaluates a condition and returns one of two values based on the result. It is a shorthand way of writing if-else statements.

- **Conditional Operator**: `condition ? value1 : value2`

    ```cpp
    int x = 5;
    std::string result = (x > 0) ? "Positive" : "Negative";
    std::cout << result << std::endl;
    ```
- **Multiple Conditional Operators**: Nesting conditional operators to handle multiple conditions.

    ```cpp
    int x = 5;
    std::string result = (x > 0) ? "Positive" : (x < 0) ? "Negative" : "Zero";
    std::cout << result << std::endl;
    ```
- **Conditional Operator vs. if-else**: Using the conditional operator for simple conditions and if-else for more complex conditions.

    ```cpp
    int x = 5;
    std::string result = (x > 0) ? "Positive" : "Non-positive";
    if (x == 0) {
        result = "Zero";
    }
    std::cout << result << std::endl;
    ```

### Exception Handling

Exception handling in C++ is a mechanism to handle runtime errors and abnormal conditions that occur during program execution. It allows you to catch and handle exceptions, preventing the program from crashing.

- **try-catch Block**: A try block is used to enclose code that may throw an exception, and a catch block is used to handle the exception.

    ```cpp
    try {
        int x = 5;
        int y = 0;
        if (y == 0) {
            throw std::runtime_error("Division by zero");
        }
        int result = x / y;
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    ```
- **throw Statement**: Used to throw an exception when an error condition is encountered.

    ```cpp
    int x = 5;
    int y = 0;
    if (y == 0) {
        throw std::runtime_error("Division by zero");
    }
    int result = x / y;
    std::cout << "Result: " << result << std::endl;
    ```
- **Exception Classes**: Standard exception classes provided by the C++ standard library.
    
        - **std::exception**: Base class for all standard exceptions.
        - **std::runtime_error**: Exception class for runtime errors.
        - **std::logic_error**: Exception class for logical errors.
        - **std::invalid_argument**: Exception class for invalid arguments.
        - **std::out_of_range**: Exception class for out-of-range errors.

- **Custom Exceptions**: Defining custom exception classes to handle specific error conditions.
    
        ```cpp
        class MyException : public std::exception {
        public:
            const char* what() const noexcept override {
                return "My custom exception";
            }
        };
    
        int x = 5;
        int y = 0;
        if (y == 0) {
            throw MyException();
        }
        int result = x / y;
        std::cout << "Result: " << result << std::endl;
        ```
- **Exception Specifications**: Specifying the types of exceptions that a function can throw.

        ```cpp
        void foo() throw(std::runtime_error) {
            throw std::runtime_error("Error in foo");
        }
        ```


### Conditional Compilation

Conditional compilation in C++ allows you to include or exclude code based on preprocessor directives. It is used to create different versions of a program for different platforms or configurations.

- **Conditional Compilation**: `#ifdef`, `#ifndef`, `#endif`, `#if`, `#else`, `#elif`

    ```cpp
    #define DEBUG
    #ifdef DEBUG
    std::cout << "Debug mode" << std::endl;
    #else
    std::cout << "Release mode" << std::endl;
    #endif
    ```
- **Preprocessor Directives**: Special commands that are processed by the preprocessor before compilation.

    ```cpp
    #define PI 3.14159
    #define MAX(x, y) ((x) > (y) ? (x) : (y))

    double area = PI * radius * radius;
    int max = MAX(a, b);
    ```
- **Conditional Compilation with Macros**: Using macros to define conditional compilation directives.

    ```cpp
    #define DEBUG
    #ifdef DEBUG
    std::cout << "Debug mode" << std::endl;
    #else
    std::cout << "Release mode" << std::endl;
    #endif
    ```
- **Conditional Compilation with Command-Line Arguments**: Specifying conditional compilation directives using command-line arguments.

    ```bash
    g++ -DDEBUG -o program program.cpp
    ```
- **Conditional Compilation with Macros**: Using macros to define conditional compilation directives.

    ```cpp
    #define DEBUG
    #ifdef DEBUG
    std::cout << "Debug mode" << std::endl;
    #else
    std::cout << "Release mode" << std::endl;
    #endif
    ```

## Command Line Arguments

Command-line arguments are parameters passed to a program when it is executed from the command line. In C++, the `main()` function can accept command-line arguments as arguments.

```cpp
int main(int argc, char* argv[]) {
    for (int i = 0; i < argc; i++) {
        std::cout << "Argument " << i << ": " << argv[i] << std::endl;
    }
    return 0;
}
```
the `argc` parameter is an integer that represents the number of command-line arguments passed to the program, and `argv` is an array of strings that contains the actual arguments.


## Functions

Functions in C++ are blocks of code that perform a specific task. They are used to modularize code, improve code reusability, and simplify program structure.

- **Function Declaration**: `returnType functionName(parameters);`

    ```cpp
    int add(int a, int b);
    void printMessage(std::string message);
    ```
- **Function Definition**: `returnType functionName(parameters) { body }`

    ```cpp
    int add(int a, int b) {
        return a + b;
    }
    void printMessage(std::string message) {
        std::cout << message << std::endl;
    }
    ```
- **Function Call**: `functionName(arguments);`

    ```cpp
    int sum = add(3, 5);
    printMessage("Hello, World!");
    ```
- **Function Parameters**: Input values passed to a function when it is called.

    ```cpp
    int add(int a, int b) {
        return a + b;
    }
    ```
- **Return Statement**: Value returned by a function to the caller.

    ```cpp
    int add(int a, int b) {
        return a + b;
    }
    ```
- **Function Overloading**: Defining multiple functions with the same name but different parameters.

    ```cpp
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
    ```
- **Default Arguments**: Providing default values for function parameters.

    ```cpp
    void printMessage(std::string message, int count = 1) {
        for (int i = 0; i < count; i++) {
            std::cout << message << std::endl;
        }
    }
    ```
- **Function Prototypes**: Forward declaration of a function before its actual definition.

    ```cpp
    int add(int a, int b); // Function prototype
    int main() {
        int sum = add(3, 5);
        return 0;
    }
    int add(int a, int b) { // Function definition
        return a + b;
    }
    ```
- **Recursive Functions**: Functions that call themselves to solve a problem.

    ```cpp
    int factorial(int n) {
        if (n == 0) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }
    ```
- **Inline Functions**: Functions that are expanded in place at the call site to improve performance.

    ```cpp
    inline int add(int a, int b) {
        return a + b;
    }
    ```
- **Lambda Functions (C++11)**: Anonymous functions that can capture variables from their enclosing scope.

    ```cpp
    auto add = [](int a, int b) { return a + b; };
    int sum = add(3, 5);
    ```
- **Function Pointers**: Pointers that store the address of a function.

    ```cpp
    int add(int a, int b) {
        return a + b;
    }
    int (*ptr)(int, int) = add;
    int sum = ptr(3, 5);
    ```
- **Function Objects**: Objects that behave like functions by overloading the function call operator.

    ```cpp
    class Add {
    public:
        int operator()(int a, int b) {
            return a + b;
        }
    };
    Add add;
    int sum = add(3, 5);
    ```
- **Variadic Functions**: Functions that accept a variable number of arguments.

    ```cpp
    void printValues(int count, ...) {
        va_list args;
        va_start(args, count);
        for (int i = 0; i < count; i++) {
            int value = va_arg(args, int);
            std::cout << value << std::endl;
        }
        va_end(args);
    }

    printValues(3, 1, 2, 3);
    ```
- **Function Templates**: Generic functions that can operate on different data types.

    ```cpp
    template <typename T>
    T add(T a, T b) {
        return a + b;
    }
    int sum = add(3, 5);
    double total = add(3.14, 2.71);
    ```

## Structures and Classes

Structures and classes are user-defined data types in C++ that allow for the grouping of variables of different data types under a single name. They make it easier to manage and organize complex data by creating objects that have particular attributes and behaviors. The main difference between a structure and a class is their default access specifier: members of a structure are public by default, while members of a class are private.

### Structures

Structures in C++ are used to group related data items of different data types under a single name. They are defined using the `struct` keyword and can contain variables, functions, and constructors. To create an object of a structure, you use the structure name followed by the object name.

- **Structure Definition**: `struct structName { members };`

	```cpp
	struct Rectangle {
		int width;
		int height;
		int area() {
			return width * height;
		}
	};
	```

- **Structure Declaration**: `structName objectName;`

	```cpp
	Rectangle rect;
	rect.width = 5;
	rect.height = 3;
	int area = rect.area();
	```

- **Structure Initialization**: Initializing structure members when creating an object.

	```cpp
	Rectangle rect = {5, 3};
	int area = rect.area();
	```

- **Structure Pointers**: Using pointers to access structure members.

	```cpp
	Rectangle rect = {5, 3};
	Rectangle *ptr = &rect;
	int area = ptr->area();
	```

### Classes

Classes in C++ are used to create user-defined data types that encapsulate data and functions into a single entity. They are defined using the `class` keyword and can contain private, protected, and public members. To create an object of a class, you use the class name followed by the object name.

- **Class Definition**: `class className { members };`

	```cpp
	class student {
	public:
		std::string name;
		int age;
		void display() {
			std::cout << "Name: " << name << ", Age: " << age << std::endl;
		}
	};
	```

- **Class Declaration

	```cpp
	student s;
	s.name = "Alice";
	s.age = 20;
	s.display();
	```

- **Class Initialization**: Initializing class members when creating an object.

	```cpp
	student s = {"Alice", 20};
	s.display();
	```

##  Object-Oriented Programming

Object-oriented programming (OOP) is a programming paradigm that uses objects and classes to model real-world entities and concepts. It focuses on data abstraction, encapsulation, inheritance, and polymorphism to create modular and reusable code.

### Basics of OOP

- **Class**: A blueprint for creating objects.
- **Object**: An instance of a class.
- **Encapsulation**: Bundling data and methods that operate on the data within one unit (class).
- **Inheritance**: Mechanism by which one class can inherit traits from another class.
- **Polymorphism**: Ability to process objects differently based on their data type or class.
- **Abstraction**: Hiding complex implementation details and showing only the necessary features.


### Classes and Objects

Classes and objects are fundamental concepts in object-oriented programming that allow you to model real-world entities as software objects. A class is a blueprint for creating objects, while an object is an instance of a class that represents a specific entity.

#### Defining Classes and Objects
- **Class**: A blueprint for creating objects that defines data members and member functions.

    ```cpp
    class Rectangle {
    public:
        int width;
        int height;
        int area() {
            return width * height;
        }
    };
    ```
- **Object**: An instance of a class that represents a specific entity.

    ```cpp
    Rectangle rect;
    rect.width = 5;
    rect.height = 3;
    int area = rect.area();
    ```

#### Access Modifiers

Access modifiers in C++ control the visibility and accessibility of class members. They include public, private, and protected modifiers.

- **Public**: Members are accessible from outside the class.

    ```cpp
    class Rectangle {
    public:
        int width;
        int height;
        int area() {
            return width * height;
        }
    };
    ```
- **Private**: Members are accessible only from within the class.

    ```cpp
    class Rectangle {
    private:
        int width;
        int height;
    public:
        int area() {
            return width * height;
        }
    };
    ```
- **Protected**: Members are accessible from derived classes.

    ```cpp
    class Shape {
    protected:
        int width;
        int height;
    public:
        int area() {
            return width * height;
        }
    };
    class Rectangle : public Shape {
    public:
        void setDimensions(int w, int h) {
            width = w;
            height = h;
        }
    };
    ```

#### Member Functions

Member functions in C++ are functions that are defined inside a class and operate on class objects. They can access class data members and provide behavior to the class.

- **Member Function Definition**: `returnType functionName(parameters) { body }`

    ```cpp
    class Rectangle {
    public:
        int width;
        int height;
        int area() {
            return width * height;
        }
    };
    ```
- **Member Function Declaration**: `returnType functionName(parameters);`

    ```cpp
    class Rectangle {
    public:
        int width;
        int height;
        int area();
    };
    int Rectangle::area() {
        return width * height;
    }
    ```
- **Member Function Call**: `objectName.functionName(arguments);`

    ```cpp
    Rectangle rect;
    rect.width = 5;
    rect.height = 3;
    int area = rect.area();
    ```

#### Constructors and Destructors

Constructors and destructors in C++ are special member functions of a class that are used to initialize and destroy class objects. They are automatically called when an object is created and destroyed.

- **Constructor**: Special function called when an object is instantiated. No return type.

```cpp
class MyClass {
public:
    MyClass() { // Constructor
        // Initialization code
    }
};

- **Default Constructor**: Constructor with no parameters.

```cpp
class Dog {
public:
	Dog() : name("Unknown"), age(0) {} // Default constructor
	Dog(std::string n, int a) : name(n), age(a) {} // Parameterized constructor
};
```

- **Destructor**: Special function called when an object is destroyed. No parameters or return type.

```cpp
class MyClass {
public:
	~MyClass() { // Destructor
		// Cleanup code
	}
};
```

- **Default Destructor**: Destructor that is automatically generated if not defined.

```cpp
class MyClass {
public:
	~MyClass() = default; // Default destructor
};
```

- **Virtual Destructor**: Destructor that is declared as virtual in the base class to ensure proper cleanup in derived classes.

```cpp
class Base {
public:
	virtual ~Base() {} // Virtual destructor
};

class Derived : public Base {
public:
	~Derived() {} // Derived class destructor
};
```

- **Overloading Constructors**: Defining multiple constructors with different parameters.

```cpp
class Rectangle {
public:
	int width;
	int height;
	Rectangle() : width(0), height(0) {} // Default constructor
	Rectangle(int w, int h) : width(w), height(h) {} // Parameterized constructor
};
```

- **Member Initialization List**: Initializing class members in the constructor using the member initialization list.

```cpp
class Rectangle {
public:
	int width;
	int height;
	Rectangle(int w, int h) : width(w), height(h) {} // Member initialization list
};
```

#### Copy Constructor and Copy Assignment Operator

- **Copy Constructor**: Constructor that initializes an object as a copy of another object.

```cpp
class Rectangle {
public:
	int width;
	int height;
	Rectangle(const Rectangle& other) : width(other.width), height(other.height) {} // Copy constructor
};
```

- **Copy Assignment Operator**: Operator that assigns the value of one object to another object.

```cpp
class Rectangle {
public:
	int width;
	int height;
	Rectangle& operator=(const Rectangle& other) { // Copy assignment operator
		if (this != &other) {
			width = other.width;
			height = other.height;
		}
		return *this;
	}
};
```

## Rule of Zero, Rule of Three, Rule of Five

The Rule of Zero, Rule of Three, and Rule of Five are guidelines for managing resources in C++ classes. They help ensure proper resource management, prevent memory leaks, and avoid undefined behavior.

- **Rule of Zero**: Classes that do not manage resources should not define custom destructors, copy constructors, or copy assignment operators.

```cpp
class MyClass {
public:
	// No custom destructor, copy constructor, or copy assignment operator
};
```

- **Rule of Three**: Classes that manage resources should define custom destructors, copy constructors, and copy assignment operators.

```cpp
class MyClass {
public:
	MyClass() : data(new int) {}
	~MyClass() { delete data; }
	MyClass(const MyClass& other) : data(new int(*other.data)) {}
	MyClass& operator=(const MyClass& other) {
		if (this != &other) {
			*data = *other.data;
		}
		return *this;
	}
private:
	int* data;
};
```

- **Rule of Five**: Classes that manage resources should define custom destructors, copy constructors, copy assignment operators, move constructors, and move assignment operators.

```cpp
class MyClass {
public:
	MyClass() : data(new int) {}
	~MyClass() { delete data; }
	MyClass(const MyClass& other) : data(new int(*other.data)) {}
	MyClass& operator=(const MyClass& other) {
		if (this != &other) {
			*data = *other.data;
		}
		return *this;
	}
	MyClass(MyClass&& other) noexcept : data(other.data) {
		other.data = nullptr;
	}
	MyClass& operator=(MyClass&& other) noexcept {
		if (this != &other) {
			delete data;
			data = other.data;
			other.data = nullptr;
		}
		return *this;
	}
private:
	int* data;
};
```

### Encapsulation

Encapsulation is the concept of bundling data and functions that operate on that data within a single unit, such as a class. It helps to hide the internal implementation details of a class and expose only the necessary information and functionalities. In C++, you can use access specifiers like `public`, `private`, and `protected` to control the visibility and accessibility of class members.

- **Public Access Modifier**: Members are accessible from outside the class.

```cpp
class Rectangle {
public:
	int width;
	int height;
	int area() {
		return width * height;
	}
};
```

- **Private Access Modifier**: Members are accessible only from within the class.

```cpp
class Rectangle {
private:
	int width;
	int height;
public:
	int area() {
		return width * height;
	}
};
```

- **Protected Access Modifier**: Members are accessible from derived classes.

```cpp
class Shape {
protected:
	int width;
	int height;
public:
	int area() {
		return width * height;
	}
};

class Rectangle : public Shape {
public:
	void setDimensions(int w, int h) {
		width = w;
		height = h;
	}
};
```

### Inheritance

Inheritance is a mechanism in object-oriented programming that allows a class to inherit properties and behavior from another class. The class that inherits from another class is called a derived class, and the class that is inherited from is called a base class. In C++, you can use the `public`, `protected`, and `private` access specifiers to control the visibility of inherited members. Inheritance is achieved using the `class` keyword followed by a colon `:` and the access specifier.

- **Single Inheritance**: A derived class inherits from a single base class.

```cpp
class Animal {
public:
	void eat() {
		std::cout << "Eating..." << std::endl;
	}
};

class Dog : public Animal {
public:
	void bark() {
		std::cout << "Barking..." << std::endl;
	}
};

Dog dog;
dog.eat();
dog.bark();
```

- **Multilevel Inheritance**: A derived class inherits from another derived class.

```cpp
class Animal {
public:
	void eat() {
		std::cout << "Eating..." << std::endl;
	}
};

class Dog : public Animal {
public:
	void bark() {
		std::cout << "Barking..." << std::endl;
	}
};

class Labrador : public Dog {
public:
	void play() {
		std::cout << "Playing..." << std::endl;
	}
};

Labrador lab;
lab.eat();
lab.bark();
lab.play();
```

- **Hierarchical Inheritance**: Multiple derived classes inherit from a single base class.

```cpp
class Animal {
public:
	void eat() {
		std::cout << "Eating..." << std::endl;
	}
};

class Dog : public Animal {
public:
	void bark() {
		std::cout << "Barking..." << std::endl;
	}
};

class Cat : public Animal {
public:
	void meow() {
		std::cout << "Meowing..." << std::endl;
	}
};

Dog dog;
dog.eat();
dog.bark();
```

- **Multiple Inheritance**: A derived class inherits from multiple base classes.

```cpp
class Animal {
public:
	void eat() {
		std::cout << "Eating..." << std::endl;
	}
};

class Pet {
public:
	void play() {
		std::cout << "Playing..." << std::endl;
	}
};

class Dog : public Animal, public Pet {
public:
	void bark() {
		std::cout << "Barking..." << std::endl;
	}
};

Dog dog;
dog.eat();
dog.play();
dog.bark();
```

- **Hybrid Inheritance**: Combination of multiple inheritance types.

```cpp
class Animal {
public:
	void eat() {
		std::cout << "Eating..." << std::endl;
	}
};

class Pet {
public:
	void play() {
		std::cout << "Playing..." << std::endl;
	}
};

class Dog : public Animal, public Pet {
public:
	void bark() {
		std::cout << "Barking..." << std::endl;
	}
};

class Labrador : public Dog {
public:
	void swim() {
		std::cout << "Swimming..." << std::endl;
	}
};

Labrador lab;
lab.eat();
lab.play();
lab.bark();
```

- **Virtual Inheritance**: Prevents multiple instances of a base class in a diamond-shaped inheritance hierarchy.

```cpp
class Animal {
public:
	void eat() {
		std::cout << "Eating..." << std::endl;
	}
};

class Pet : virtual public Animal {
public:
	void play() {
		std::cout << "Playing..." << std::endl;
	}
};

class Dog : virtual public Animal, public Pet {
public:
	void bark() {
		std::cout << "Barking..." << std::endl;
	}
};

```

#### Agrergation

Aggregation is a type of association in which one class contains an object of another class. It represents a "has-a" relationship between classes, where one class has a member that is an object of another class. Aggregation is used to model relationships between classes that are not part of the same inheritance hierarchy.

- **Aggregation**: A class contains an object of another class.

```cpp
class Address {
public:
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
};

class Person {
public:
	std::string name;
	Address address;
};
```

- **Composition**: A class contains an object of another class and is responsible for its creation and destruction.

```cpp
class Address {
public:
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
};

class Person {
public:
	std::string name;
	Address* address;
	Person(Address* addr) : address(addr) {}
	~Person() {
		delete address;
	}
};
```

- **Association**: A relationship between classes where one class is related to another class.

```cpp
class Person {
public:
	std::string name;
};

class Address {
public:
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	Person* person;
};
```

- **Dependency**: A relationship between classes where one class depends on another class.

```cpp
class Logger {
public:
	void log(std::string message) {
		std::cout << message << std::endl;
	}
};

class Service {
public:
	void doSomething() {
		Logger logger;
		logger.log("Doing something...");
	}
};
```

### Polymorphism

Polymorphism is the ability of objects to take on different forms based on their data type or class. It allows you to process objects differently based on their class or data type. In C++, polymorphism is achieved through virtual functions, function overloading, and function overriding.

- **Function Overloading**: Defining multiple functions with the same name but different parameters.

```cpp
class Math {
public:
	int add(int a, int b) {
		return a + b;
	}
	double add(double a, double b) {
		return a + b;
	}
};
```

- **Function Overriding**: Redefining a base class function in a derived class.

```cpp
class Animal {
public:
	virtual void speak() {
		std::cout << "Animal speaks..." << std::endl;
	}
};

class Dog : public Animal {
public:
	void speak() override {
		std::cout << "Dog barks..." << std::endl;
	}
};

class Cat : public Animal {
public:
	void speak() override {
		std::cout << "Cat meows..." << std::endl;
	}
};

Animal* animal = new Dog();
animal->speak();

animal = new Cat();
animal->speak();
```

- **Virtual Functions**: Functions that are declared as virtual in the base class and can be overridden in derived classes.

```cpp
class Animal {
public:
	virtual void speak() {
		std::cout << "Animal speaks..." << std::endl;
	}
};

class Dog : public Animal {
public:
	void speak() override {
		std::cout << "Dog barks..." << std::endl;
	}
};

class Cat : public Animal {
public:
	void speak() override {
		std::cout << "Cat meows..." << std::endl;
	}
};

Animal* animal = new Dog();
animal->speak();

animal = new Cat();
animal->speak();
```

output:
```
Dog barks...
Cat meows...
```

### Abstraction

Abstraction is the process of hiding complex implementation details and showing only the necessary features of an object. It allows you to focus on what an object does rather than how it does it. In C++, you can achieve abstraction through classes, access specifiers, and interfaces.

- **Abstract Class**: A class that cannot
be instantiated and is used as a base class for other classes.

```cpp
class Shape {
public:
	virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
	void draw() override {
		std::cout << "Drawing a circle..." << std::endl;
	}
};

class Rectangle : public Shape {
public:
	void draw() override {
		std::cout << "Drawing a rectangle..." << std::endl;
	}
};
```

- **Interface**: A class that contains only pure virtual functions and no data members.

```cpp
class Drawable {
public:
	virtual void draw() = 0; // Pure virtual function
};

class Circle : public Drawable {
public:
	void draw() override {
		std::cout << "Drawing a circle..." << std::endl;
	}
};

class Rectangle : public Drawable {
public:
	void draw() override {
		std::cout << "Drawing a rectangle..." << std::endl;
	}
};

void drawShapes(Drawable* shapes[], int count) {
	for (int i = 0; i < count; i++) {
		shapes[i]->draw();
	}
}

Circle circle;
Rectangle rectangle;

Drawable* shapes[] = {&circle, &rectangle};
drawShapes(shapes, 2);
```

output:
```
Drawing a circle...
Drawing a rectangle...
```

## Standard Library Components

The C++ Standard Library provides a collection of classes, functions, and algorithms that are part of the C++ language specification. It includes containers, iterators, algorithms, and utilities that help you write efficient and reusable code.

### I/O Streams

I/O streams in C++ are used to read and write data from and to different sources, such as the console, files, and network sockets. They provide a high-level interface for input and output operations and support various data types.

- Header: `#include <iostream>`
	- **Standard Streams**: `std::cin`, `std::cout`, `std::cerr`, `std::clog`

	```cpp
	int x;
	std::cin >> x;
	std::cout << "Value: " << x << std::endl;
	std::cerr << "Error message" << std::endl;
	std::clog << "Log message" << std::endl;
	```

	- **Formatted Output**: `std::setw`, `std::setprecision`, `std::fixed`, `std::scientific`

	```cpp
	#include <iomanip>
	std::cout << std::setw(10) << std::setfill('*') << 42 << std::endl;
	std::cout << std::setprecision(2) << std::fixed << 3.14159 << std::endl;
	```

- Header: `#include <fstream>`
	- **File Streams**: `std::ifstream`, `std::ofstream`, `std::fstream`

	```cpp
	std::ofstream file("data.txt");
	file << "Hello, World!" << std::endl;
	file.close();

	std::ifstream input("data.txt");
	std::string line;
	while (std::getline(input, line)) {
		std::cout << line << std::endl;
	}
	input.close();
	```

- Header: `#include <sstream>`
	- **String Streams**: `std::istringstream`, `std::ostringstream`, `std::stringstream`

	```cpp
	std::stringstream ss;
	ss << "Hello, " << "World!";
	std::string message = ss.str();
	std::cout << message << std::endl;
	```

### Containers

Containers in C++ are data structures that store and organize data elements. They provide different ways to access, insert, and remove elements and are used to manage collections of objects efficiently.

##### Vector

A vector is a dynamic array that can grow and shrink in size. It provides random access to elements and supports efficient insertion and deletion at the end. Vectors are part of the Standard Template Library (STL) and are defined in the `<vector>` header.


```cpp
#include <iostream>
#include <vector>
#include <algorithm> // For std::sort and std::reverse

int main() {
    // 1. Initialization
    std::vector<int> vec1;                          // Empty vector
    std::vector<int> vec2(5, 10);                   // Vector of size 5, all elements initialized to 10
    std::vector<int> vec3 = {1, 2, 3, 4, 5};        // List initialization

    // 2. Adding elements
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);

    // 3. Accessing elements
    std::cout << "vec1[0]: " << vec1[0] << std::endl;  // Using operator[]
    std::cout << "vec1 at index 1: " << vec1.at(1) << std::endl; // Using at() method

    // 4. Iterating through the vector
    std::cout << "Elements in vec1: ";
    for (int i = 0; i < vec1.size(); ++i) {
        std::cout << vec1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Elements in vec2: ";
    for (const auto& elem : vec2) {  // Using range-based for loop
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // 5. Common operations
    vec3.push_back(6); // Add element at the end
    vec3.pop_back();   // Remove last element
    vec3.insert(vec3.begin() + 2, 99); // Insert 99 at index 2
    vec3.erase(vec3.begin() + 2); // Erase element at index 2

    std::sort(vec3.begin(), vec3.end()); // Sort the vector
    std::reverse(vec3.begin(), vec3.end()); // Reverse the vector

    std::cout << "Elements in vec3 after operations: ";
    for (const auto& elem : vec3) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // 6. Clearing and resizing the vector
    vec3.clear(); // Remove all elements
    std::cout << "Size of vec3 after clear: " << vec3.size() << std::endl;

    vec3.resize(5, 7); // Resize to 5 elements, new elements initialized to 7
    std::cout << "Elements in vec3 after resize: ";
    for (const auto& elem : vec3) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
```
- [Member Functions](https://www.cplusplus.com/reference/vector/vector/)

##### List

A list is a doubly linked list that allows for efficient insertion and deletion of elements at any position. It provides bidirectional iterators and supports constant time insertion and deletion operations. Lists are part of the Standard Template Library (STL) and are defined in the `<list>` header.

```cpp
#include <iostream>
#include <list>

int main() {
	// 1. Initialization
	std::list<int> list1;                          // Empty list
	std::list<int> list2(5, 10);                   // List of size 5, all elements initialized to 10
	std::list<int> list3 = {1, 2, 3, 4, 5};        // List initialization

	// 2. Adding elements
	list1.push_back(1);
	list1.push_front(2);
	list1.insert(list1.begin(), 3);

	// 3. Accessing elements
	std::cout << "list1 front: " << list1.front() << std::endl;
	std::cout << "list1 back: " << list1.back() << std::endl;

	// 4. Iterating through the list
	std::cout << "Elements in list1: ";
	for (const auto& elem : list1) {
		std::cout << elem << " ";
	}
	std::cout << std::endl;

	// 5. Common operations
	list1.pop_back(); // Remove last element
	list1.pop_front(); // Remove first element
	list1.erase(list1.begin()); // Erase element at the beginning

	list1.reverse(); // Reverse the list
	list1.sort(); // Sort the list

	std::cout << "Elements in list1 after operations: ";
	for (const auto& elem : list1) {
		std::cout << elem << " ";
	}
	std::cout << std::endl;

	// 6. Clearing the list
	list1.clear(); // Remove all elements
	std::cout << "Size of list1 after clear: " << list1.size() << std::endl;

	return 0;
}
```

- [Member Functions](https://www.cplusplus.com/reference/list/list/)







## Memory Model

The memory model in C++ defines how the program stores and accesses data in computer memory. It consists of different segments, such as the Stack, Heap, Data and Code segments. Each of these segments is used to store different types of data and has specific characteristics.

### Stack

- **LIFO Data Structure**: Last In, First Out.
- **Automatic Memory Management**: Memory is allocated and deallocated automatically.
- **Local Variables**: Function parameters and local variables are stored on the stack.
- **Fixed Size**: Stack size is limited and determined at compile time.
- **Faster Access**: Faster access compared to the heap.

```cpp
void foo() {
    int x = 42; // Stored on the stack
}
```

### Heap

- **Dynamic Memory Allocation**: Memory is allocated and deallocated manually.
- **Unlimited Size**: Heap size is limited by available memory.
- **Slower Access**: Slower access compared to the stack.
- **Data Structures**: Objects, arrays, and data structures are stored on the heap.

```cpp
int *ptr = new int; // Allocated on the heap
delete ptr; // Deallocated manually
```

### Data Segment

- **Global and Static Variables**: Global variables and static variables are stored in the data segment.
- **Initialized Data**: Data with static or constant values is stored in this segment.
- **Read-Only Memory**: Data in this segment is read-only and cannot be modified.

```cpp
int globalVar = 42; // Stored in the data segment
static int staticVar = 42; // Stored in the data segment
```

### Code Segment

- **Executable Code**: Machine instructions and program code are stored in the code segment.
- **Read-Only Memory**: Code in this segment is read-only and cannot be modified.
- **Program Instructions**: Instructions for the program execution are stored in this segment.

```cpp
int main() {
    return 0; // Executable code in the code segment
}
```

## Memory Management

Memory management in C++ is the process of allocating and deallocating memory for program data. It involves managing memory segments, dynamic memory allocation, and avoiding memory leaks and memory corruption.

### Static Memory Allocation

- **Compile-Time Allocation**: Memory is allocated at compile time.
- **Automatic Variables**: Local variables and function parameters are allocated on the stack.
- **Fixed Size**: Stack size is determined at compile time.

```cpp
void foo() {
    int x = 42; // Allocated on the stack
}
```

### Dynamic Memory Allocation

- **Run-Time Allocation**: Memory is allocated at run time using the heap.
- **Manual Management**: Memory must be deallocated manually to avoid memory leaks.

```cpp
int *ptr = new int; // Allocated on the heap
delete ptr; // Deallocated manually
```

## Pointers and References

Pointers and references are used in C++ to store memory addresses and access data indirectly. They are essential for dynamic memory allocation, function calls, and efficient data manipulation.

**Pointers**: is a variable that stores the memory address of another variable. It allows direct access to the memory location of a variable.

**References**: is an alias for a variable that provides an alternative name for the same memory location. It allows indirect access to the variable.

### Basics

- **Declaration**: `type *ptr;`
- **Initialization**: `int *ptr = &variable;`
- **Dereferencing**: `*ptr` retrieves the value pointed to by `ptr`.
- **Address-of Operator**: `&variable` gets the memory address of `variable`.

### Pointer Arithmetic

- **Increment/Decrement**: `ptr++`, `ptr--`.
- **Arithmetic Operations**: `ptr + n`, `ptr - n`.

### Dynamic Memory Allocation

- **Allocation**: `type *ptr = new type;`
- **Deallocation**: `delete ptr;`
- **Array Allocation**: `type *arr = new type[size];`
- **Array Deallocation**: `delete[] arr;`

### Pointer and Arrays

- **Array Name as Pointer**: Arrays decay into pointers to their first element.
- **Accessing Array Elements**: `*(arr + i)` or `arr[i]`.

### Pointers and Functions

- **Passing Pointers to Functions**: `void foo(int *ptr)`.
- **Returning Pointers from Functions**: `int* foo()`.
- **Pointer to Functions**: `returnType (*ptrName)(parameters);`.

### Pointer and Classes

- **Pointer to Object**: `ClassName *ptr = new ClassName;`
- **Accessing Members**: `ptr->member` or `(*ptr).member`.

### Pointer to Pointer (Double Pointer)

- **Declaration**: `type **ptr;`
- **Initialization**: `type **ptr = &anotherPtr;`
- **Use**: `**ptr` retrieves the value pointed to by another pointer.

### Null Pointers

- **Null Pointer**: `nullptr`.
- **Checking Null Pointers**: `if (ptr == nullptr)`.

### Pointer Casting

- **Casting Pointers**: `type *ptr = reinterpret_cast<type*>(anotherPtr);`

### Pointer and Const

- **Constant Pointers**: `const type *ptr;` or `type *const ptr;`.
- **Pointer to Constant**: `const int *ptr;` (value is constant, pointer is not) or `int *const ptr;` (pointer is constant, value is not).

### Smart Pointers (C++11)

- **Unique Pointer**: `std::unique_ptr<type> ptr;`.
- **Shared Pointer**: `std::shared_ptr<type> ptr;`.
- **Weak Pointer**: `std::weak_ptr<type> ptr;`.

## Structuring Codebase

Structuring the codebase in C++ involves organizing code into modules, files, and directories to improve readability, maintainability, and reusability. It includes using header files, namespaces, classes, and libraries effectively.

### Header Files

Separating declarations and definitions in C++ is a common practice to improve code organization and modularity. Header files contain declarations of classes, functions, and variables, while source files contain their definitions.

- **Declaration and Definition Separation**: Header files contain declarations, while source files contain definitions.
- **Include Guards**: Prevent multiple inclusions of the same header file.
- **Forward Declarations**: Declare classes and functions before using them.

```cpp
// header.h
#ifndef HEADER_H
#define HEADER_H

void foo(); // Function declaration

#endif
```

### Namespaces

Namespaces in C++ are used to group related code into a named scope. They help avoid naming conflicts and improve code organization by providing a hierarchical structure.

- **Namespace Declaration**: `namespace name { /* code */ }`
- **Namespace Usage**: `using namespace name;` or `name::identifier`

```cpp
namespace math {
    int add(int a, int b) { return a + b; }
}

int main() {
    int sum = math::add(5, 3);
    return 0;
}
```

`using namespace math;` allows using the `add` function without the `math::` prefix.
```cpp
using namespace math;
int sum = add(5, 3);
```

### Scope

Scope in C++ defines the visibility and lifetime of variables and functions in a program. It determines where a variable or function can be accessed and how long it exists during program execution.

- **Global Scope**: Variables declared outside functions have global scope.
- **Local Scope**: Variables declared inside functions have local scope.
- **Block Scope**: Variables declared inside blocks have block scope.
- **Namespace Scope**: Variables declared inside namespaces have namespace scope.
- **Class Scope**: Variables declared inside classes have class scope.

```cpp
int globalVar = 42; // Global scope

void foo() {
    int localVar = 42; // Local scope
    {
        int blockVar = 42; // Block scope
    }
}

namespace math {
    int pi = 3.14159; // Namespace scope
}

class Circle {
public:
    double radius; // Class scope
};
```

### Forward Declarations

Forward declarations in C++ are used to declare classes, functions, and variables before they are defined. They allow using entities before their definitions are available.

- **Class Forward Declaration**: `class ClassName;`
- **Function Forward Declaration**: `returnType functionName(parameters);`

```cpp
class Circle; // Forward declaration of class Circle

void foo(); // Forward declaration of function foo

class Circle {
public:
    double radius;
    double area();
};

double Circle::area() {
    return 3.14159 * radius * radius;
}
```


## Input and Output

Input and output operations in C++ are performed using the `iostream` library, which provides classes and objects for reading from and writing to the console, files, and other input/output devices.

### Output (Printing)

- **Standard Output Stream**: `std::cout`
  - **Description**: Used for printing output to the console.
  - **Example**:
    ```cpp
    #include <iostream>
    int main() {
        std::cout << "Hello, world!" << std::endl;
        return 0;
    }
    ```
- **Standard Error Stream**: `std::cerr`
    - **Description**: Used for printing error messages to the console.
    - **Example**:
        ```cpp
        #include <iostream>
        int main() {
            std::cerr << "Error: File not found!" << std::endl;
            return 1;
        }
        ```
- **Standard Log Stream**: `std::clog`
    - **Description**: Used for printing log messages to the console.
    - **Example**:
        ```cpp
        #include <iostream>
        int main() {
            std::clog << "Log: Program started" << std::endl;
            return 0;
        }
        ```
- **Formatting Output**: `std::setw`, `std::setprecision`, `std::fixed`, `std::scientific`
    - **Description**: Used to format the output of numeric values.
    - **Example**:
        ```cpp
        #include <iostream>
        #include <iomanip>
        int main() {
            double pi = 3.14159;
            std::cout << std::fixed << std::setprecision(2) << pi << std::endl;
            return 0;
        }
        ```
- **Output Manipulators**: `std::endl`, `std::setw`, `std::setfill`, `std::setprecision`
    - **Description**: Used to control the formatting of output.
    - **Example**:
        ```cpp
        #include <iostream>
        #include <iomanip>
        int main() {
            int x = 42;
            std::cout << std::setw(10) << std::setfill('*') << x << std::endl;
            return 0;
        }
        ```
### Input (Reading)

- **Standard Input Stream**: `std::cin`
    - **Description**: Used for reading input from the console.
    - **Example**:
        ```cpp
        #include <iostream>
        int main() {
            int number;
            std::cout << "Enter a number: ";
            std::cin >> number;
            std::cout << "You entered: " << number << std::endl;
            return 0;
        }
        ```

- **Reading Strings**: `std::getline`
    - **Description**: Used to read a line of text from the console.
    - **Example**:
        ```cpp
        #include <iostream>
        #include <string>
        int main() {
            std::string name;
            std::cout << "Enter your name: ";
            std::getline(std::cin, name);
            std::cout << "Hello, " << name << "!" << std::endl;
            return 0;
        }
        ```
- **Input Validation**: `std::cin.fail()`, `std::cin.clear()`, `std::cin.ignore()`
    - **Description**: Used to handle input errors and clear the input buffer.
    - **Example**:
        ```cpp
        #include <iostream>
        int main() {
            int number;
            while (true) {
                std::cout << "Enter a number: ";
                std::cin >> number;
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid input. Please try again." << std::endl;
                } else {
                    std::cout << "You entered: " << number << std::endl;
                    break;
                }
            }
            return 0;
        }
        ```


## File Handling

File handling in C++ is performed using the `fstream` library, which provides classes and objects for reading from and writing to files. The library includes the `ifstream`, `ofstream`, and `fstream` classes for input, output, and input/output operations, respectively.

### Reading from Files

- **Reading from a File**: `std::ifstream`
    - **Description**: Used to read data from a file.
    - **Example**:
        ```cpp
        #include <iostream>
        #include <fstream>
        int main() {
            std::ifstream file("data.txt");
            if (file.is_open()) {
                std::string line;
                while (std::getline(file, line)) {
                    std::cout << line << std::endl;
                }
                file.close();
            } else {
                std::cerr << "Error: Unable to open file." << std::endl;
            }
            return 0;
        }
        ```
### Writing to Files

- **Writing to a File**: `std::ofstream`
    - **Description**: Used to write data to a file.
    - **Example**:
        ```cpp
        #include <iostream>
        #include <fstream>
        int main() {
            std::ofstream file("output.txt");
            if (file.is_open()) {
                file << "Hello, world!" << std::endl;
                file.close();
            } else {
                std::cerr << "Error: Unable to open file." << std::endl;
            }
            return 0;
        }
        ```
### Appending to Files

- **Appending to a File**: `std::ofstream` with `std::ios::app`
    - **Description**: Used to append data to an existing file.
    - **Example**:
        ```cpp
        #include <iostream>
        #include <fstream>
        int main() {
            std::ofstream file("output.txt", std::ios::app);
            if (file.is_open()) {
                file << "Hello, world!" << std::endl;
                file.close();
            } else {
                std::cerr << "Error: Unable to open file." << std::endl;
            }
            return 0;
        }
        ```
### Binary Files

- **Reading/Writing Binary Files**: `std::ios::binary`
    - **Description**: Used to read/write binary data to/from a file.
    - **Example**:
        ```cpp
        #include <iostream>
        #include <fstream>
        int main() {
            std::ofstream file("data.bin", std::ios::binary);
            if (file.is_open()) {
                int data[] = {1, 2, 3, 4, 5};
                file.write(reinterpret_cast<char*>(data), sizeof(data));
                file.close();
            } else {
                std::cerr << "Error: Unable to open file." << std::endl;
            }
            return 0;
        }
        ```
### Error Handling

- **Checking File Status**: `is_open()`, `good()`, `fail()`, `bad()`
    - **Description**: Used to check the status of file operations.
    - **Example**:
        ```cpp
        #include <iostream>
        #include <fstream>
        int main() {
            std::ifstream file("data.txt");
            if (file.is_open()) {
                std::cout << "File opened successfully." << std::endl;
                file.close();
            } else {
                std::cerr << "Error: Unable to open file." << std::endl;
            }
            return 0;
        }
        ```
### File Positioning

- **Seeking in a File**: `seekg`, `seekp`, `tellg`, `tellp`
    - **Description**: Used to move the file pointer to a specific position.
    - **Example**:
        ```cpp
        #include <iostream>
        #include <fstream>
        int main() {
            std::ifstream file("data.txt");
            if (file.is_open()) {
                file.seekg(5, std::ios::beg);
                std::string line;
                std::getline(file, line);
                std::cout << "Line: " << line << std::endl;
                file.close();
            } else {
                std::cerr << "Error: Unable to open file." << std::endl;
            }
            return 0;
        }
        ```
### File Streams

- **File Streams**: `std::ifstream`, `std::ofstream`, `std::fstream`
    - **Description**: Used for input, output, and input/output file operations.
    - **Example**:
        ```cpp
        #include <iostream>
        #include <fstream>
        int main() {
            std::fstream file("data.txt", std::ios::in | std::ios::out);
            if (file.is_open()) {
                std::string line;
                while (std::getline(file, line)) {
                    std::cout << line << std::endl;
                }
                file.close();
            } else {
                std::cerr << "Error: Unable to open file." << std::endl;
            }
            return 0;
        }
        ```


## Data Structures

Data structures in C++ are used to store and organize data in memory. They include arrays, vectors, linked lists, stacks, queues, trees, and graphs, among others. Data structures provide efficient ways to access, insert, delete, and manipulate data.

### Arrays

- **Fixed-Size Collection**: `int arr[5];`
- **Accessing Elements**: `arr[index]`
- **Iterating Over Elements**: `for (int i = 0; i < size; i++)`
- **Multidimensional Arrays**: `int matrix[3][3];`

```cpp
#include <iostream>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}
```

### Strings

- **Character Array**: `char str[] = "Hello";`
- **String Class**: `std::string str = "Hello";`
- **String Operations**: `str.length()`, `str.find()`, `str.substr()`

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    std::cout << "Length: " << str.length() << std::endl;
    std::cout << "Substring: " << str.substr(0, 5) << std::endl;
    return 0;
}
```

### Vectors

- **Dynamic Array**: `std::vector<int> vec;`
- **Adding Elements**: `vec.push_back(value);`
- **Accessing Elements**: `vec[index]`
- **Iterating Over Elements**: `for (int i = 0; i < vec.size(); i++)`

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << std::endl;
    }
    return 0;
}
```

### Linked Lists

- **Dynamic Collection of Nodes**: `struct Node { int data; Node* next; };`
- **Singly Linked List**: `Node* head = nullptr;`
- **Doubly Linked List**: `struct Node { int data; Node* prev; Node* next; };`

```cpp
#include <iostream>

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = nullptr;
    Node* node1 = new Node{1, nullptr};
    Node* node2 = new Node{2, nullptr};
    head = node1;
    node1->next = node2;
    std::cout << head->data << std::endl;
    std::cout << head->next->data << std::endl;
    return 0;
}
```

### Stacks

- **LIFO Data Structure**: Last In, First Out.
- **Operations**: `push()`, `pop()`, `top()`
- **Implementation**: Using arrays or linked lists.

```cpp
#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    while (!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }
    return 0;
}
```

### Queues

- **FIFO Data Structure**: First In, First Out.
- **Operations**: `push()`, `pop()`, `front()`, `back()`
- **Implementation**: Using arrays or linked lists.

```cpp
#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    while (!q.empty()) {
        std::cout << q.front() << std::endl;
        q.pop();
    }
    return 0;
}
```

### Trees

- **Hierarchical Data Structure**: Nodes connected by edges.
- **Binary Tree**: Each node has at most two children.
- **Binary Search Tree**: Left child < parent < right child.

```cpp
#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
};

int main() {
    Node* root = new Node{1, nullptr, nullptr};
    Node* left = new Node{2, nullptr, nullptr};
    Node* right = new Node{3, nullptr, nullptr};
    root->left = left;
    root->right = right;
    std::cout << root->data << std::endl;
    std::cout << root->left->data << std::endl;
    std::cout << root->right->data << std::endl;
    return 0;
}
```

### Graphs

- **Non-Linear Data Structure**: Vertices connected by edges.
- **Directed Graph**: Edges have a direction.
- **Undirected Graph**: Edges have no direction.

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> graph = {
        {0, 1, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {0, 1, 1, 0}
    };
    for (int i = 0; i < graph.size(); i++) {
        for (int j = 0; j < graph[i].size(); j++) {
            std::cout << graph[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
```

## Algorithms

Algorithms in C++ are step-by-step procedures for solving problems or performing tasks. They include searching, sorting, graph traversal, and other common operations. C++ provides standard algorithms in the `<algorithm>` header and data structures in the `<vector>`, `<list>`, and `<map>` headers.

### Searching Algorithms

- **Linear Search**: `std::find()`
- **Binary Search**: `std::binary_search()`
- **Search in Sorted Containers**: `std::lower_bound()`, `std::upper_bound()`

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    auto it = std::find(vec.begin(), vec.end(), 3);
    if (it != vec.end()) {
        std::cout << "Element found at index: " << it - vec.begin() << std::endl;
    } else {
        std::cout << "Element not found." << std::endl;
    }
    return 0;
}
```

### Sorting Algorithms

- **Sort Range**: `std::sort()`
- **Partial Sort**: `std::partial_sort()`
- **Heap Operations**: `std::make_heap()`, `std::push_heap()`, `std::pop_heap()`

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    std::sort(vec.begin(), vec.end());
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
```


### Graph Algorithms

- **Depth-First Search (DFS)**: Recursive traversal of a graph.
- **Breadth-First Search (BFS)**: Iterative traversal of a graph.
- **Shortest Path Algorithms**: Dijkstra's, Bellman-Ford, Floyd
- **Minimum Spanning Tree**: Prim's, Kruskal's

```cpp
#include <iostream>
#include <vector>
#include <queue>

void bfs(std::vector<std::vector<int>>& graph, int start) {
    std::vector<bool> visited(graph.size(), false);
    std::queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        std::cout << node << " ";
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

int main() {
    std::vector<std::vector<int>> graph = {
        {1, 2},
        {0, 2, 3},
        {0, 1, 3},
        {1, 2}
    };
    bfs(graph, 0);
    std::cout << std::endl;
    return 0;
}
```

### Dynamic Programming

- **Memoization**: Caching results of subproblems.
- **Tabulation**: Bottom-up approach to dynamic programming.
- **Optimal Substructure**: Decomposing a problem into subproblems.

```cpp
#include <iostream>
#include <vector>

int fibonacci(int n) {
    std::vector<int> dp(n + 1, 0);
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main() {
    int n = 10;
    std::cout << "Fibonacci(" << n << ") = " << fibonacci(n) << std::endl;
    return 0;
}
```

### Divide and Conquer

- **Divide**: Break problem into smaller subproblems.
- **Conquer**: Solve subproblems recursively.
- **Combine**: Merge solutions of subproblems.

```cpp
#include <iostream>
#include <vector>

int binarySearch(std::vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 3;
    std::cout << "Index: " << binarySearch(nums, target) << std::endl;
    return 0;
}
```

## Exception Handling

Exception handling in C++ is a mechanism for handling runtime errors and abnormal conditions. It allows you to catch and handle exceptions, propagate errors, and clean up resources in case of failures.

### Basics

- **Throwing Exceptions**: `throw exception;`
- **Catching Exceptions**: `try { /* code */ } catch (ExceptionType e) { /* handler */ }`
- **Rethrowing Exceptions**: `throw;`

```cpp
#include <iostream>

int divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero!";
    }
    return a / b;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers for division: ";
    std::cin >> num1 >> num2;

    try {
        int result = divide(num1, num2);
        std::cout << "The result is: " << result << std::endl;
    } catch (const char* msg) {
        std::cerr << "Error: " << msg << std::endl;
    }

    return 0;
}
```

### Standard Exceptions

C++ provides a set of standard exceptions that can be used to handle common error conditions. These exceptions are defined in the `<stdexcept>` header.

- **std::exception**: Base class for all standard exceptions.
- **std::runtime_error**: Exception for runtime errors.
- **std::logic_error**: Exception for logical errors.
- **std::invalid_argument**: Exception for invalid arguments.
- **std::out_of_range**: Exception for out-of-range errors.

```cpp
#include <iostream>
#include <stdexcept>

int divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero!");
    }
    return a / b;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers for division: ";
    std::cin >> num1 >> num2;

    try {
        int result = divide(num1, num2);
        std::cout << "The result is: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
```

### Custom Exceptions

You can define custom exception classes by deriving from `std::exception` or other standard exception classes.

```cpp
#include <iostream>

class CustomException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Custom exception occurred!";
    }
};

int divide(int a, int b) {
    if (b == 0) {
        throw CustomException();
    }
    return a / b;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers for division: ";
    std::cin >> num1 >> num2;

    try {
        int result = divide(num1, num2);
        std::cout << "The result is: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
```

### Access Violations

Access violations, such as null pointer dereferences and out-of-bounds memory access, can lead to runtime errors and crashes. You can use exception handling to catch and handle access violations in C++.

- **Null Pointer Dereference**: Accessing a null pointer.
- **Out-of-Bounds Access**: Accessing memory outside the bounds of an array.
- **Reading/Writing to freed memory**: Accessing memory that has been deallocated.

```cpp
#include <iostream>

int main() {
    int* ptr = nullptr;

    try {
        *ptr = 42;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
```


## Code Splitting

Code splitting in C++ involves dividing a program into multiple files and modules to improve code organization, readability, and maintainability. It includes using header files, source files, and libraries to separate declarations and definitions.

### Header Files

Header files in C++ contain declarations of classes, functions, and variables that are used in multiple source files. They are included in source files to provide information about the entities defined in the program.

- **Declaration**: Contains function prototypes, class declarations, and global variables.
- **Include Guards**: Prevent multiple inclusions of the same header file.
- **Forward Declarations**: Declare classes and functions before using them.

```cpp
// header.h
#ifndef HEADER_H
#define HEADER_H

void foo(); // Function declaration

#endif
```

### Source Files

Source files contain the implementation of functions and classes declared in header files. They are compiled separately and linked together to create an executable file.

- **Definition**: Contains function implementations and class member definitions.
- **Include Header Files**: Include necessary header files for declarations.

```cpp
// source.cpp
#include "header.h"

void foo() {
    // Function implementation
}
```

### Separate Compilation

C++ programs can be compiled in multiple steps using separate compilation to speed up the build process and manage dependencies.

```bash
# Compile each source file into an object file
g++ -c main.cpp -o main.o
g++ -c example.cpp -o example.o

# Link object files together to create the executable
g++ main.o example.o -o my_program
```


## Compilers

A compiler is a software tool that translates source code written in a high-level programming language into machine code that can be executed by a computer. C++ compilers are used to compile C++ programs and generate executable files that can run on various platforms.

### Popular C++ Compilers

- **GCC (GNU Compiler Collection)**: A free and open-source compiler that supports multiple programming languages, including C++.
- **Clang**: A compiler front end for the C, C++, and Objective-C programming languages.
- **Microsoft Visual C++**: A compiler provided by Microsoft for Windows development.
- **Intel C++ Compiler**: A commercial compiler from Intel that supports C++ and other languages.

### Compilation Process

- **Preprocessing**: The preprocessor processes the source code and handles directives such as `#include` and `#define`.
- **Compilation**: The compiler translates the preprocessed code into object code (machine code).
- **Linking**: The linker combines the object code with libraries to create an executable file.
- **Loading**: The operating system loads the executable file into memory and starts execution.

### Compiler Flags

- **Optimization Flags**: `-O0`, `-O1`, `-O2`, `-O3`
- **Debugging Flags**: `-g`, `-ggdb`, `-g3`
- **Warning Flags**: `-Wall`, `-Wextra`, `-Werror`
- **Include Directories**: `-I<path>`
- **Library Directories**: `-L<path>`
- **Linker Flags**: `-l<library>`
- **Preprocessor Definitions**: `-D<name>=<value>`
- **Output File**: `-o <output>`
- **Compile Only**: `-c`

### IDEs and Text Editors

- **Visual Studio**: A full-featured IDE from Microsoft that provides comprehensive C++ development tools.
- **Visual Studio Code**: A lightweight and versatile code editor with C++ support through extensions.
- **CLion**: A cross-platform C++ IDE from JetBrains that offers advanced code analysis and refactoring features.
- **Code::Blocks**: An open-source IDE that supports multiple compilers and platforms.
- **Eclipse**: An extensible IDE that supports C++ development through plugins.

### Online Compilers

- **Compiler Explorer**: An online tool that allows you to explore the assembly output of C++ code.
- **repl.it**: An online platform that provides a C++ compiler and editor for writing and running code.
- **Ideone**: An online compiler and debugging tool that supports multiple programming languages.
- **[cppinsights](https://www.cppinsights.io/)**: An online tool that shows the transformation of C++ code to assembly code.
- **[godbolt](https://www.godbolt.org/)**: An online compiler explorer that shows the assembly output of C++ code.

## Debugging

Debugging is the process of identifying and fixing errors in a program. C++ provides various tools and techniques for debugging code, including print statements, breakpoints, and debugging tools.

### Debugging Techniques

- **Print Statements**: Use `std::cout` to print debug messages to the console.
- **Assertions**: Use `assert` to check conditions and halt the program if they are false.
- **Logging**: Use logging libraries to record debug information to a file.
- **Debugging Tools**: Use IDEs and debuggers to set breakpoints, inspect variables, and step through code.


### Debugging Tools

- **GDB (GNU Debugger)**: A command-line debugger that supports various features for debugging C++ programs.
- **LLDB**: A debugger provided by LLVM that supports debugging C++ code on macOS and Linux.
- **Visual Studio Debugger**: A graphical debugger provided by Microsoft for debugging C++ programs on Windows.
- **Valgrind**: A memory debugging tool that helps identify memory leaks and other memory-related errors.

### Debugging Tips

- **Start Small**: Debug small sections of code at a time to isolate errors.
- **Use Breakpoints**: Set breakpoints to pause execution and inspect variables.
- **Check Inputs**: Verify input data and function parameters for correctness.
- **Review Code**: Review code for logical errors and common mistakes.
- **Use Version Control**: Use version control systems to track changes and revert to previous versions.

## Build Systems 

Build systems are tools that automate the process of compiling, linking, and packaging software projects. They manage dependencies, build configurations, and target platforms to generate executable files from source code.

### Build Tools

- **Make**: A build automation tool that uses Makefiles to specify build rules.
- **CMake**: A cross-platform build system generator that simplifies the process of building C++ projects.
- **Ninja**: A fast and lightweight build tool that can be used with CMake.
- **Bazel**: A build system from Google that supports large-scale projects and multiple languages.

#### GNU Make

A Makefile is a file that specifies build rules and dependencies for a project. It contains targets, dependencies, variables, and phony targets that define how to build specific files or executables.

- **Makefile**: A file that specifies build rules and dependencies for a project.
- **Targets**: Rules that define how to build specific files or executables.
- **Dependencies**: Files or targets that must be built before a target can be built.
- **Variables**: Values that can be used to customize the build process.
- **Phony Targets**: Targets that do not correspond to actual files but perform specific actions.

```makefile
# Variables
CXX = g++
CXXFLAGS = -Wall -Iinclude
SRC = src/main.cpp
OBJ = main.o
EXE = my_program

# Rules
$(EXE): $(OBJ)
    $(CXX) $(CXXFLAGS) -o $(EXE) $(OBJ)

$(OBJ): $(SRC)
    $(CXX) $(CXXFLAGS) -c $(SRC)

# Phony targets
.PHONY: clean
clean:
    rm -f $(OBJ) $(EXE)
```

#### CMake

CMake is a cross-platform build system generator that uses CMakeLists.txt files to define build configurations and dependencies. It generates build files for various platforms and build tools, such as Makefiles, Visual Studio projects, and Xcode projects.

- **CMakeLists.txt**: A file that specifies build configurations and dependencies for a CMake project.
- **Targets**: Executables, libraries, and custom targets defined in CMakeLists.txt.
- **Variables**: CMake variables that control build settings and options.
- **Commands**: CMake commands that define build rules and actions.

```cmake
# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(my_project)

set(CMAKE_CXX_STANDARD 11)

add_executable(my_program src/main.cpp)
```


## languge Concepts

### auto (Automatic Type Deduction)

The `auto` keyword in C++ is used for automatic type deduction. It allows the compiler to determine the type of a variable based on its initializer. This feature was introduced in C++11 to simplify code and improve readability.

#### Syntax

```cpp
auto variable = value;
```

#### Example

```cpp

#include <iostream>

int main() {
    auto x = 42; // x is of type int
    auto y = 3.14; // y is of type double
    auto z = "Hello"; // z is of type const char*
    std::cout << x << " " << y << " " << z << std::endl;
    return 0;
}
```

### Range-based For Loop

The range-based for loop in C++ is a convenient way to iterate over elements in a container, such as an array, vector, or string. It simplifies the process of iterating over elements and accessing them without using iterators or indices.

#### Syntax

```cpp
for (auto& element : container) {
    // Process element
}
```

#### Example

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    for (auto& num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
```

### Undefine Behaviour

Undefined behavior in C++ refers to code constructs and operations that do not have well-defined semantics according to the C++ standard. It can lead to unpredictable program behavior, crashes, and security vulnerabilities. Avoiding undefined behavior is essential for writing safe and reliable code.

#### Examples of Undefined Behavior

- **Null Pointer Dereference**: Accessing or dereferencing a null pointer.
- **Buffer Overflow**: Writing to or reading from memory outside the bounds of an array.
- **Uninitialized Variables**: Using variables before they are initialized.
- **Signed Integer Overflow**: Overflowing a signed integer value.
- **Division by Zero**: Dividing an integer by zero.

#### Handling Undefined Behavior

- **Avoid Undefined Behavior**: Write safe and well-defined code to prevent undefined behavior.
- **Use Static Analysis Tools**: Use tools that analyze code for potential undefined behavior.
- **Compiler Warnings**: Enable compiler warnings to catch potential issues at compile time.
- **Testing and Debugging**: Test code thoroughly and use debugging tools to identify issues.

### Macros

Macros in C++ are preprocessor directives that define symbolic constants, functions, or code snippets. They are used to simplify code, improve readability, and enable conditional compilation.

#### Defining Macros

- **Object-like Macros**: `#define PI 3.14159`
- **Function-like Macros**: `#define SQUARE(x) ((x) * (x))`
- **Conditional Macros**: `#ifdef`, `#ifndef`, `#else`, `#endif`

```cpp
#include <iostream>
#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main() {
    double radius = 5.0;
    double area = PI * SQUARE(radius);
    std::cout << "Area: " << area << std::endl;
    return 0;
}
```
#### Macros vs. Constants

- **Macros**: Processed by the preprocessor and replaced in the code.
- **Constants**: Typed values that are stored in memory and have a defined scope.
- **Benefits of Macros**: Flexibility, code reuse, conditional compilation.
- **Drawbacks of Macros**: Lack of type safety, potential side effects, readability issues.

### Argument Dependent Lookup (ADL)

Argument-dependent lookup (ADL) in C++ is a mechanism that allows functions and operators to be found by the compiler based on the types of arguments passed to them. It is also known as Koenig lookup after its creator Andrew Koenig.

#### Example of ADL

```cpp
#include <iostream>

namespace my_namespace {
    struct MyType {};
    void foo(MyType) {
        std::cout << "ADL: foo(MyType)" << std::endl;
    }
}

int main() {
    my_namespace::MyType obj;
    foo(obj); // ADL: foo(MyType)
    return 0;
}
```


## Resources

- [cppreference](www.cppreference.com)
- [learncpp](https://www.learncpp.com/)
- [cplusplus](http://www.cplusplus.com/)
- [cpp-cheat-sheet](https://github.com/gibsjose/cpp-cheat-sheet)
- [Modern-CPP-Programming](https://github.com/federico-busato/Modern-CPP-Programming)
