def digit_sum(n):
    if n < 10:
        return n
    return digit_sum(sum(int(d) for d in str(n)))

n = int(input("Enter a number: "))
print(digit_sum(n))
