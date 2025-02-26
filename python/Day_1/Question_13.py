import random 

def generate():
    result = random.random() * 100
    return int(result)

result = generate()

print(result)