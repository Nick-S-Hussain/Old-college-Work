# -*- coding: utf-8 -*-
"""
Created on Wed Mar 17 17:02:20 2021

@author: nick


var1 = ["1","2","3"]
print(var1[2])

chant1 = 'Guy Fieri, '

chant2 = 'Please let the food not be hairy.'

print(chant1 + chant1 + "\n" +chant2.lower())

Words = 'Why would you eat a pizza with pineapples?'

for i in range(len(Words)):
    if(i >= Words.find('pizza')):
        print(Words[i])



sick = True
missClassDays = 1
if(sick == True and missClassDays < 4):
    print("Excused from class")
else:
    print("Come to class")
    



userInput = input('Enter a  # ')

print( float(userInput)/2 )

x = ['Herp', 'Derp', 54, ';)'  ]

while (float(userInput) > 0):
    for n in x:
        print(n)
    userInput = -1    



var1 = 0
print(bool(var1)) 
  
var2 = 1
print(bool(var2)) 
  
var3 = (145623464563456/138674539)
print(bool(var3))

"""
x = 0
num1 = [12,18,95]
numCopy = []

while x < 2:
    print(num1)
    userInput = input("Pick a number from that list: ")
    userInput = int(userInput)
    numCopy.append(userInput)
    for i in num1:
        if(i == userInput):
            num1.remove(i)
    x+=1        
numAdd = numCopy[0]+numCopy[1]
print("Number 1 choice plus number 2 choice is "+ str(numAdd)) 
numSub = numCopy[0]-numCopy[1] 
print("Number 1 choice minus number 2 choice is "+ str(numSub))   
    
    
    
