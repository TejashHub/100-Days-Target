number = int(input('enter value: '))

def Fibonacci(number):
    a = 0
    b = 1
    for i in range(2, number + 1):
        temp = a + b
        a = b
        b = temp
        print(b)

result = Fibonacci(number)
