# Exercise 04: Sed is for losers

**Objective**:

The goal of this exercise is to create a program that can perform string replacement within the contents of a file without using the C file manipulation functions or the `std::string::replace` function. Specifically, the program should:

1. Take three parameters: a filename and two strings (`s1` and `s2`).
2. Open the specified file, read its contents, and create a new file with the same content where every occurrence of `s1` is replaced with `s2`
3. Use only the allowed `std::string member` functions (except `replace`) to achieve this task.
4. Handle unexpected inputs and errors gracefully.

`replace.cpp`:

```cpp
void Replace::replace_string(std::string &str, const std::string &s1, const std::string &s2)
{
    if (s1.empty())
        return;

    size_t start_pos = 0;
    while ((start_pos = str.find(s1, start_pos)) != std::string::npos)
    {
        str.erase(start_pos, s1.length());
        str.insert(start_pos, s2);
        start_pos += s2.length();
    }
}
```

**Explanation of Each Step and Member Function**:

1. Check for an empty `s1` string:

    ```cpp
    if (s1.empty())
        return;
    ```

    - **Purpose**: Ensure `s1` is not empty. Replacing an empty string doesn't make sense because every position in the string could be considered a match.
    - **Member Function**: `std::string::empty()` returns `true` if the string is empty (i.e., its length is 0).

2. Initialize `start_pos` to 0:

    ```cpp
    size_t start_pos = 0;
    ```

    - **Purpose**: `start_pos` keeps track of the current position in the string where the search for `s1` will start.
    - **Type**: `size_t` is an unsigned integral type used to represent sizes and indices.

3. Search for the substring `s1` and replace it:

    ```cpp
    while ((start_pos = str.find(s1, start_pos)) != std::string::npos)
    {
        str.erase(start_pos, s1.length());
        str.insert(start_pos, s2);
        start_pos += s2.length();
    }
    ```

    - Loop Condition: The loop continues as long as `str.find(from, start_pos)` finds an occurrence of `s1` in `str`. If `find` returns `std::string::npos`, it means no more occurrences are found.
    - **Find Function**: `std::string::find()` searches for the first occurrence of the substring `s1` in `str` starting from the position `start_pos`. If found, it returns the position of the first character of the found substring; otherwise, it returns `std::string::npos`.
    - **Replace Operation**:
        - `str.erase(start_pos, s1.length())`: Removes the substring `s1` from `str` starting at position `start_pos`.
        - `str.insert(start_pos, s2)`: Inserts the replacement string `s2` into `str` at position `start_pos`.
        - `start_pos += s2.length()`: Updates `start_pos` to the position after the inserted replacement string to continue searching for the next occurrence.

4. **Example**:

```cpp
std::string str = "Hello world! Hello everyone!";
std::string from = "Hello";
std::string to = "Hi";
replaceString(str, from, to);
```

1. Initial `str`: `"Hello world! Hello everyone!"`.
2. `find(from, 0)` returns 0.
3. `erase(0, 5)` results in `" world! Hello everyone!"`.
4. `insert(0, "Hi")` results in `"Hi world! Hello everyone!"`.
5. Update `start_pos` to 2 (position after "Hi").
6. `find(from, 2)` returns 11.
7. `erase(11, 5)` results in "Hi world! everyone!".
8. `insert(11, "Hi")` results in `"Hi world! Hi everyone!"`.
9. Update `start_pos` to 13 (position after second "Hi").
10. `find(from, 13)` returns `std::string::npos`.
11. Loop ends.

```output
Hi world! Hi everyone!
```
