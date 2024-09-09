#print Even Odd 

No = 0
print("Enter a Number upto print Even and odd numbers")
Number = int(input(No))
i = 0
while(Number != 0):
    if(Number %2 == 0):
        print(Number, "is Even")
    else:
        print(Number, "isOdd")

