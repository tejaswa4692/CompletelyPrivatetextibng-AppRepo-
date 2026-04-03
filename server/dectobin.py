dec = int(input("Enter an integer: "))

def dectobin(num):
    binary = ""
    process = num
    while process > 0:
        if process % 2 == 0:
            print(process)
            process = process / 2
            binary += "0"
        else:
            print(process)
            process = round(process / 2)
            binary += "1"
    return binary

num = dectobin(dec)

print(num)