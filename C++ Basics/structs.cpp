#include <iostream>
using namespace std;

int main()
{
    struct Person
    {
        string name;
        int age;
        double salary;
    };

    struct Person p1;

    printf("Size of Person Struct: %d bytes\n", sizeof(Person));

    // this still prints garbage values and does not cause any compilation error(no initialization of salary yet)
    printf("Salary of person: %d\n", (p1.salary));
    // prints an empty string
    printf("Name of person: %s\n", (p1.name).c_str());

    p1.name = "John";
    // c_str() is used to convert string to char array which %s expects
    printf("Name of person: %s\n", (p1.name).c_str());

    // EXAMPLE 2 - Representing a playing card

    struct Card
    {
        string face;
        string suit;
    };

    struct Card c1;
    c1.face = "Ace";
    c1.suit = "Spades";
    printf("Size of Card Struct: %d bytes\n", sizeof(Card));
    printf("Card: %s of %s\n", (c1.face).c_str(), (c1.suit).c_str());
    return 0;
}