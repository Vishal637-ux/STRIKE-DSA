You are given a non-negative integer x. Your task is to compute and return the square root of x, rounded down to the nearest integer.

The returned integer should be non-negative. You must not use any built-in exponent function or operator (such as pow() or **) to solve this problem.

Example 1:
Input: x = 4
Output: 2
Explanation:
The square root of 4 is exactly 2.
Since 2 × 2 = 4, the answer is 2
Example 2:
Input: x = 8
Output: 2
Explanation:
The square root of 8 is approximately 2.
828.
Since we need to round down to the nearest integer, the answer is 2.
Note that 2 × 2 = 4 (less than 8) and 3 × 3 = 9 (greater than 8), so 2 is correct.
Constraints:
• 0 ≤ x ≤ 2^31 - 1

Topics
ef mySqrt(x: int) -> int:
    """
    Compute the square root of x, rounded down to nearest integer.
    Uses binary search to find the answer.
    
    Time Complexity: O(log x)
    Space Complexity: O(1)
    """
    # Special cases
    if x == 0 or x == 1:
        return x
    
    # Binary search in range [1, x]
    left, right = 1, x
    result = 0
    
    while left <= right:
        mid = left + (right - left) // 2
        
        # Check if mid is the square root
        # Use mid <= x // mid instead of mid * mid <= x to avoid overflow
        if mid <= x // mid:
            result = mid  # mid could be the answer
            left = mid + 1  # Try to find a larger value
        else:
            right = mid - 1  # mid is too large
    
    return result


# Test cases
test_cases = [
    (4, 2),
    (8, 2),
    (0, 0),
    (1, 1),
    (16, 4),
    (17, 4),
    (2147483647, 46340)  # Edge case: max 32-bit int
]

print("Testing mySqrt function:")
print("-" * 50)
for x, expected in test_cases:
    result = mySqrt(x)
    status = "✓" if result == expected else "✗"
    print(f"{status} Input: {x:>10} | Output: {result:>5} | Expected: {expected:>5}")
    if result != expected:
        print(f"  ERROR: Got {result}, expected {expected}")

# Verify correctness
print("\n" + "=" * 50)
print("Verification for x = 8:")
result = mySqrt(8)
print(f"sqrt(8) = {result}")
print(f"{result} × {result} = {result * result} (≤ 8)")
print(f"{result + 