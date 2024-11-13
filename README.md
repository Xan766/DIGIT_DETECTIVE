# 🎮 *Digit Detective: The System Guessing Game* 🎮

## *Overview* 📜

*Digit Detective* is a fun *number-guessing game* where the *system* tries to guess the number you're thinking of, using *recursion* and *binary search*. You provide feedback on each guess, and the system narrows down the possibilities until it finds the correct number. Emojis and playful feedback make the game even more fun! 😎

---

## *How It Works* 🛠️

1. *Think of a number* between 1 and 100 (keep it secret! 🤫).
2. The system will *guess* your number.
3. After each guess, give feedback:
   - *'h'* for *too high* 🔴
   - *'l'* for *too low* 🔽
   - *'c'* for *correct* ✅
4. The system continues making guesses, adjusting its range based on your feedback, until it finds the correct number. ⏳
5. Your *score* is based on how quickly the system guesses your number — fewer guesses = better score! 🏅

---

## *Features* 🌟

- *Recursive Guessing*: Efficient guessing through recursion.
- *Score Calculation*: Higher scores for fewer guesses! 🏆
- *Interactive Feedback*: Emojis 🎉 and playful responses 🤣 to keep things fun!

---

## *Setup Instructions* 📝

1. *Clone the repository*:
   bash
   git clone https://github.com/your-username/digit-detective.git
   

2. *Navigate to the project folder*:
   bash
   cd digit-detective
   

3. *Compile the program*:
   bash
   gcc guessing_game.c -o guessing_game
   

4. *Run the game*:
   bash
   ./guessing_game
   

---

## *Testing & Edge Cases* ✅

- Handles valid inputs: 'h', 'l', 'c'.
- Correctly guesses numbers at the edge (1 and 100).
- Prompts for valid input if the user enters something other than 'h', 'l', or 'c'.

---

## *Contributing* 🤝

Feel free to fork the repo, open issues, or submit pull requests! Contributions are welcome. 😄

---

## *License* 📜

This project is not licensed.

---

*Enjoy playing and let the detective work begin!* 🎯🎉

---

### *End of README*

---

