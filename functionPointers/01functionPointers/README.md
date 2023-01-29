# Using function pointers

## Use case

A common usecase is taken into consideration. Let's say that in the game you have to call for certain functions so that you can display a tool-tip. This need not be done every time the player goes near that item. To achieve something like this we may use a boolean.

For something that should happen once in the game, we are checking a bool for every cycle, forever, to make sure that the tool-tip is not shown again.

## Function pointers

In this situation, we create a function pointer, and call only that function pointer from our game loop. That function pointer will be pointing to a function that displays the tool-tip and, once we are satisfied, we can change it to a different function that does not do this tool-tip thing, but the regular game update.

## Just a variable

Function pointers are just like variables. Use it as much as you like to.