# Hangman Game (C++)

This repository contains a simple **Hangman** game written in C++ as part of my internship project.

## 🎮 How the Game Works
- The game randomly selects a word from a predefined list.
- The player must guess the hidden word by entering letters.
- Each wrong guess draws part of the ASCII hangman figure.
- The player has **6 chances** before the game ends.
- Previously guessed letters are tracked to prevent duplicates.

## ✨ Features
- Word pool stored in a C++ `vector<string>`
- Random word selection using `rand()`
- ASCII art hangman display
- Input validation (only letters allowed)
- Simple win/lose conditions

## 🛠️ Requirements
- C++17 or higher
- A standard compiler like `g++` or `clang++`

## 🚀 How to Compile & Run
```bash
g++ -o main main.cpp
./main
