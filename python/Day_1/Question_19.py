number = int(input('enter value: '))

result = str(number)

count = 0

for r in result:
    if(len(result) == 2):
        temp = int(r) ** 2
        count += temp

    elif(len(result) == 3):
        temp = int(r) ** 3
        count += temp
    
    elif(len(result) == 4):
        temp = int(r) ** 4
        count += temp
    


if(number == count):
    print(f"{number} is Armstrong number.")
else:
    print(f"{number} is not Armstrong number.")
    