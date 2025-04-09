import sympy

def is_repeated_pattern_prime(pattern: str, repeat_cnt: int) -> bool:
    
    num_str = pattern * repeat_cnt
    number = int(num_str)
    return sympy.isprime(number)

t = int(input())
for i in range(t):
        
    pattern, repeat_cnt = input().split()
    repeat_cnt = int(repeat_cnt)
    result = is_repeated_pattern_prime(pattern, repeat_cnt)
    if result == False:
        print('NO')
    else:
        print('YES')
