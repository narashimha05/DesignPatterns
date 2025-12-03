
# Factory Method Pattern

The Factory Method is a creational design pattern where the process of creating objects is delegated to subclasses.
Instead of having one central factory that creates all products, each subclass (or factory implementation) decides which concrete product to create.

# UML Diagram

<img width="5423" height="2694" alt="Image" src="https://github.com/user-attachments/assets/808a2078-465c-4915-9caa-60c641e9f5f1" />

- It’s like ordering a burger from two different shops:

- SinghBurger Factory → gives you regular burgers (basic, standard, premium)

- KingBurger Factory → gives you wheat burgers (basic wheat, standard wheat, premium wheat)

- You ask for the same “type” (basic/standard/premium), but different factories give you different versions of that burger.

## What the diagram shows:

- #### Burger (abstract class)
A general "burger blueprint". All burgers must implement a prepare() function, but the details differ.

- #### BasicBurger / StandardBurger / PremiumBurger
Concrete burger types created by the SinghBurger factory.

- #### BasicWheatBurger / StandardWheatBurger / PremiumWheatBurger
Concrete wheat-based burgers created by the KingBurger factory.

- #### BurgerFactory (abstract factory class)
Declares the function CreateBurger(type). It does not decide what burger to create — it leaves that choice to subclasses.

[def]: simple