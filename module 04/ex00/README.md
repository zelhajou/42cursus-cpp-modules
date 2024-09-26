## EX00

This exercise aims to teach and demonstrate the concept of polymorphism in C++, which is a fundamental principle of object-oriented programming (OOP). Polymorphism allows objects of different classes to be treated as objects of a common base class.
The exercise focuses on creating a base class `Animal` and derived classes `Dog` and `Cat` to illustrate how polymorphism works. Additionally, it introduces the concept of method overriding and the use of virtual functions.

### 1. Polymorphism

Polymorphism in C++ allows you to call derived class methods through a base class pointer or reference. It is mainly achieved through:

- **Function Overloading**: Multiple functions with the same name but different parameters.
- **Operator Overloading**: Defining custom behavior for operators for user-defined types.
- **Virtual Functions**: Functions in a base class that can be overridden in derived classes to provide specific behavior.

## 2. Virtual Functions
A virtual function is a member function in the base class that you expect to override in derived classes.
When you refer to a derived class object using a base class pointer or reference, you can call a virtual function for that object and execute the derived class's version of the function.

## 3. Base and Derived Classes
In this exercise, we create a base class `Animal` and two derived classes `Dog` and `Cat`.

**Base Class `Animal`**

The Animal class has a protected attribute type and a virtual function makeSound:

```cpp
class Animal {
protected:
    std::string type;
public:
    Animal() : type("Animal") { std::cout << "Animal created.\n"; }
    virtual ~Animal() { std::cout << "Animal destroyed.\n"; }
    virtual void makeSound() const { std::cout << "Some generic animal sound.\n"; }
    std::string getType() const { return type; }
};
```

- **Protected Attribute**: Allows derived classes to access type.
- **Virtual Destructor**: Ensures the correct destructor is called for derived classes.
- **Virtual Function**: `makeSound` allows derived classes to provide their specific implementation.


