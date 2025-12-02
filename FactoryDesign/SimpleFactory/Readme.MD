
# Simple Factory Design Pattern

The Simple Factory is a design pattern where you use a single class (the factory) to decide which object to create.
Instead of your main program deciding the type of object, the factory does the job for you.

### It’s like ordering a burger at a counter:

- You say **basic** → the kitchen gives you a Basic Burger

- You say **standard** → the kitchen gives you a standard Burger

- You say **premium** → you get a Premium Burger

- You don’t make it yourself — the **factory** handles it.

## What the diagram shows:

- #### Burger (abstract class)
A general “burger blueprint.” It only says that all burgers must have a prepare() function.

- #### BasicBurger / StandardBurger / PremiumBurger
These are the actual burger types created from the blueprint.
Each one prepares itself differently.

- #### BurgerFactory
This class creates the right burger based on the input (e.g., "basic", "premium").