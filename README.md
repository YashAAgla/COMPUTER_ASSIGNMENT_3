# ✂️🪨📄 Stone, Paper, Scissor Game (C Language)

## 📌 Overview
This is a simple **Stone, Paper, Scissor** game written in C.  
The player competes against the computer, which makes a random choice.  
The program announces the winner based on the classic rules of the game.

---

## 🚀 Features
- **Player Input**: Choose between Stone (0), Paper (1), or Scissor (2).  
- **Computer Choice**: Randomly generated using `rand()`.  
- **Name Prompt**: Player enters their name before starting the game.  
- **Result Display**: Shows both player and computer choices, then declares the winner or tie.  

---

## 🛠️ How It Works
1. Player enters their name.  
2. Player selects a choice:
   - `0` → Stone  
   - `1` → Paper  
   - `2` → Scissor  
3. Computer randomly selects one of the three options.  
4. The program compares both choices and prints:
   - **Player Wins!**  
   - **Computer Wins!**  
   - **It's Tie!**  

---

## ▶️ How to Run
1. Save the code in a file, e.g., `main.c`.  
2. Compile using GCC:
   ```bash
   gcc main.c -o sps