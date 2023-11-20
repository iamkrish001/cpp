#include <iostream>

class Animal {
public:
    virtual void speak() = 0; // Pure virtual function
};

class Dog : public Animal {
public:
    void speak() override {
        std::cout << "Woof! Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        std::cout << "Meow! Meow!" << std::endl;
    }
};

int main() {
    Animal* animals[2];
    animals[0] = new Dog();
    animals[1] = new Cat();

    for (int i = 0; i < 2; i++) {
        animals[i]->speak();
        delete animals[i];
    }

    return 0;
}