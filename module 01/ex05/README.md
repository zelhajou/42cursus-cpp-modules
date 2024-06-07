# Exercise 05: Harl 2.0

**Objective**:

This exercise introduces the concept of pointers to member functions in C++. Pointers to member functions allow you to call a member function on an instance of a class dynamically, which is useful for reducing the complexity of your code, especially when you have to call one of several functions based on some condition.

**Key Concepts**:

1. Pointers to Member Functions:
   - A pointer to a member function allows you to call member functions dynamically, avoiding the need for lengthy `if/else` or `switch` statements.
   - This mechanism provides a more elegant and scalable way to handle multiple functions based on some criteria, such as a string input representing different complaint levels.

2. Dynamic Function Calls:
    - Instead of using traditional control structures to determine which member function to call, an array of function pointers is used.
    - This array maps each possible input (e.g., "DEBUG", "INFO", "WARNING", "ERROR") to its corresponding member function.

3. Class Design:
    - The `Harl` class contains four member functions (`debug()`, `info()`, `warning()`, and `error()`) that represent different levels of complaints.
    - A public function `complain(std::string level)` uses the input `level` to determine which member function to call using the function pointer array.

**Detailed Explanation**:

1. **Member Functions**:
    - The `Harl` class contains four member functions: `debug()`, `info()`, `warning()`, and `error()`.
    - Each function prints a message to the console, representing a different level of complaint.
    - The `debug()` function prints "DEBUG: This is a debug message."
    - The `info()` function prints "INFO: This is an info message."
    - The `warning()` function prints "WARNING: This is a warning message."
    - The `error()` function prints "ERROR: This is an error message."

2. **Array of Function Pointers**:
    - An array of pointers to member functions is declared and initialized within the `complain` function.
    - Each element of the array corresponds to one of the complaint levels and points to the respective member function.

3. **Complain Function:**
    - The `complain` function iterates through the array of complaint levels and compares each level to the input `level`.
    - When a match is found, the corresponding member function is called using the pointer to the member function.

**Summary**:

This exercise demonstrates how to use pointers to member functions in C++ to dynamically call member functions based on some criteria. By using an array of function pointers, you can avoid lengthy `if/else` or `switch` statements and provide a more elegant and scalable solution for handling multiple functions.
