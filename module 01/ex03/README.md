# Exercise 03: Unnecessary violence

## Objective

The goal of this exercise is to practice the concepts of class composition, using pointers and references, and understanding how different classes can interact with each other. Specifically, you will implement a scenario where different "human" classes use a "weapon" to attack, demonstrating how objects can reference other objects.

## Concepts Covered

1. **Class Composition**: Understanding how one class can contain references or pointers to objects of another class.

2. **References vs Pointers**: Knowing when to use references and when to use pointers in class members.

3. **Dynamic Behavior**: Learning how to change the state of an object dynamically and how it affects other objects that reference it.

## Scenario

You are creating a simple game where two humans, HumanA and HumanB, can attack each other using weapons. Each human has a weapon, and the weapon can be changed dynamically. HumanA initializes its weapon in the constructor using a reference, while HumanB can change its weapon dynamically using a pointer.

- `Weapon`: Represents a weapon with a type.
- `HumanA`: A human who always has a weapon.
- `HumanB`: A human who can be assigned a weapon later.

## Implementation Details

1. Weapom Class:
	- Contains a private string attribute `type` to store the type of weapon.
	- Has methods to get and set the type of the weapon.

2. HumanA Class:
    - Has a name and a reference to a `Weapon`.
	- Always has a weapon that is assigned at the time of construction.
	- Implements an `attack()` method that uses the weapon to print an attack message.

3. HumanB Class:
	- Contains a `Weapon` object and a string `name` to store the human's name.
	- Implement the following functions:
		- `HumanB(const std::string& name, Weapon* weapon)`: Constructor that initializes the human's name and weapon using a pointer.
		- `void setWeapon(Weapon* weapon)`: Sets the weapon of the human to the given weapon using a pointer.
		- `void attack() const`: Prints an attack message using the human's name and weapon type.


## Questions to Ponder

### Why Use `cont std::string &type` in the `Weapon` Constructor?

In the constructor `Weapon(const std::string &type)`, the `&` sign is used to denote that `type` is a reference to a `std::string`. Here’s why this is important:

1. **Efficiency**: Passing a large object like `std::string` by value would involve copying the entire string, which can be inefficient. By using a reference, we avoid this copying overhead. The reference allows us to pass the string to the constructor without making a copy.

2. **Avoiding Unnecessary Copies**: If we passed `std::string type` instead of `const std::string &type`, the constructor would create a copy of the string, which is unnecessary in this case. Using a reference allows us to work with the original string directly.

3. **Const Correctness**: The `const` keyword indicates that the reference to the string is read-only. This means that the constructor can use the string but cannot modify it. This is a safety feature that prevents accidental changes to the string passed to the constructor.

### Why Use a Reference in `HumanA` and a Pointer in `HumanB`?

In the `HumanA` class, the weapon is initialized using a reference in the constructor, while in the `HumanB` class, the weapon is set using a pointer. Here’s why this difference exists:

1. **Ownership**: In `HumanA`, the weapon is owned by the human, and it is initialized in the constructor. Using a reference indicates that the weapon is part of the human’s state and should exist as long as the human exists. The reference ensures that the weapon is always valid and does not need to be checked for null.

2. **Dynamic Behavior**: In `HumanB`, the weapon can be changed dynamically by setting it to a different weapon using a pointer. This allows for flexibility in changing the weapon during the game or under different conditions. Using a pointer indicates that the weapon can be null (i.e., the human may not have a weapon), and the pointer needs to be checked for null before use.

3. **Memory Management**: Using a reference in `HumanA` simplifies memory management because the weapon is automatically destroyed when the human is destroyed. In `HumanB`, the weapon can be changed or set to null, so using a pointer allows for more control over the weapon’s lifetime.

### How Does Changing the Weapon Affect the Attack Message?

When a human attacks, the attack message includes the human’s name and the type of weapon they are using. If the weapon is changed during the game, the attack message will reflect the new weapon type. This dynamic behavior allows for different strategies and interactions in the game based on the weapon used by each human.

By changing the weapon using a pointer in `HumanB`, the attack message can be updated to reflect the new weapon type. This demonstrates how objects can interact with each other and how changes in one object can affect the behavior of other objects that reference it.

## Example

Here is an example of how the classes can be used:

```cpp
int main() {
	Weapon sword("Sword");
	Weapon axe("Axe");

	HumanA player1("Alice", sword);
	HumanB player2("Bob", &axe);

	player1.attack(); // Output: Alice attacks with a Sword!
	player2.attack(); // Output: Bob attacks with an Axe!

	player2.setWeapon(&sword);
	player2.attack(); // Output: Bob attacks with a Sword!

	return 0;
}
```

In this example, two humans, `player1` and `player2`, are created with different weapons. The `attack()` function is called for each human, displaying the attack message with their name and weapon type. The weapon of `player2` is then changed to a sword, and the attack message is updated accordingly.

## Detailed Breakdown with Code:

### Weapon Class

```cpp
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
public:
	Weapon(const std::string &type); // Constructor takes a const reference to avoid copying the string
	const std::string &getType() const; // Returns a const reference to the type string
	void setType(const std::string &type); // Sets the type using a const reference

private:
	std::string type; // The actual type string is stored here
};

#endif
```

**Explanation**:

- **Constructor**: `Weapon(const std::string &type)` uses a reference to the string to avoid the cost of copying a potentially large string object.
- **Getter**: `const std::string &getType() const` returns a reference to the string, again avoiding a copy.
- **Setter**: `void setType(const std::string &type)`  takes a reference to avoid copying the argument.



2. **HumanA Class**:
	```cpp
	class HumanA {
	private:
		std::string name;
		Weapon& weapon;