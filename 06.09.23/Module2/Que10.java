

// Superclass "Animal"
public class Que10 {
    void makeSound() {
        System.out.println("The animal makes a generic sound.");
    }
}

// Subclass "Dog" that extends "Animal"
class Dog extends Que10 {
    // Override the makeSound method to provide a specific implementation for dogs
    @Override
    void makeSound() {
        System.out.println("The dog barks.");
    }

    // Additional method specific to the Dog class
    void wagTail() {
        System.out.println("The dog wags its tail.");
    }
}

public class AnimalDemo {
    public static void main(String[] args) {
        Que10 genericAnimal = new Que10();
        Que10 dog = new Dog();

        System.out.println("Calling makeSound on genericAnimal:");
        genericAnimal.makeSound();

        System.out.println("\nCalling makeSound on dog:");
        dog.makeSound();

        if (dog instanceof Dog) {
            Dog specificDog = (Dog) dog;
            System.out.println("\nCalling wagTail on specificDog:");
            specificDog.wagTail();
        }
    }
}
