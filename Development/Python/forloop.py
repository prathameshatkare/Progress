stringg=input("Enter your word:").lower()
count= 0
lett=input("Which letter u want to count :").lower()
for letter in stringg:
    if(letter==lett or letter == lett ):
        count+=1
        
print(f"Your word {stringg} contains {count} times letter '{lett}' ")



x=int(input("enter number do you want:"))

for i in range(1,int(input("how many times:"))+1):
    print(i*x,end=" ")

x=int(input("enter number do you want:"))
sum =0
for i in range(1,int(input("how many times:"))+1):
    print(i*x,end=" ")
    sum = sum+(i*x)
    
print()
    
print(f"Sum of the numbers is {sum}")



