lower = int(input('enter lower limit: '))
upper = int(input('enter upper limit: '))

for number in range(lower, upper + 1):
    if(number > 1):
        for i in range(2, number):
            if(number % i == 0):
                break
        else:
            print(number)