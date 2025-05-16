"""
Im going to try ot figure out how to get the gui working so its all buttons so I'm keeping this here now
import tkinter as tk

window = tk.Tk()
label = tk.Label(text = "Hello, Tkinter", fg = "red", bg = "black")
label.pack()
window.mainloop()
"""

compMove = "X"
humanMove = "O"
#0-human 1-computer
move = 0
#1-tie,2-human, 3-comp
win = 0
board = [" "," "," "," "," "," "," ",
        " "," "," "," "," "," "," ",
        " "," "," "," "," "," "," ",
        " "," "," "," "," "," "," ",
        " "," "," "," "," "," "," ",
        " "," "," "," "," "," "," ",
        " "," "," "," "," "," "," ",
        " "," "," "," "," "," ",]

def boardDisplay():
    column = 0
    for i in board:
        if(column <=6):
            print(i, end=" | ")
            column+=1
        else:
            print("\n----------------------------")
            column = 0    
    print("\n----------------------------")
    print("\n1   2   3   4   5   6   7")


 
"""
-Skipping columns for formatting purposes and not to have ghosted values
C!-!,7,15,23,31,39,47
C1-0,8,16,24,32,40,48
C2-1,9,17,25,33,41,49
C3-2,10,18,26,34,42,50
C4-3,11,19,27,35,43,51
C5-4,12,20,28,36,44,52
C6-5,13,21,29,37,45,53
C7-6,14,22,30,38,46,54
"""                    
boardDisplay()
    
def colmCleared(colmChecker):
    rowNum = 0
    if(colmChecker == 0):
        for empty in range(0,len(board),8):
            if(board[empty] == " " and empty != 48):
                rowNum+=1
            elif(board[empty]==humanMove or board[empty]==compMove):
                if(empty ==0):
                    print("Column is filled")
                    playerMove = input("New Column number: ")
                    playerMove = int(playerMove) -1
                    placer = colmCleared(playerMove)
                    placeMove(placer, playerMove)  
                elif(empty == 48):
                    rowNum-=1
                    return rowNum
            elif(board[empty]==" " and empty == 48):
                return rowNum 
    elif(colmChecker == 1):
        for empty in range(1,len(board),8):
            if(board[empty] == " " and empty != 49):
                rowNum+=1
            elif(board[empty]==humanMove or board[empty]==compMove):
                if(empty ==1):
                    print("Column is filled,")
                    playerMove = input("New Column number: ")
                    playerMove = int(playerMove) -1
                    placer = colmCleared(playerMove)
                    placeMove(placer, playerMove) 
                elif(empty == 49):
                    rowNum-=1
                    return rowNum
            elif(board[empty]==" " and empty == 49):
                return rowNum
    elif(colmChecker == 2):
        for empty in range(2,len(board),8):
            if(board[empty] == " " and empty != 50):
                rowNum+=1
            elif(board[empty]==humanMove or board[empty]==compMove):
                if(empty ==2):
                    print("Column is filled,")
                    playerMove = input("New Column number: ")
                    playerMove = int(playerMove) -1
                    placer = colmCleared(playerMove)
                    placeMove(placer, playerMove)  
                elif(empty == 50):
                    rowNum-=1
                    return rowNum
            elif(board[empty]==" " and empty == 50):
                return rowNum                                    
    elif(colmChecker == 3):
        for empty in range(3,len(board),8):
            if(board[empty] == " " and empty != 51):
                rowNum+=1
            elif(board[empty]==humanMove or board[empty]==compMove):
                if(empty ==3):
                    print("Column is filled,")
                    playerMove = input("New Column number: ")
                    playerMove = int(playerMove) -1
                    placer = colmCleared(playerMove)
                    placeMove(placer, playerMove)  
                elif(empty == 51):
                    rowNum-=1
                    return rowNum
            elif(board[empty]==" " and empty == 51):
                return rowNum              
    elif(colmChecker == 4):
        for empty in range(4,len(board),8):
            if(board[empty] == " " and empty != 52):
                rowNum+=1
            elif(board[empty]==humanMove or board[empty]==compMove):
                if(empty ==4):
                    print("Column is filled,")
                    playerMove = input("New Column number: ")
                    playerMove = int(playerMove) -1
                    placer = colmCleared(playerMove)
                    placeMove(placer, playerMove)  
                elif(empty == 52):
                    rowNum-=1
                    return rowNum
            elif(board[empty]==" " and empty == 52):
                return rowNum
    elif(colmChecker == 5):
        for empty in range(5,len(board),8):
            if(board[empty] == " " and empty != 53):
                rowNum+=1
            elif(board[empty]==humanMove or board[empty]==compMove):
                if(empty ==5):
                    print("Column is filled,")
                    playerMove = input("New Column number: ")
                    playerMove = int(playerMove) -1
                    placer = colmCleared(playerMove)
                    placeMove(placer, playerMove) 
                elif(empty == 53):
                    rowNum-=1
                    return rowNum
            elif(board[empty]==" " and empty == 53):
                return rowNum
    elif(colmChecker == 6):
        for empty in range(6,len(board),8):
            if(board[empty] == " " and empty != 54):
                rowNum+=1
            elif(board[empty]==humanMove or board[empty]==compMove):
                if(empty ==6):
                    print("Column is filled,")
                    playerMove = input("New Column number: ")
                    playerMove = int(playerMove) -1
                    placer = colmCleared(playerMove)
                    placeMove(placer, playerMove)  
                elif(empty == 54):
                    rowNum-=1
                    return rowNum
            elif(board[empty]==" " and empty == 54):
                return rowNum

def placeMove(row,column):
    if(column == 0):
        if(row==0):
            if(move==0):
                board[0]=humanMove
            elif(move==1):
                board[0]=compMove
        elif(row==1):
            if(move==0):
                board[8]=humanMove
            elif(move==1):
                board[8]=compMove
        elif(row==2):
            if(move==0):
                board[16]=humanMove
            elif(move==1):
                board[16]=compMove    
        elif(row==3):
            if(move==0):
                board[24]=humanMove
            elif(move==1):
                board[24]=compMove
        elif(row==4):
            if(move==0):
                board[32]=humanMove
            elif(move==1):
                board[32]=compMove
        elif(row==5):
            if(move==0):
                board[40]=humanMove
            elif(move==1):
                board[40]=compMove
        elif(row==6):
            if(move==0):
                board[48]=humanMove
            elif(move==1):
                board[48]=compMove                                                                
    elif(column == 1):
        if(row==0):
            if(move==0):
                board[1]=humanMove
            elif(move==1):
                board[1]=compMove
        elif(row==1):
            if(move==0):
                board[9]=humanMove
            elif(move==1):
                board[9]=compMove
        elif(row==2):
            if(move==0):
                board[17]=humanMove
            elif(move==1):
                board[17]=compMove    
        elif(row==3):
            if(move==0):
                board[25]=humanMove
            elif(move==1):
                board[25]=compMove
        elif(row==4):
            if(move==0):
                board[33]=humanMove
            elif(move==1):
                board[33]=compMove
        elif(row==5):
            if(move==0):
                board[41]=humanMove
            elif(move==1):
                board[41]=compMove
        elif(row==6):
            if(move==0):
                board[49]=humanMove
            elif(move==1):
                board[49]=compMove
    elif(column == 2):
        if(row==0):
            if(move==0):
                board[2]=humanMove
            elif(move==1):
                board[2]=compMove
        elif(row==1):
            if(move==0):
                board[10]=humanMove
            elif(move==1):
                board[10]=compMove
        elif(row==2):
            if(move==0):
                board[18]=humanMove
            elif(move==1):
                board[18]=compMove    
        elif(row==3):
            if(move==0):
                board[26]=humanMove
            elif(move==1):
                board[26]=compMove
        elif(row==4):
            if(move==0):
                board[34]=humanMove
            elif(move==1):
                board[34]=compMove
        elif(row==5):
            if(move==0):
                board[42]=humanMove
            elif(move==1):
                board[42]=compMove
        elif(row==6):
            if(move==0):
                board[50]=humanMove
            elif(move==1):
                board[50]=compMove
    elif(column == 3):
        if(row==0):
            if(move==0):
                board[3]=humanMove
            elif(move==1):
                board[3]=compMove
        elif(row==1):
            if(move==0):
                board[11]=humanMove
            elif(move==1):
                board[11]=compMove
        elif(row==2):
            if(move==0):
                board[19]=humanMove
            elif(move==1):
                board[19]=compMove    
        elif(row==3):
            if(move==0):
                board[27]=humanMove
            elif(move==1):
                board[27]=compMove
        elif(row==4):
            if(move==0):
                board[35]=humanMove
            elif(move==1):
                board[35]=compMove
        elif(row==5):
            if(move==0):
                board[43]=humanMove
            elif(move==1):
                board[43]=compMove
        elif(row==6):
            if(move==0):
                board[51]=humanMove
            elif(move==1):
                board[51]=compMove
    elif(column == 4):
        if(row==0):
            if(move==0):
                board[4]=humanMove
            elif(move==1):
                board[4]=compMove
        elif(row==1):
            if(move==0):
                board[12]=humanMove
            elif(move==1):
                board[12]=compMove
        elif(row==2):
            if(move==0):
                board[20]=humanMove
            elif(move==1):
                board[20]=compMove    
        elif(row==3):
            if(move==0):
                board[28]=humanMove
            elif(move==1):
                board[28]=compMove
        elif(row==4):
            if(move==0):
                board[36]=humanMove
            elif(move==1):
                board[36]=compMove
        elif(row==5):
            if(move==0):
                board[44]=humanMove
            elif(move==1):
                board[44]=compMove
        elif(row==6):
            if(move==0):
                board[52]=humanMove
            elif(move==1):
                board[52]=compMove
    elif(column == 5):
        if(row==0):
            if(move==0):
                board[5]=humanMove
            elif(move==1):
                board[5]=compMove
        elif(row==1):
            if(move==0):
                board[13]=humanMove
            elif(move==1):
                board[13]=compMove
        elif(row==2):
            if(move==0):
                board[21]=humanMove
            elif(move==1):
                board[21]=compMove    
        elif(row==3):
            if(move==0):
                board[29]=humanMove
            elif(move==1):
                board[29]=compMove
        elif(row==4):
            if(move==0):
                board[37]=humanMove
            elif(move==1):
                board[37]=compMove
        elif(row==5):
            if(move==0):
                board[45]=humanMove
            elif(move==1):
                board[45]=compMove
        elif(row==6):
            if(move==0):
                board[53]=humanMove
            elif(move==1):
                board[53]=compMove
    elif(column == 6):
        if(row==0):
            if(move==0):
                board[6]=humanMove
            elif(move==1):
                board[6]=compMove
        elif(row==1):
            if(move==0):
                board[14]=humanMove
            elif(move==1):
                board[14]=compMove
        elif(row==2):
            if(move==0):
                board[22]=humanMove
            elif(move==1):
                board[22]=compMove    
        elif(row==3):
            if(move==0):
                board[30]=humanMove
            elif(move==1):
                board[30]=compMove
        elif(row==4):
            if(move==0):
                board[38]=humanMove
            elif(move==1):
                board[38]=compMove
        elif(row==5):
            if(move==0):
                board[46]=humanMove
            elif(move==1):
                board[46]=compMove
        elif(row==6):
            if(move==0):
                board[54]=humanMove
            elif(move==1):
                board[54]=compMove

def winCheck():
    #Manually checking for the wins is the easiest way, I know it looks messy. But it works
    if((board[48]==humanMove and board[49]==humanMove and board[50]==humanMove and board[51]==humanMove) or 
        (board[49]==humanMove and board[50]==humanMove and board[51]==humanMove and board[52]==humanMove) or
        (board[50]==humanMove and board[51]==humanMove and board[52]==humanMove and board[53]==humanMove) or
        (board[51]==humanMove and board[52]==humanMove and board[53]==humanMove and board[54]==humanMove)):
            return 1
    elif((board[40]==humanMove and board[41]==humanMove and board[42]==humanMove and board[43]==humanMove) or 
        (board[41]==humanMove and board[42]==humanMove and board[43]==humanMove and board[44]==humanMove) or
        (board[42]==humanMove and board[43]==humanMove and board[44]==humanMove and board[45]==humanMove) or
        (board[43]==humanMove and board[44]==humanMove and board[45]==humanMove and board[46]==humanMove)):
            return 1
    elif((board[32]==humanMove and board[33]==humanMove and board[34]==humanMove and board[35]==humanMove) or 
        (board[33]==humanMove and board[34]==humanMove and board[35]==humanMove and board[36]==humanMove) or
        (board[34]==humanMove and board[35]==humanMove and board[36]==humanMove and board[37]==humanMove) or
        (board[35]==humanMove and board[36]==humanMove and board[37]==humanMove and board[38]==humanMove)):
            return 1    
    elif((board[24]==humanMove and board[25]==humanMove and board[26]==humanMove and board[27]==humanMove) or 
        (board[25]==humanMove and board[26]==humanMove and board[27]==humanMove and board[28]==humanMove) or
        (board[26]==humanMove and board[27]==humanMove and board[28]==humanMove and board[29]==humanMove) or
        (board[27]==humanMove and board[28]==humanMove and board[29]==humanMove and board[30]==humanMove)):
            return 1             
    elif((board[16]==humanMove and board[17]==humanMove and board[18]==humanMove and board[19]==humanMove) or 
        (board[17]==humanMove and board[18]==humanMove and board[19]==humanMove and board[20]==humanMove) or
        (board[18]==humanMove and board[19]==humanMove and board[20]==humanMove and board[21]==humanMove) or
        (board[19]==humanMove and board[20]==humanMove and board[21]==humanMove and board[22]==humanMove)):
            return 1
    elif((board[8]==humanMove and board[9]==humanMove and board[10]==humanMove and board[11]==humanMove) or 
        (board[9]==humanMove and board[10]==humanMove and board[11]==humanMove and board[12]==humanMove) or
        (board[10]==humanMove and board[11]==humanMove and board[12]==humanMove and board[13]==humanMove) or
        (board[11]==humanMove and board[12]==humanMove and board[13]==humanMove and board[14]==humanMove)):
            return 1
    elif((board[0]==humanMove and board[1]==humanMove and board[2]==humanMove and board[3]==humanMove) or 
        (board[1]==humanMove and board[2]==humanMove and board[3]==humanMove and board[4]==humanMove) or
        (board[2]==humanMove and board[3]==humanMove and board[4]==humanMove and board[5]==humanMove) or
        (board[3]==humanMove and board[4]==humanMove and board[5]==humanMove and board[6]==humanMove)):
            return 1
    elif((board[48]==compMove and board[49]==compMove and board[50]==compMove and board[51]==compMove) or 
        (board[49]==compMove and board[50]==compMove and board[51]==compMove and board[52]==compMove) or
        (board[50]==compMove and board[51]==compMove and board[52]==compMove and board[53]==compMove) or
        (board[51]==compMove and board[52]==compMove and board[53]==compMove and board[54]==compMove)):
            return 2
    elif((board[40]==compMove and board[41]==compMove and board[42]==compMove and board[43]==compMove) or 
        (board[41]==compMove and board[42]==compMove and board[43]==compMove and board[44]==compMove) or
        (board[42]==compMove and board[43]==compMove and board[44]==compMove and board[45]==compMove) or
        (board[43]==compMove and board[44]==compMove and board[45]==compMove and board[46]==compMove)):
            return 2
    elif((board[32]==compMove and board[33]==compMove and board[34]==compMove and board[35]==compMove) or 
        (board[33]==compMove and board[34]==compMove and board[35]==compMove and board[36]==compMove) or
        (board[34]==compMove and board[35]==compMove and board[36]==compMove and board[37]==compMove) or
        (board[35]==compMove and board[36]==compMove and board[37]==compMove and board[38]==compMove)):
            return 2    
    elif((board[24]==compMove and board[25]==compMove and board[26]==compMove and board[27]==compMove) or 
        (board[25]==compMove and board[26]==compMove and board[27]==compMove and board[28]==compMove) or
        (board[26]==compMove and board[27]==compMove and board[28]==compMove and board[29]==compMove) or
        (board[27]==compMove and board[28]==compMove and board[29]==compMove and board[30]==compMove)):
            return 2             
    elif((board[16]==compMove and board[17]==compMove and board[18]==compMove and board[19]==compMove) or 
        (board[17]==compMove and board[18]==compMove and board[19]==compMove and board[20]==compMove) or
        (board[18]==compMove and board[19]==compMove and board[20]==compMove and board[21]==compMove) or
        (board[19]==compMove and board[20]==compMove and board[21]==compMove and board[22]==compMove)):
            return 2
    elif((board[8]==compMove and board[9]==compMove and board[10]==compMove and board[11]==compMove) or 
        (board[9]==compMove and board[10]==compMove and board[11]==compMove and board[12]==compMove) or
        (board[10]==compMove and board[11]==compMove and board[12]==compMove and board[13]==compMove) or
        (board[11]==compMove and board[12]==compMove and board[13]==compMove and board[14]==compMove)):
            return 2
    elif((board[0]==compMove and board[1]==compMove and board[2]==compMove and board[3]==compMove) or 
        (board[1]==compMove and board[2]==compMove and board[3]==compMove and board[4]==compMove) or
        (board[2]==compMove and board[3]==compMove and board[4]==compMove and board[5]==compMove) or
        (board[3]==compMove and board[4]==compMove and board[5]==compMove and board[6]==compMove)):
            return 2
    # This is jsut horizontal wins could have only used 2 if statments but didn't want super long if's
    # Holy crap I'm sorry for when you have to check my code that part was repetitive
    # I'm gonna try looping through now
    for vert in range(30):
        if(board[vert]==humanMove and board[vert+8]== humanMove and board[vert+16]==humanMove and board[vert+24]==humanMove):
            return 1
        if(board[vert]==compMove and board[vert+8]== compMove and board[vert+16]==compMove and board[vert+24]==compMove):
            return 2    

        
    
    
    return 0


repCheck = 0
while(win == 0):
    if(move == 0):
        playerMove = input("Which column do you want to place your piece: ")
        playerMove = int(playerMove)
        playerMove -=1
        placer = colmCleared(playerMove)
        placeMove(placer, playerMove)
        win = winCheck()
        move = 1
    elif(move==1):
        if(repCheck <10):
            repCheck+=1
            boardDisplay()
            move = 0
        elif(repCheck>=10):
            boardDisplay()
            win = winCheck() 
           
if(win == 1):
    boardDisplay()
    print("Player Wins")
elif(win == 2):
    boardDisplay()
    print("Computer Wins")
elif(win== 0):
    boardDisplay()
    print("tie game. No Winner")        

"""
Tries to get the moves to work
while(win == 0):
    if(move == 0):
        playerMove = input("Which column do you want to place your piece: ")
        playerMove = int(playerMove)
        playerMove -=1
    
    elif(move == 1):
        boardDisplay()
        win = 1        
testCounter = 0
while(win == 0):
    if(move == 0):
        playerMove = input("Which column to you want to place your piece: ")
        playerMove = int(playerMove)
        rowNum = 0
        for row in range():
            if(a[row][playerMove] == " "):
                rowNum+=1
            elif(a[row][playerMove] == "X" or a[row][playerMove] == "O"):
                a[rowNum-1][playerMove-1] = humanMove    
       
        move = 1
        boardDisplay()
        if(testCounter == 3):
            win = 1

    elif(move == 1):
        
        move = 0
        testCounter+=1
      
 """       


