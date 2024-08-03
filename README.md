# Dynamic Programming: Minimum Palindrome Partitioning

This repository contains a solution for decomposing a given string into the minimum number of palindromes using dynamic programming. The problem involves breaking down the string into the fewest possible palindromic substrings.

## Problem Statement

A palindrome is a string that reads the same forwards and backwards. Given an input string `s`, the task is to decompose `s` into the minimum number of palindromes. 

### Example

For the string `bobseesanna`, the minimum number of palindromes required to construct the string is 3, and the palindromes are `bob`, `sees`, and `anna`.

## Solution Approach

The solution employs dynamic programming to efficiently find the minimum number of palindromic partitions. Here is the approach:

1. **Palindrome Check Table**: Create a 2D table `isPalindrome` where `isPalindrome[i][j]` is `true` if the substring `s[i...j]` is a palindrome.

2. **Minimum Partition Table**: Create a table `minCuts` where `minCuts[i]` represents the minimum number of palindromic partitions for the substring `s[0...i]`.

3. **Fill Tables**:
   - Initialize `isPalindrome` such that each single character and two consecutive identical characters are palindromes.
   - For substrings longer than 2 characters, use dynamic programming to fill `isPalindrome`.
   - Populate the `minCuts` table by iterating through the string and using previously computed values to determine the minimum cuts needed for each substring.

## Conclusion

This dynamic programming approach provides an efficient way to find the minimum number of palindromic partitions for a given string. The solution leverages precomputed results to minimize redundant calculations, ensuring optimal performance.

---

Feel free to contribute to this repository by adding more examples, optimizing the code, or providing alternative solutions. Happy coding!
