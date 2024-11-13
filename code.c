#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to recursively guess the number and give feedback
int recursive_guessing(int low, int high, int attempts) {
    int mid;

    // Base case: If the range is narrowed down to one number
    if (low == high) {
        printf("🎉 🎯 BINGO! The system guessed the number %d! 🎉 😎\n", low);
        // Score based on fewer attempts
        int score = 101 - attempts;  // Higher score for fewer attempts
        printf("🏅 WOW! Your score is: %d 🏅 (The faster, the better!) 🚀\n", score);
        return score;
    }

    // Recursive case: Guess the middle number
    mid = (low + high) / 2;
    printf("🤔 Hmm... Is your number %d? (Enter 'h' for too high, 'l' for too low, 'c' for correct): ", mid);

    // Ask for feedback
    char feedback;
    scanf(" %c", &feedback);  // Notice the space before %c to consume any leftover newline

    attempts++;  // Increment the number of attempts

    // Move the range based on feedback
    if (feedback == 'h' || feedback == 'H') {
        // The number is smaller, adjust the high range
        printf("😅 Oops! Too high! Lowering my guess... Let's try again! 🔻\n");
        return recursive_guessing(low, mid - 1, attempts);
    } else if (feedback == 'l' || feedback == 'L') {
        // The number is larger, adjust the low range
        printf("😅 Too low! Raising my guess... Let's aim higher! 🔼\n");
        return recursive_guessing(mid + 1, high, attempts);
    } else if (feedback == 'c' || feedback == 'C') {
        // Correct guess
        printf("🎉 Yesss! I nailed it! 🎯 The number is indeed %d! 🎉\n", mid);
        // Score is based on attempts taken
        int score = 101 - attempts;
        printf("🏅 Your score is: %d 🏅 (Nice job, speedster!) 🏎️💨\n", score);
        return score;
    } else {
        // Invalid input handling
        printf("\n🚨 Whoops! Invalid input! 😜 Please respond with 'h', 'l', or 'c'. Let's try again! 🔄\n");
        return recursive_guessing(low, high, attempts);
    }
}

int main() {
    int low = 1, high = 100;
    int attempts = 0;

    // Game introduction with fun emojis and text
    printf("🎉 Welcome to the 'System Guessing Challenge'! 🎉\n\n");
    printf("🎲 Here's how the game works:\n");
    printf("1️⃣ Think of a number between %d and %d in your mind (no peeking! 😏)\n", low, high);
    printf("2️⃣ The system will guess your number, and you’ll give me feedback.\n");
    printf("3️⃣ If I guess too high, you’ll tell me with 'h'. If I guess too low, you'll say 'l'.\n");
    printf("4️⃣ If I guess your number, say 'c'! 🏆\n");
    printf("5️⃣ The faster I guess, the better your score! 🏁\n\n");

    printf("👀 Ready? Let's get started! Think of a number between %d and %d... I’ll guess it in no time! 🚀🎯\n\n", low, high);

    // Start the guessing game
    recursive_guessing(low, high, attempts);

    return 0;
}
