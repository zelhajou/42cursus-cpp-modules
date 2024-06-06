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
	- Can be assigned a weapon after being created.
	- Implements an `attack()` method that uses the weapon to print an attack message, if the weapon is set.


## Detailed Explanation

**Weapon.hpp**:

```cpp
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
private:
	std::string type;

public:
	Weapon(const std::string &type);
	const std::string &getType() const;
	void setType(const std::string &type);
};

#endif
```

- `Constructor`: Initializes the weapon with a type.
- `getType()`: Returns the current type of the weapon.
- `setType()`: Sets the type of the weapon.

**Weapon.cpp**:

```cpp
#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type(type) {}

const std::string &Weapon::getType() const {
	return type;
}

void Weapon::setType(const std::string &type) {
	this->type = type;
}
```

**HumanA.hpp**:

```cpp
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {
private:
	std::string name;
	const Weapon &weapon;

public:
	HumanA(const std::string &name, Weapon &weapon);
	void attack() const;
};

#endif
```

- `Constructor`: Takes a name and a reference to a weapon. The reference ensures that HumanA always has a weapon.
- `attack()`: Prints an attack message using the weapon.

**HumanA.cpp**:

```cpp
#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {}

void HumanA::attack() const {
	std::cout << name << " attacks with a " << weapon.getType() << "!" << std::endl;
}
```

**HumanB.hpp**:

```cpp
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {
private:
	std::string name;
	Weapon *weapon;

public:
	HumanB(const std::string &name);
	void setWeapon(Weapon *weapon);
	void attack() const;
};

#endif
```

- **Constructor**: Takes a name and initializes the weapon pointer to `nullptr`, indicating that `HumanB` initially has no weapon.
- **setWeapon()**: Allows assigning a weapon to `HumanB` after creation.
- **attack()**: Prints an attack message using the weapon, if the weapon is set.

**HumanB.cpp**:

```cpp
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(nullptr) {}

void HumanB::setWeapon(Weapon *weapon) {
	this->weapon = weapon;
}

void HumanB::attack() const {
	if (weapon != nullptr) {
		std::cout << name << " attacks with a " << weapon->getType() << "!" << std::endl;
	} else {
		std::cout << name << " attacks with bare hands!" << std::endl;
	}
}
```

**main.cpp**:

```cpp
#include "Weapon.hpp"
#include "HumanA.hpp"

int main() {
    Weapon club("crude spiked club");

    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

    HumanB jim("Jim");
    jim.attack();
    jim.setWeapon(club);
    jim.attack();
    club.setType("another type of club");
    jim.attack();

    return 0;
}
```

**What Happens**:

1. **Weapon Creation**:
    - A `Weapon` object named `club` is created with the type "crude spiked club".

2. **HumanA (Bob)**:
    - `HumanA` object `bob` is created with the name "Bob" and the club weapon.
    - Bob attacks with the club weapon.
    - The weapon type is changed to "some other type of club".
    - Bob attacks again, demonstrating that the weapon reference reflects the updated type.

3. **HumanB (Jim)**:
    - `HumanB` object `jim` is created with the name "Jim" and no initial weapon.
    - Jim attempts to attack but has no weapon.
    - Jim is assigned the `club` weapon and attacks with the updated weapon type.
    - The weapon type is changed again to "another type of club".
    - Jim attacks again, demonstrating that the weapon pointer reflects the updated type.

**Key Points**:

- **Class Composition**: `HumanA` and `HumanB` classes use the `Weapon` class to perform actions, showing how objects can be composed of other objects.

- **References vs Pointers**:
     - `HumanA` uses a reference to ensure that it always has a weapon.
    - `HumanB` uses a pointer to allow dynamic assignment of a weapon.

- **Dynamic Behavior**: Changing the weapon type affects both `HumanA` and `HumanB` because they reference the same `Weapon` object, demonstrating shared state.

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
