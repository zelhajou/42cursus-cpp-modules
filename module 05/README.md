# Module 05

## Module Overview

This module focuses on enhancing your understanding of C++ programming through a series of exercises designed to introduce and reinforce key concepts such as repetition, exception, and memory management. The exercises are structured to build upon each other, allowing you to gradually develop a robust understanding of these topics.

## Goals

1. **Repetition and Exception:** learn how to effectively handle repetition using loops and manage exceptions to ensure robust and error-free code.
2. **Memory Management:** understand the importance of managing memory, avoiding memory leaks, and using pointers to manipulate memory.
3. **Class Design**: Implement classes following Orthodox Canonical Form (OCF) and understand the significance of constructors, destructors, copy constructors, and assignment operators.
4. **Practical Application**: Apply theoretical concepts to practical scenarios by implementing various classes and functions that simulate real-world tasks and challenges.

## Topics Covered

### 1. Exercise 00: Mommy, When I Grow Up, I Want to Be a Bureaucrat!
- **Goal**: Design `Bureaucrat` class with attributes like name and grade, ensuring proper handling of invalid grades through exceptions.
- **Key Concepts**: Class design, exception handling, constant attributes, and access control.

### 2. Exercise 01: Form Up, Maggots!
- **Goal**: Implement a `Form` class with attributes such as name, sign status, and grades required to sign and execute.
- **Key Concepts**: Class inheritance, encapsulation, operator overloading, exceptions handling.

### 3. Exercise 02: No, You Need Form 28B, Not 28C...
- **Goal**: Create additional forms that inherit from the base `Form` class, each with speific functionalities like creating ASCII art or simulating a robotomy.
- **Key Concepts**: Inheritance, polymorphism, abstract classes, and pure virtual functions.

### 4. Exercise 03: At Least This Beats Coffee-Making
- **Goal**: Implement an `Intern` class with the capability to create forms based on given input.
- **Key Concepts**: Factory pattern, dynamic memory allocation, polymorphism.
- **Description**: The `Intern` class does not have any attributes but has a crucial function, `makeForm()`, which takes the name of a form and a target and returns a pointer to the corresponding form object. This exercise emphasizes dynamic creation of objects and understanding of the factory design pattern.
