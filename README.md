# Important Algorithmic Solutions & Dynamic Programming Engine 💡

[![C++](https://img.shields.io/badge/C%2B%2B-17-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![License](https://img.shields.io/badge/License-MIT-green.svg?style=flat-square)](LICENSE)
[![Build Status](https://img.shields.io/badge/Compilations-Passing_100%25-brightgreen?style=flat-square)]()

A curated repository of classic and advanced Dynamic Programming (DP) algorithms, memoized recursive patterns, and competitive programming templates in modern C++17.

---

## 📚 Dynamic Programming Algorithms Suite

All solutions are located under `DP/DP IN C++/` and tested against strict standard constraints.

| Algorithm | Problem / Source | Recurrence Relation / Strategy | Time Complexity | Space Complexity |
|---|---|---|---|---|
| **0/1 Knapsack 1** | AtCoder DP D | Memoized recursion with state `dp[ind][wt_left]` | $O(N \cdot W)$ | $O(N \cdot W)$ |
| **0/1 Knapsack 2** | AtCoder DP E | Value-indexed state `dp[ind][val]` (for $W \le 10^9$) | $O(N \cdot \sum V)$ | $O(N \cdot \sum V)$ |
| **Coin Change** | Classic DP | Minimum coins / combinations to reach target | $O(N \cdot \text{amount})$ | $O(\text{amount})$ |
| **Frog Jump 1** | AtCoder DP A | 1-step or 2-step energy minimization | $O(N)$ | $O(N)$ |
| **Frog Jump 2** | AtCoder DP B | $K$-step generalized jump minimization | $O(N \cdot K)$ | $O(N)$ |
| **Longest Common Subsequence (LCS)** | Classic DP | Match/Mismatch diagonal traversal | $O(N \cdot M)$ | $O(N \cdot M)$ |
| **Longest Increasing Subsequence (LIS)** | Classic DP | Transition over preceding smaller elements | $O(N^2)$ (DP) / $O(N \log N)$ | $O(N)$ |
| **Rod Cutting** | Classic DP | Maximize revenue from cutting rod of length $L$ | $O(L^2)$ | $O(L)$ |
| **Subset Sum Partition** | Classic DP | Equal sum partition decision problem | $O(N \cdot \text{sum})$ | $O(N \cdot \text{sum})$ |

---

## 🛠️ Compilation & Execution

Compile any algorithm with standard C++17 flags:

```bash
# Example: Compile Knapsack 2
g++ -O2 -std=c++17 "DP/DP IN C++/knapsack2.cpp" -o knapsack2.exe
./knapsack2.exe

# Example: Compile Frog Jump 2
g++ -O2 -std=c++17 "DP/DP IN C++/frog_jump2.cpp" -o frog_jump2.exe
./frog_jump2.exe
```

---

## 👨‍💻 Author
**Tamal Kanti Sarker**  
Department of Computer Science and Engineering, University of Dhaka  
GitHub: [@tamalkantisarker](https://github.com/tamalkantisarker)
