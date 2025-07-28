stringg=input("Enter your word:").lower()
count= 0
lett=input("Which letter u want to count :").lower()
for letter in stringg:
    if(letter==lett or letter == lett ):
        count+=1
        
print(f"Your word {stringg} contains {count} times letter '{lett}' ")
