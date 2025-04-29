# 🧵 clsString - Advanced String Manipulation Library

## 📚 Overview

`clsString` is a custom C++ class designed to enhance the basic string operations provided by the C++ Standard Library.  
It introduces a wide range of functionalities, including case conversion, word counting, text cleaning, trimming, reversing, and more — making string manipulation easier, more flexible, and reusable.

---

## 🚀 Features

- ✅ Count words, letters (capital/small), vowels, specific letters
- ✅ Transform text case (uppercase, lowercase, capitalize first letter, invert case)
- ✅ Print vowels, first letters of words
- ✅ Trim spaces (left, right, both sides)
- ✅ Split and join strings with a custom delimiter
- ✅ Reverse words in a sentence
- ✅ Replace specific words in a string
- ✅ Remove punctuations from a string
- ✅ Built-in flexibility: static and instance methods

---

## 🛠️ Project Structure

| File          | Description |
|---------------|-------------|
| `clsString.h` | Implementation of the `clsString` class with all string utilities |
| `main.cpp`    | Demo file with examples for each method |

---

## 🏗️ How to Build and Run

### Prerequisites

- C++ Compiler (e.g., GCC, Clang, MSVC)
- C++11 standard or higher recommended

### Build Instructions

```bash
g++ main.cpp -o clsStringApp
./clsStringApp

---

📜 Examples of Usage

```
clsString myString("Hello World");

cout << myString.CountWords();             // Output: 2
cout << myString.CountVowels();             // Output: 3
cout << myString.UpperAllString();           // Output: HELLO WORLD
cout << myString.LowerAllString();           // Output: hello world
cout << myString.Trim();                     // Remove spaces
cout << myString.ReplaceWordInStringUsingBuiltInFunction("World", "Everyone");
```

---

🎯 Highlights of Some Methods
```

Method | Description
CountWords() | Count number of words
UpperAllString() | Convert all characters to uppercase
LowerAllString() | Convert all characters to lowercase
InvertAllStringLetterCase() | Invert the case of each letter
PrintFirstLetterOfEachWord() | Print first letter of each word
TrimLeft(), TrimRight(), Trim() | Remove spaces from sides
SplitString(delim) | Split the string into a vector of words
JoinString(vector<string>, delim) | Join words into a single string
ReverseWordsInString() | Reverse the order of words
ReplaceWordInStringUsingSplit() | Replace words with/without case matching

```
