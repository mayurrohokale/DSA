# check pallindrome

print("Enter the number to check pallindrome: ")
num = int(input())
original = num
reverse_num = 0

while num != 0:
    digit = num % 10
    reverse_num = reverse_num * 10 + digit
    num //= 10

print(reverse_num)

if(original == reverse_num):
    print("The number is pallindrome")
else:
    print("Number is not Palllindrome")
