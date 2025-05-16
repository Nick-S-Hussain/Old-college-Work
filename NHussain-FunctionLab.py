import math
def AddFunc(x):
    if(len(x)>5):
        print("Too many Arguments")
        userInput = input("Enter how many numbers you want: ")
        userInput = int(userInput)
        addList=[]
        for i in range(userInput):
            listAddTo = input("Number "+str(i)+": ")
            listAddTo = int(listAddTo)
            addList.append(listAddTo)
            AddFunc(addList)
    else:
        sum = 0
        for t in x:
            sum = sum + t
        return sum    

def SubFunc(subList):
    subTotal = 0
    for sub in range(len(subList)):
        if(sub == 0):
            subTotal = subList[sub]
        else:
            subTotal-=subList[sub]    
    return subTotal

def MultiFunc(multiList):
    multiTotal = 1
    for multi in multiList:
        multiTotal*=multi
    return multiTotal

def DividFunc(div1,div2):
    if(div2==0):
        print("The second number is a 0 can not divide")
        newDiv = input("Enter a new second nubmer: ")
        newDiv = int(newDiv)
        DividFunc(div1,newDiv)
    else:
        divTotal = float(div1)/float(div2)
        return divTotal    

def LogFunc(log1):
    #I had to import the math library to simplify this function
    baseNum = input("What base of the log do you want to use: ")
    if(baseNum == "e"):
        logTotal = math.log(log1)
    else:
        baseNum = int(baseNum)
        logTotal = math.log(log1,baseNum)
    return logTotal

def powerFunc(pow1):
    powTo = input("What power to you want to raise "+ str(pow1)+ " too: ")
    powTo = int(powTo)
    powTotal = 1
    for num in range(powTo):
        powTotal = pow1*powTotal
    return powTotal

def Pythag():
    hyp = input("Are you trying to solve for the hypotenuse: ")
    hyp.lower()
    if(hyp == 'yes' or hyp == 'y'):
        a = input("Enter value of side 1: ")
        a = float(a)
        b = float(input("Enter value of side 2: "))
        cSqaure = (a*a) + (b*b)
        c = math.sqrt(cSqaure)
        print("The hypotenuse is "+str(c))
    else:
        c = float(input("Enter the hypotenuse value: "))
        a = float(input("Enter the known side value: "))
        bSqaure = (c*c) - (a*a)
        b = math.sqrt(bSqaure)
        print("The missing side value is "+ str(b))

def Factorial(fac1):
    factAmount = 1
    if(fac1==0):
        return 1
    else:
        return fac1*Factorial(fac1-1)    
    

userOpTrys = 1
runTotal = 0
while(userOpTrys <=3):
    
    print("1-Addition")
    print("2-Subtraction")
    print("3-Multiplication")
    print("4-Division")
    #Only using the continue values for func 1-4
    print("5-Log")
    print("6-Power")
    print("7-Solve Pythagorean Theorem")
    print("8-Factorial")
    print("9-Quit")
    oper = int(input("Pick operation number would you like to do: "))
    if(oper == 1):
        listForAdd = []
        itemNum = int(input("How many numbers are you going to be adding: "))
        for i in range(itemNum):
            num = int(input("Enter a number: "))
            listForAdd.append(num)
        addTotal = AddFunc(listForAdd)
        print("The sum for all the numbers you entered is "+ str(addTotal))
        if(userOpTrys > 1):
            runTotal+=addTotal
        contCalc = input("Do you want to use this number in more calculations: ")
        contCalc.lower()
        if(contCalc == "no" or contCalc == "n"):
            print("\n")
        else:
            userOpTrys+=1
            runTotal+=addTotal
    elif(oper == 2):
        subList = []
        for i in range(3):
            subAmount = int(input("Enter number: "))
            subList.append(subAmount)
        subSum = SubFunc(subList) 
        print("The subtraction of the numbers you entered is: " + str(subSum))
        if(userOpTrys > 1):
            runTotal-=subSum
        contCalc = input("Do you want to use this number in more calculations: ")
        contCalc.lower()
        if(contCalc == "no" or contCalc == "n"):
            print("\n")
        else:
            userOpTrys+=1
            runTotal-=subSum
    elif(oper == 3):
        multiList = []
        for i in range(4):
            multiAmount = int(input("Enter number: "))
            multiList.append(multiAmount)            
        multiSum = MultiFunc(multiList) 
        print("The multiplication of the numbers you entered is :" + str(multiSum))
        if(userOpTrys > 1):
            runTotal*=multiSum
        contCalc = input("Do you want to use this number in more calculations: ")
        contCalc.lower()
        if(contCalc == "no" or contCalc == "n"):
            print("\n")
        else:
            userOpTrys+=1
            runTotal*=multiSum
    elif(oper == 4):
        div1 = int(input("Enter the numerator: "))
        div2 = int(input("Enter the denominator: "))
        divSum = DividFunc(div1,div2)
        print("The Division of the 2 numbers enters is : "+ str(divSum))
        if(userOpTrys > 1):
            runTotal/=divSum
        contCalc = input("Do you want to use this number in more calculations: ")
        contCalc.lower()
        if(contCalc == "no" or contCalc == "n"):
            print("\n")
        else:
            userOpTrys+=1
            runTotal= runTotal/divSum            
    elif(oper == 5):
        logTo = int(input("What number do you want to log: "))
        logTotal = LogFunc(logTo)
        print("The log Total is "+ str(logTotal))
    elif(oper == 6):
        powNum = int(input("Enter the number you want to use the exponent with: "))
        powSum = powerFunc(powNum)
        print("The power of the number you entered is "+ str(powSum))
    elif(oper == 7):
        Pythag()
    elif(oper == 8):    
        factNum = int(input("Enter the number you want to find factorial of "))
        factSum = Factorial(factNum)
        print("The factorial is "+ str(factSum))
    elif(oper == 9):
        if(runTotal !=0):
            print("Running Total " + str(runTotal))
        userOpTrys = 5    





    
