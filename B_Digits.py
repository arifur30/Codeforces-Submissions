
import sys
input = sys.stdin.read
data = input().splitlines()
    
t = int(data[0])  # Number of test cases
results = []
    
for i in range(1, t + 1):
    n, d = map(int, data[i].split())
    odd_digits = [1, 3, 5, 7, 9]
    divisible_odds = []
        
        # Calculate n! % k for each odd digit k
    for k in odd_digits:
        n_factorial_mod_k = 1
        for j in range(1, n + 1):
            n_factorial_mod_k = (n_factorial_mod_k * j) % k
            
            # Check if d^n! is divisible by k
        if pow(d, n_factorial_mod_k, k) == 0:
            divisible_odds.append(k)
        
    results.append(" ".join(map(str, divisible_odds)))
    
    # Print all results
sys.stdout.write("\n".join(results) + "\n")