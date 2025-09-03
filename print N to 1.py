def print_desc(n):
    if n == 0:
        return
    print(n)
    print_desc(n - 1)

n = int(input("Enter a number: "))
print_desc(n)
