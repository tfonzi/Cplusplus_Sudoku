<h1>C++ Sudoku Game by Tyler Fonzi</h1>

A game of Sudoku coded with C++ and QT!

<h2>How to play:</h2>
A game is Sudoku is played like this: Given a 9x9 matrix with several numbers filled in, you must write in additional numbers to fill in the matrix. 
However, there are three rules you must follow, each row must contain 1 - 9 without any repeats, each column must contain 1-9 without any repeats, and each 3x3 box must contain 1-9 without any repeats.

<h2>Overview of Game and Features:</h2>

<h3>Main Menu:</h3> Main Menu is the first window of the program. Lets the player select between different sudoku layouts. These layouts are read in through a sudokus.txt file and can be expandable.\

![alt text](https://github.com/tfonzi/Cplusplus_Sudoku/blob/main/MainMenu.PNG)

<h3>Game Window:</h3> This is the game window. The program successfully reads what layout the player selects and imports in into a game instance.  


![alt text](https://github.com/tfonzi/Cplusplus_Sudoku/blob/main/Sudoku%20Game.PNG)

<h3>Features:</h3>
While playing the game, the player has many options that they can do. They can fill/erase cells with values.
They can add/erase notes to each cell to keep track of what the values could be. They can submit to check for success/failure. 
They can ask for a "hint" to nudge them towards a correct solution. The player can also return to the main menu to select a different sudoku game.  


![alt text](https://github.com/tfonzi/Cplusplus_Sudoku/blob/main/Features.PNG)

<h3>Success and Hints:</h3>
When a player completes their sudoku, it is verified for correctness. I implemented a backtracking algorithm that recursively solves a sudoku given it's starting layout. 
This algorithm generates a solution that can be checked against the player's. The algorithm's solution is also checked with an ground truth solution provided by a solutions.txt, similar to sudokus.txt.
The backtracking algorithm's solution is what is used to generate the hint. The hint is manually checking the player's board and making a single cell erase or cell write to make the player's board closer to the solution.  

![alt text](https://github.com/tfonzi/Cplusplus_Sudoku/blob/main/Success.PNG)

<h2>Files:</h2>

<h4>main.c/.h:</h4> 
Main files. These files initializes and starts the QT program.

<h4>sudoku_selector.c/.h:</h4> 
These files make up the starting menu. Reads in data from the txt files, allows user to input a sudoku. Creates sudoku_game instance and sends data to it. Interacts with sudoku_selector.ui to make the main menu window.

<h4>sudoku_game.c/.h:</h4> 
These files make up a sudoko_game instance. This is where the player actually plays sudoku. Interacts with sudoku_game.ui to make the game window.

<h4>sudoku_solver.c/.h:</h4> 
Class files for sudoku_solver object. This object uses a backtracking algorithm to generate a solution. sudoku_game.c creates a sudoku_solver to solve the sudoku that the player chooses.

<h4>sudoku_game.ui/sudoku_selector.ui:</h4> 
These are the UI files that define the layout of the GUI.

<h4>cell.c/.h:</h4> 
Class files for cell object. Cells refer to the 81 squares that makes up a traditional sudoku board.

<h4>sudokus.txt/solutions.txt:</h4> 
These are the data files that contain sudokus and their solutions.

<h2>Installation:</h2> Unfortunately, I am still trying to figure out a way to easily deploy it for others to use, via .exe. As of right now, I can only play it inside of my IDE (QT Creator), doing a build with qMake.

<h2>Future Implementation:</h2>

1. Create a deployable version.

2. Find alternative to current ui_update function. Goals are to make it more dynamic, compact, and scalable.

3. Add some additional features -- like high scores for each puzzle, similar to an arcade.

4. Stylistic changes -- adding color and themeing to the GUI.



