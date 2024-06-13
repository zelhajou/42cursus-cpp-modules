# Exercise 01: Towards a more useful fixed-point number class

## Overview

In this exercise, we extend the Fixed class from Exercise 00 to make it more functional. We add constructors for integer and floating-point inputs, and methods to convert the fixed-point value back to these types. Additionally, we overload the insertion (<<) operator to allow for easy printing of the fixed-point values.

## Instructions

1. Create a new class called `Fixed` that represents a fixed-point number.
2. The class should have the following private members:
   - An integer to store the fixed-point value.
   - An integer to store the number of fractional bits.
3. The class should have the following public members:
   - A constructor that takes an integer and the number of fractional bits as arguments and initializes the fixed-point value.
   - A constructor that takes a floating-point number and the number of fractional bits as arguments and initializes the fixed-point value.
   - A method called `toInt` that converts the fixed-point value to an integer.
   - A method called `toFloat` that converts the fixed-point value to a floating-point number.
   - An overloaded insertion operator (`<<`) that allows you to print the fixed-point value.

## Fixed-point representation

Fixed-point representation is a way to store fractional numbers by using an integer to represent the value, along with a predefined number of bits used for the fractional part. This method avoids floating-point arithmetic, which can be less efficient on some systems.

In the `Fixed` class, we use a fixed-point representation with `_fractionalBits` bits reserved for the fractional part. For example, if `_fractionalBits` is 8, it means the lower 8 bits of the integer will represent the fractional part, and the upper bits will represent the integer part.

### `toFloat` Function:

```cpp
float Fixed::toFloat(void) const {
    return static_cast<float>(_fixedPointValue) / (1 << _fractionalBits);
}
```
Explanation: 

1. **Fixed-point to float conversion**: The `_fixedPointValue` is an integer that represents the fixed-point number. To convert it to a floating-point number:
	- We need to shift the fixed-point value to the right by `_fractionalBits` to get the integer part.
	- The fractional part is obtained by dividing by `2^_fractionalBits` (equivalent to `1 << _fractionalBits`).

2. **Example**:
	- Let's assume `_fractionalBits` is 8.
	- If `_fixedPointValue` is `2560` (in binary: `00001010 00000000`)
		- The upper 8 bits (`00001010`) represent the integer part, which is `10`.
		- There are no bits set in the lower 8 bits, so the fractional part is `0`.
	- The resulting floating-point value is `10.0`.

3. **Step-by-Step**:
	- Convert `_fixedPointValue` to float: `static_cast<float>(_fixedPointValue)`.
	- Divide by `256` (which is `1 << 8`): `2560 / 256 = 10.0`.

### `toInt` Function:

```cpp
int Fixed::toInt(void) const {
	return _fixedPointValue >> _fractionalBits;
}
```

**Explanation**:

1. **Fixed-point to Integer Conversion**: To get the integer part of the fixed-point number, we perform a right shift by `_fractionalBits`. This operation discards the fractional part.

2. **Example**:
	- Using the same example where `_fixedPointValue` is `2560`:
		- Shifting `2560` (binary:` 00001010 00000000`) right by 8 bits gives `10` (binary: `00000000 00001010`).
	- The resulting integer value is `10`.

3. **Step-by-Step**:
	- Right shift `_fixedPointValue` by `_fractionalBits`:` 2560 >> 8 = 10`.

### Stream Insertion Operator Overload

```cpp
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
```

**Explanation**:

1. **Output Stream Overloading**: This function overloads the `<<` operator for `std::ostream` to allow printing of `Fixed` objects.

2. **Conversion to Float**: When you use `std::cout << fixed`, it calls the `toFloat()` method to convert the fixed-point number to a floating-point number.

3. **Example**:

- If `fixed` represents the value `10.0` as discussed earlier:
	- `toFloat()` returns `10.0`.
	- The `<<` operator inserts `10.0` into the output stream.

4. **Step-by-Step**:
	- Call `fixed.toFloat()`.
	- Insert the floating-point value into the stream `os`.
	- Return the stream `os` for chaining operations.


## Example usage

```cpp
int main() {
    Fixed a(10.5f);  // Initializes Fixed object with floating-point value
    Fixed a(10.5f);  // Initializes Fixed object with floating-point value 10.5
    std::cout << "Fixed-point value as float: " << a << std::endl;
    std::cout << "Fixed-point value as int: " << a.toInt() << std::endl;
    return 0;
}
```

**Detailed Breakdown**

1. **Initialization**:
	- When `Fixed a(10.5f)` is called, it uses the` Fixed(const float floating)` constructor.
	- Inside this constructor:
	```cpp
	Fixed::Fixed(const float floating) {
    std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = roundf(floating * (1 << _fractionalBits));
	}
	```
		- `floating` is `10.5`.
		- Assuming `_fractionalBits` is `8`, `1 << 8` is `256`.
		- The fixed-point representation is calculated as `roundf(10.5 * 256)`, which equals `2688`.
		- The `_fixedPointValue` is set to `2688`.

2. **Printing the Fixed-point Value**:
	- `std::cout << "Fixed-point value as float: " << a << std::endl;`
	- This calls the overloaded << operator:
	```cpp
	std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
	}
	```
	- `fixed.toFloat()` converts the fixed-point value back to float:
	```cpp
	float Fixed::toFloat(void) const {
    return static_cast<float>(_fixedPointValue) / (1 << _fractionalBits);
	}
	```
		- `_fixedPointValue` is `2688`.
		- Dividing by `256` gives `2688 / 256 = 10.5`.
		- The output is `10.5`.

3. **Printing the Fixed-point Value as Integer**:

- `std::cout << "Fixed-point value as int: " << a.toInt() << std::endl;`
- This calls the `toInt` method:
```cpp
int Fixed::toInt(void) const {
    return _fixedPointValue >> _fractionalBits;
}
```
- Right-shifting `2688` by `8` bits gives `2688 >> 8 = 10`.
- The output is `10`.
