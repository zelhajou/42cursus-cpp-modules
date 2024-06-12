# Module 02

C++ Module 02 is designed to introduce and deepen your understanding of some of the foundational concepts in C++ programming: ad-hoc polymorphism, operator overloading, and the Orthodox Canonical class form. This module aims to equip you with the skills necessary to write robust, maintainable, and efficient C++ code.

## Key Concepts

1. **Ad-hoc Polymorphism**:
    - Ad-hoc polymorphism, also known as function overloading or operator overloading, allows functions or operators to operate in different ways depending on the types of their arguments. This form of polymorphism enhances the flexibility and readability of your code by enabling the same function or operator to be used for different data types.

2. **Operator Overloading**:
    - Operator overloading is a specific form of ad-hoc polymorphism that allows you to define the behavior of operators such as `+`, `-`, `*`, `/`, and `<<` for user-defined types. By overloading operators, you can extend the functionality of C++'s built-in operators to work with custom data structures.

3. **Orthodox Canonical Class Form**:
    - The Orthodox Canonical Form (OCF) refers to a specific way of designing classes in C++ to ensure they manage resources correctly and behave predictably when copied. An OCF-compliant class includes four essential member functions:
        - **Default Constructor**: Initializes objects in a default state.
        - **Copy Constructor**: Initializes a new object as a copy of an existing object.
        - **Copy Assignment Operator**: Assigns the state of one object to another existing object.
        - **Destructor**: Cleans up resources when an object is destroyed.

## Exercise 00: My First Class in Orthodox Canonical Form

The objective of this exercise is to create a class in the Orthodox Canonical Form that represents a fixed-point number. You will implement a class with specific private and public members, including constructors, a destructor, and member functions, following the orthodox canonical form.

## Exercise 01: Ad-hoc Polymorphism

The objective of this exercise is to implement a templated function that returns the minimum value between two arguments. You will create a function that works with different data types and demonstrates ad-hoc polymorphism in C++.

## Exercise 02: Operator Overloading

The objective of this exercise is to implement a class that represents a fixed-point number and overloads the `+`, `-`, `*`, `/`, and `<<` operators. You will define the behavior of these operators for your custom class, allowing you to perform arithmetic operations and output the fixed-point number using the stream insertion operator.

## Understanding Fixed-Point Numbers

In this module, you will work with fixed-point numbers, A fixed-point number is a way of representing fractional numbers (numbers with decimal points) using integers. It is particularly useful in environments where floating-point arithmetic is either too slow or unavailable, such as in embedded systems, digital signal processing, and certain types of financial calculations. Fixed-point numbers are often used to represent currency values, percentages, and other quantities that require precise decimal precision.

In a fixed-point number, a certain number of bits are reserved for the fractional part of the number, while the remaining bits represent the integer part. For example, in an 8-bit fixed-point number with 4 fractional bits, the format would be as follows:

```plaintext
| Integer Part (4 bits) | Fractional Part (4 bits) |
```

The value of the fixed-point number is calculated by interpreting the integer and fractional parts as separate values and combining them. For example, the fixed-point number `5.25` in an 8-bit format with 4 fractional bits would be represented as follows:

```plaintext
| Integer Part (4 bits) | Fractional Part (4 bits) |
|-----------------------|-------------------------|
| 0101 (5)              | 0100 (0.25)             |
```

In a fixed-point representation, fractional parts are represented using binary fractions. The value `0.25` can be converted to binary by understanding the place values in binary fractions, which are 1/2, 1/4, 1/8, 1/16, etc.

Here's how you can represent `0.25` in binary:

1. Multiply the decimal value by 2:
   - `0.25 * 2 = 0.5`
2. The whole number part becomes the next binary digit:
   - `0.25 * 2 = 0.5` → `0`
3. Repeat the process with the fractional part:
   - `0.5 * 2 = 1.0`
4. The whole number part becomes the next binary digit:
   - `0.5 * 2 = 1.0` → `1`
5. Continue the process until you reach the desired precision:
   - `0.25` in binary: `0.01`

or

1. Write the decimal value as a fraction:
   - `0.25 = 1/4`
2. Convert the fraction to binary:
   - `1/4 = 0.01`

Therefore, `0.25` in binary is `0.01`. In the fixed-point representation, this binary value is stored in the fractional part of the fixed-point number.

In an 8-bit fixed-point number with 4 fractional bits, `0.25` would be represented as `0.0100`. for the fractional part, where each bit represents 1/2, 1/4, 1/8, 1/16 represents. Therefore, in the 4-bit fractional part `0100`:

- The first bit (0) represents 1/2 (0.5)
- The second bit (1) represents 1/4 (0.25)
- The third bit (0) represents 1/8 (0.125)
- The fourth bit (0) represents 1/16 (0.0625)

When combined with the integer part `0101` (5), the fixed-point number `5.25` is represented as `0101.0100`.
