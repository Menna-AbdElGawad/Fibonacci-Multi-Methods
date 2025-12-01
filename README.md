# Fibonacci Multi Methods

A C++ implementation of the Fibonacci sequence using three different algorithmic approaches: Recursive, Dynamic Programming, and Matrix Exponentiation (Divide & Conquer).

## Overview

This program provides an interactive menu-driven interface to calculate Fibonacci numbers using different algorithms, allowing users to compare performance and understand various computational approaches.

## Features

- **Three Algorithm Implementations:**
  - Recursive Method
  - Dynamic Programming Method
  - Divide & Conquer (Matrix Multiplication) Method
- Interactive command-line menu
- Performance comparison through complexity analysis

## Algorithm Complexity

| Method | Time Complexity | Space Complexity |
|--------|----------------|------------------|
| Recursive | O(2^n) | O(n) |
| Dynamic Programming | O(n) | O(n) |
| Matrix Exponentiation | O(log n) | O(log n) |

## Prerequisites

- C++ compiler with C++11 support or higher
- Standard Template Library (STL)

## Compilation

```bash
g++ -std=c++11 fibonacci.cpp -o fibonacci
```

## Usage

Run the compiled program:

```bash
./fibonacci
```

### Menu Options

```
1. Calculate Fibonacci Series using Recursive Method
2. Calculate Fibonacci Series using Divide and Conquer (Matrix Multiplication)
3. Calculate Fibonacci Series using Dynamic Programming
0. Exit
```

### Example

```
=== Welcome To Fibonnaci Sequance ===
=====================================

Main Menu:
===========
1. Calculate Fibbonaci Series using Recursive Method.
2. Calculate Fibbonaci Series using Divide and Conquer (Matrix Multiplication).
3. Calculate Fibbonaci series using Dynamic Programming.
0. Exit

Please Enter your choice: 3
Please Enter number to calculate: 10
Fibbonaci Series of number 10 is: '55'
```

## Algorithm Details

### 1. Recursive Method
- **Function:** `recursiveFib(int num)`
- Classic recursive implementation
- Simple but inefficient for large numbers
- Best for educational purposes

### 2. Dynamic Programming Method
- **Function:** `dynamicProg(int num)`
- Uses memoization to store previously calculated values
- Linear time complexity
- Good balance between performance and simplicity

### 3. Matrix Exponentiation Method
- **Function:** `fiboMatrix(int num)`
- Uses matrix multiplication with exponentiation by squaring
- Most efficient for large Fibonacci numbers
- Based on the matrix formula:
  ```
  [F(n+1) F(n)  ]   [1 1]^n
  [F(n)   F(n-1)] = [1 0]
  ```

## Performance Recommendations

- **Small numbers (n < 20):** Any method works fine
- **Medium numbers (20 ≤ n < 40):** Use Dynamic Programming or Matrix method
- **Large numbers (n ≥ 40):** Use Matrix Exponentiation method

⚠️ **Warning:** The recursive method becomes extremely slow for n > 40

## Code Structure

```
├── BASIC (constant matrix)
├── recursiveFib() - Recursive implementation
├── dynamicProg() - DP implementation
├── matrixMultip() - Matrix multiplication helper
├── powerMatrix() - Matrix exponentiation helper
├── fiboMatrix() - Matrix-based Fibonacci
├── menu() - Display menu
└── main() - Program entry point
```

## Limitations

- No input validation for negative numbers
- Integer overflow may occur for large Fibonacci numbers (consider using `long long` or arbitrary precision libraries)
- Recursive method has exponential time complexity

## Future Enhancements

- Add input validation
- Support for large numbers using `long long` or BigInteger
- Add timing comparisons between methods
- Implement Binet's formula method
- Add option to display the entire sequence up to n

## License

This project is open source and available for educational purposes.

## Author

Created as a demonstration of different algorithmic approaches to solving the Fibonacci sequence problem.
