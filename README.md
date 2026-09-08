# 🎮 Tic-Tac-Toe Game in C

[![Language](https://img.shields.io/badge/Language-C-blue.svg?style=for-the-badge&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Platform](https://img.shields.io/badge/Platform-Windows%20Console-brightgreen?style=for-the-badge&logo=windows)](https://github.com/SonuSharma2/tictactoe)
[![License](https://img.shields.io/badge/License-MIT-orange.svg?style=for-the-badge)](LICENSE)

> A classic interactive, 2-player console-based **Tic-Tac-Toe** game developed in C, featuring dynamic board rendering, customizable player names, custom symbol selection (`X` or `O`), input validation, and real-time win/draw detection.

---

## 📌 Features

- 👥 **2-Player Multiplayer**: Play locally against a friend in a turn-based match.
- 🏷️ **Custom Player Profiles**: Enter custom names for Player 1 and Player 2.
- ⚔️ **Symbol Selection**: Player 1 chooses `X` or `O`, and Player 2 is automatically assigned the complementary symbol.
- 📊 **Dynamic Board Rendering**: Interactive 3x3 numeric grid updated in real-time in the console.
- 🛡️ **Move Validation**: Prevents invalid moves, overriding occupied squares, and inputs outside 1–9.
- 🏆 **Intelligent Win & Draw Detection**: Evaluates all 8 winning combinations (3 horizontal, 3 vertical, 2 diagonal) after every turn.

---

## 🕹️ Game Board Layout

The game board is mapped to numbers `1` through `9`:

```text
     |     |     
  1  |  2  |  3  
_____|_____|_____
     |     |     
  4  |  5  |  6  
_____|_____|_____
     |     |     
  7  |  8  |  9  
     |     |     
```

---

## 🚀 Getting Started

### Prerequisites
You need a C compiler installed on your system (e.g., **GCC / MinGW**, **Clang**, or **MSVC**).

### 🛠️ Compilation & Execution

#### Option 1: Using GCC (MinGW / Windows Terminal)
```bash
# Clone the repository
git clone https://github.com/SonuSharma2/tictactoe.git

# Navigate to project directory
cd tictactoe

# Compile the source code
gcc main.c -o tictactoe.exe

# Run the game
./tictactoe.exe
```

#### Option 2: Run Pre-compiled Binary (Windows)
Double-click `main.exe` or execute directly from command prompt:
```cmd
main.exe
```

---

## 🧠 Code Architecture

- **`struct player`**: Holds player names and records session data.
- **`void board()`**: Clears the console screen and renders the current 3x3 board with active marks.
- **`int checkwin()`**:
  - Returns `1`: A player has successfully won.
  - Returns `0`: Match ends in a draw (all boxes filled with no winner).
  - Returns `-1`: Game is still in progress.
- **`int main()`**: Orchestrates the main game loop, player turn switching, input validation, and post-game congratulations.

---

## 👥 Contributors

- **[Sonu Sharma](https://github.com/SonuSharma2)**
- **Tejendra**

---

## 📄 License
This project is open source and available under the [MIT License](LICENSE).
