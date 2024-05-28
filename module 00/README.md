# Module 00

This module introduces the basics of C++ programming. You'll learn about the syntax, data types, and control structures in C++. You'll also get familiar with the standard library and how to use it in your programs.

## Exercise 00: Megaphone

**Topic**: Command-line arguments, basic input/output, string manipulation

**Explanation**:

This exercise focuses on understanding how to handle command-line arguments in C++. You'll write a simple program that converts all input characters to uppercase and prints them to the console. It introduces:

- **Command-line arguments**: Handling input given when the program is executed.
- **String manipulation**: Using functions like `toupper` to modify strings.
- **Basic I/O**: Using `std::cout` and `std::endl` for output.

## Exercise 01: My Awesome PhoneBook

**Topic**: Classes and objects, arrays, user input, basic data management

**Explanation**:

This exercise is about creating a simple phone book application using classes. You'll learn about:

- **Classes and objects**: Defining and using classes (`PhoneBook` and `Contact`).
- **Member functions and variables**: Implementing functions to add and search contacts.
- **Arrays**: Storing multiple contacts in an array.
- **User input**: Getting input from the user to interact with the phone book.

## Exercise 02: Account


## Detailed Explanation of Each Topic:

- [Command-line arguments](#command-line-arguments)
- [String manipulation](#string-manipulation)
- [Basic I/O](#basic-io)

### Command-line arguments

In C++, command-line arguments are handled using the parameters `argc` (argument count) and `argv` (argument vector) in the main function. `argc` indicates the number of arguments, and `argv` is an array of C-strings representing the arguments.

For example:

```cpp
int main(int argc, char* argv[]) {
	// Check the number of arguments
	if (argc < 2) {
		std::cout << "Usage: " << argv[0] << " <name1> <name2> ..." << std::endl;
		return 1;
	}

	// Process the arguments
	for (int i = 1; i < argc; ++i) {
		std::cout << "Argument " << i << ": " << argv[i] << std::endl;
	}

	return 0;
}
```

### String manipulation

C++ provides functions for manipulating strings, such as `toupper` to convert characters to uppercase, which is available in the `<cctype>` library.

For example:

```cpp
#include <iostream>
#include <cctype>

int main() {
	std::string input = "hello, world!";
	for (char& c : input) {
		c = std::toupper(c);
	}
	std::cout << input << std::endl;
	return 0;
}
```

- [string C++ examples](http://anaturb.net/C/string_exapm.htm)
- [strings in C++](https://beginnersbook.com/2017/08/strings-in-c/)

### Basic I/O

Input and output in C++ are handled using streams. std::cout is used for output, and `std::cin` for input. The `std::endl` manipulator is used to insert a newline character and flush the stream.

For example:

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

- [C++ I/O](https://www.geeksforgeeks.org/basic-input-output-c/)
- [Stream IO and File IO](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp10_IO.html)

### Classes and objects

A class is a blueprint for creating objects, encapsulating data, and functions that operate on that data. Objects are instances of classes.

