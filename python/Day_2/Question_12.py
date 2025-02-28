number = int(input('enter number: '))

count = 0

for i in range(1, number + 1):
    count += i

average = count / number
print(f"average of {number} numbers {average}")