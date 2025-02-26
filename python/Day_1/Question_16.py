number = int(input('enter value: '))

count = 1

for i in range(1, number + 1):
    count *= i 

print(f'factorial of {number} is {count}')