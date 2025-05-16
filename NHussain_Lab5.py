# -*- coding: utf-8 -*-
"""
Created on Wed Mar 10 17:01:52 2021

@author: nick
"""

#Requirements:
#Must use for and while loops.
#Must have a mix of conditional, collection, and counter loops.
#Use your former labs for help! *The plot lab will help you immensely.

#Objective: Plan a state based road trip. Use at least ten states.

#Present the user with the ability to start a trip, continue a trip, 
#or to end a trip.

#If they start a trip, give them an option of which state to start in
#using only one of your ten states.

#They can visit the same state (pretend they went to a different part)
#

#They may essentially teleport to any state, but they can only travel 10 times
# However,
#If they decide to prematurely end a trip, 
#tell them how many states they have visited,and what states. 

trip = True
stateList = ["New Jersey","Delaware","Maryland","Virginia","New York","North Carolina","South Carolina","Pennsylvania","Georgia","Massachusetts"
             , "Rhode Island","Connecticut","New Hampshire","Maine"]
visitList = []
stateTravel = 0
started = False

while(trip == True):
    if(started == False):
        tripCont = input('Do you want to start, continue, or end a trip: ')
        tripCont.lower()
    elif(stateTravel <=10 and started == True):
        tripCont = input("Do you want to continue or end a trip: ")
        tripCont.lower()
    elif(stateTravel >10):
        tripCont = 'end'
        
    if(tripCont == 'end'):
        trip = False
        numStates = len(visitList)
        print("The number of states visited was " + str(numStates))
        print("The states visited were: ")
        for i in range(numStates):
            print(visitList[i])
            
            
    elif(tripCont == 'start'):
        for i in stateList:
            print(i)
        startLoc = input('What is your starting State from the list of 13: ')
        startLoc.capitalize()
        visitList.append(startLoc)
        stateTravel+=1
        started = True
        
        
    elif(tripCont == 'continue' or  tripCont == 'cont'):
        checkRep = visitList
        repeatCheck = 0
        for i in stateList:
            print(i)
        nextState = input('What state are you visiting next: ')
        nextState.capitalize()
        stateTravel+=1
        visitList.append(nextState)
        
        """
        while repeatCheck == 0:
            if(nextState != checkRep[len(checkRep)-1] or len(checkRep)<=1):
                checkRep.pop()
            elif(nextState == checkRep[len(checkRep)-1] and len(checkRep) == 0):
                repeatCheck = 1
               #visitList.append(nextState)
            else:
                visitList.append(nextState)
            
        #first attempt to not have repeats
        
        if(stateTravel<=10):
            for i in range(len(visitList)):
                if(nextState == visitList[i]):
                    stateTravel+=1
                elif(nextState != checkRep[i]):
                    stateTravel+=1
                    visitList.append(nextState)
        """
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
        
        
        