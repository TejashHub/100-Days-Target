number = int(input('Your Number: '))

def check(number):
    for i in range(2, number - 1):
        if(number % i == 0):
            return f"{number} is not prime number"
    return f"{number} is prime number"

result = check(number)

print(result)