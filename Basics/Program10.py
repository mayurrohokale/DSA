# calculator in Python

print("Enter the First Number")
No1 = int(input())
No2 = int(input())
print("Enter the operator")
print("1.Addition")
print("2.Subtraction")
print("3.Multiplication")
print("4.Division")
op = int(input())
if op == 1:
    print("Addition of",No1,"and",No2,"is",No1+No2) 
elif op == 2:
    print("Subtraction of",No1,"and",No2,"is",No1-No2)
elif op == 3:
    print("Multiplication of ", No1 ,"and",No2, "is", No1 * No2)
elif op == 4:
    if No2 != 0:
        print("Division of",No1,"and",No2,"is",No1/No2)
    else:
        print("Error! Division by zero is not allowed")
else:
    print("Invalid operator")