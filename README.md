# Tic-Tac-Toe Game

A classic Tic-Tac-Toe implementation available in two formats: a C-based console application and a Python GUI version using Tkinter. Play against friends in this timeless game of X's and O's where strategy and foresight lead to victory.

## Demonstration video

[![Tic-Tac-Toe Demo](https://img.youtube.com/vi/Av4hY6g4WUM/0.jpg)](https://www.youtube.com/watch?v=Av4hY6g4WUM)

## Overview

This project offers two ways to enjoy the classic game:
- **Console Version (C)**: Text-based interface with coordinate inputs
- **GUI Version (Python)**: Modern clickable interface with visual feedback

## C Version (TicTacTow.c)

### Features
- Command-line interface
- Two-player gameplay (X vs O)
- Visual representation of the game board
- Input validation
- Win detection
- Draw detection

### How to Play
1. Compile the C program:
   ```
   gcc TicTacTow.c -o tictactoe
   ```
2. Run the executable:
   ```
   ./tictactoe
   ```
3. Players take turns entering their moves as row and column coordinates (1-3)
4. The game will announce the winner or declare a draw

### Implementation Details
- Uses a 2D array to represent the game board
- Simple console output for visualization
- Basic input validation to prevent invalid moves
- Win checking for rows, columns, and diagonals

## Python Version (tictactow.py)

### Features
- Graphical user interface using Tkinter
- Two-player gameplay (X vs O)
- Click-based interaction
- Color-coded player moves (X in blue, O in red)
- Status updates during gameplay
- Win/draw detection with popup messages
- Reset game functionality

### How to Play
1. Ensure Python and Tkinter are installed
2. Run the Python script:
   ```
   python tictactow.py
   ```
3. Players take turns clicking on the empty cells
4. The game will announce the winner via a popup message or declare a draw
5. Click "Reset Game" to start a new game

### Implementation Details
- Object-oriented design with a `TicTacToe` class
- Uses Tkinter for the graphical interface
- Game board represented as a list of 9 elements
- Win checking for all possible combinations
- Status display shows current player's turn

## Requirements

### C Version
- C compiler (gcc recommended)
- Standard C libraries

### Python Version
- Python 3.x
- Tkinter library (usually comes with Python)

## Usage Examples

### C Version
```
***INSTRUCTIONS***
You have to play this game in this way.
You have to put your response like below.
11 12 13 
21 22 23 
31 32 33 

  1 2 3
1  | | 
  -----
2  | | 
  -----
3  | | 
Player X, enter your move (row, col): 1 1
```

### Python Version
The Python version provides a clickable interface with a status indicator and a reset button.

## To-Do
- Add single-player mode with AI opponent
- Implement game statistics tracking
- Add difficulty levels for AI opponent
- Improve visual design of the GUI version
