# Constraint-Based Integer Sorter

This project implements a numerical search algorithm in C designed to identify specific integers within a bounded range ($x < 100$). It demonstrates an optimization technique where **sorting is achieved through retrieval order** rather than computational swapping.

## 🧮 Mathematical Constraints

The algorithm filters for a set of integers $S$ that satisfy three simultaneous conditions:

1.  **Upper Bound:** $x < 100$
2.  **Parity:** $x \equiv 0 \pmod 2$ (Must be Even)
3.  **Non-Divisibility:** $x \not\equiv 0 \pmod 3$ (Must NOT be divisible by 3)

### Target Sequence
The logic seeks the **first 10 integers** starting from the top of the range (99 downwards).
* *Found:* 98, 94, 92, 88...
* *Output Requirement:* Smallest to Largest.

## ⚙️ Algorithm Logic (The "Reverse-Reverse" Strategy)

Instead of finding numbers from 1 upwards (which is slow) or using a sorting algorithm like Bubble Sort ($O(n^2)$), this algorithm uses a constant-time approach:

1.  **Reverse Search:** Iterates downwards from 100 (`i--`).
2.  **Storage:** Fills the array `array[0...9]` with found numbers (Resulting in Descending Order in memory).
3.  **Reverse Output:** Prints the array from the last index to the first (`j=9` to `0`).
    * *Memory:* `[98, 94, 92 ...]`
    * *Print:* `... 92, 94, 98`
    * **Result:** Ascending Order Output.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o sorter
    ```
2.  Run the executable:
    ```bash
    ./sorter
    ```
3.  **Output:** `70 74 76 80 82 86 88 92 94 98`

---
*This repository demonstrates logical optimization and array indexing techniques in C.*
