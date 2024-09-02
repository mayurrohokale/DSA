#calculator
No1 = 0
No2 = 0
print("Enter the First Number: ")
Number1 = float(input(No1))
print("Enter the Second Number: ")
Number2 = float(input(No2))

operation = 0

print("select the operation that you want to perform")
print("1.Addition")
print("2.Subtraction")
print("3.Multiplication")
print("4.Division")

op = int(input(operation))

if op == 1:
    print("Addition of two numbers is: ", Number1 + Number2)
if op ==2:
    print("Subtraction of two numbers is: ", Number1 - Number2)
if op == 3:
    print("Multiplication of two numbers is: ", Number1 * Number2)
if op == 4:
    print("Division of two numbers is: ", Number1 / Number2)
else:
    print("Invalid operation")


