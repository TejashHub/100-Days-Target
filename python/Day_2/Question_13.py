n = int(input('Enter a positive integer: '))

sum = 0

for i in range(1, n + 1):
    sum += i

print(f"The sum of the first {n} positive numbers is {sum}")