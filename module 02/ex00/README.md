# Exercise 00: My First Class in Orthodox Canonical Form

## Objective

The objective of this exercise is to create a class in the Orthodox Canonical Form that represents a fixed-point number. You will implement a class with specific private and public members, including constructors, a destructor, and member functions, following the orthodox canonical form.

## Description

In this exercise, you will create a `Fixed` class with the following specifications:

### Private Members

- `_fixedPointValue`: An integer to store the fixed-point number value.
- `_fractionalBits`: A static constant integer to store the number of fractional bits. Its value will always be 8.

### Public Members

- **Default Constructor**: Initializes the fixed-point number value to 0.
- **Copy Constructor**: Initializes the fixed-point number value by copying another `Fixed` object.
- **Copy Assignment Operator Overload**: Assigns the value of one `Fixed` object to another.
- **Destructor**: Cleans up resources when a `Fixed` object is destroyed.
- **Member Function `getRawBits`**: Returns the raw integer value of the fixed-point number.
- **Member Function `setRawBits`**: Sets the raw integer value of the fixed-point number.

### Example

```cpp
Fixed a;
Fixed b(a);
Fixed c;

c = b;

std::cout << a.getRawBits() << std::endl; // Output: 0
std::cout << b.getRawBits() << std::endl; // Output: 0
std::cout << c.getRawBits() << std::endl; // Output: 0

a.setRawBits(42);

std::cout << a.getRawBits() << std::endl; // Output: 42
```

## Resources

- [C++ Operator Overloading](https://www.geeksforgeeks.org/operator-overloading-c/)
- [C++ Copy Constructor](https://www.geeksforgeeks.org/copy-constructor-in-cpp/)
- [C++ Copy Assignment Operator Overloading](https://www.geeksforgeeks.org/copy-assignment-operator-overloading-in-c-with-examples/)
- [C++ Destructor](https://www.geeksforgeeks.org/destructors-c/)
- [C++ Static Keyword](https://www.geeksforgeeks.org/static-keyword-cpp/)
