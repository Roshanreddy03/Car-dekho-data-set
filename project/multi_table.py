print("* Calculator *")

while True:
    number=int(input("Enter a number: "))
    for i in range(1, 11):
        print(f"{number} * {i} = {number*i}")
    
    calculate = input("\nDo you want to calculate again? (y/n): ").lower()
    if calculate != "y":
        print("Thank you.")
        break
