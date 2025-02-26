celsius = int(input('celsius: '))

def convertor(celsius):
    return f"fahrenheit: {( 9/5 * celsius ) + 32}"

result = convertor(celsius)

print(result)

