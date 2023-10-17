# User Documentation

## Introduction
This is an introduction guide to our game of Tetris. It is a classic puzzle video game that involves fitting falling geometric shapes (Tetriminos) into a grid to create complete rows, which then disappear.

## On building the code
After you've successfully built the code, a Main Menu opens that gives you three play options: 
1. **Zen Mode** : This is a non-timed version where user can play for as long as they want until the game finishes. They are also given the option to **Quit**  the game or **Quit and Save** if they'd like to save their progress.
2. **Time Attack**: This is a 120 seconds timed game wherein the user has to score as much as they can in 120 seconds.
3. **First Forty Lines Clearance**: In this, the user has to clear 40 lines as fast as they can. along with the timer, you get a **Lines** prompter which tells you the number of lines cleared so far. 

In all the modes, the user also gets an option to go back to the **Main Menu** in case the they changes their about the mode they want to play.

## Controls
The game is pretty intuitive, wherein the tetrominoes can be controlled as follows: 
* Right arrow key: move block right
* Left arrow key: move block left
* Down arrow key: move block one row down
* Spacebar: force the block to fall directly.

## More on the 3 Modes

### Zen Mode:

This is the classic tetris mode where you can play till the entire grid fills up. The speed to fall of Tetrominos increase after every 5 lines are cleared.
#### Game options:
Will have 2 options to choose from either start a new game or load a saved game.
#### Game end:
The game will run till the grid fills up and there is no space for the new block to spawn
#### Scoring:
There is a score_multiplier(SM) that increases the score every time the block fall speed increases.
* +1 ; as the block descends each row
* +20; for using force fall (SpaceBar)
* +300*SM; for every line cleared
* +500*SM; for every line cleared if 4 lines cleared together

### Time Attack:
The user gets 120 seconds to score as much as they can.



#### Game end:
If 120 seconds are over or grid fills up and there is no space for the new block to spawn

#### Scoring:
* +20; for using force fall
* +200; if one line cleared
* +300; per line if 2 lines cleared together
* +400; per line if 3 lines cleared together
* +600; per line if 4 lines cleared together


### First forty lines cleared mode:
Aim is to clear the 40 lines as fast as possible

#### Game end: 
The game ends when 40 lines cleared or grid fills up and there is no space for the new block to spawn.

#### Scoring:
* Time taken is itself the score

