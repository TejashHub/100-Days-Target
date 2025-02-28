str1 = input('string 1: ')
str2 = input('string 2: ')

def checkAmagam(str1, str2):
    str1 = str1.replace(" ","").lower()
    str2 = str2.replace(" ","").lower()

    if(sorted(str1) == sorted(str2)):
        print('Your string is anagram')
    else:
        print('Your string is not anagram')

result = checkAmagam(str1, str2)
