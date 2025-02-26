number = int(input('Number: '))

def convert(number):
    if(number % 2 == 0):
        return f"{number} is even number"
    elif(number % 2 != 0 and number == 1):
        return f"{number} is odd & composite number"
    else:
        return f"{number} is odd number"

result = convert(number)

print(result)
