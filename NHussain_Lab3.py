# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

name = "Spiderman";
verse1 = "Does whatever a can.Spins a web, any size.Catches thieves- just like flies.Look out! Here comes the ";
verse2 = "Is he strong? listen, bud.He's got adioactive blood.Can he swing, from a thread?Take a look overhead.Hey, there! There goes the!";
verse3 = "In the chill of night, at the scene of a crimelike a streak of lighthe arrives, just in time!";
verse4 = "friendly neighborhood Wealth and fame? He's ignored.Action is his reward.Look out! There goes the ";


print(name + verse1[verse1.find(",")] + verse1[verse1.find(" ")] + name + "\n" 
      +verse1[0:15] + verse1[verse1.find(" ")] + name[0:6].lower() + verse1[verse1.find(" ")] + verse1[16:20] +'\n'
      +verse1[20:42] +'\n'
      +verse1[42:75] +'\n'
      +verse1[75:] + name + verse1[verse1.find(".")] +"\n"
      +verse2[:14] + verse2[14:26].capitalize() +'\n'
      +verse2[26:35] + name[name.find("r")] + verse2[35:52] +'\n'
      +verse2[52:80] +'\n'
      +verse2[80:101] +'\n'
      +verse2[101:-1] + verse1[verse1.find(" ")] + name + verse2[-1] + '\n' #you can see where I gave up on counting
      +verse3[:verse3.index("like",0,len(verse3))] + '\n'
      +verse3[verse3.index("like",0,len(verse3)):(verse3.index("arr",0,len(verse3))-3)] +'\n'
      +verse3[(verse3.index("arr",0,len(verse3))-3):] +'\n'
      +name + verse1[verse1.find(",")] + verse1[verse1.find(" ")] + name +'\n'
      +verse4[:verse4.index("Wea",0,len(verse4))] + name + verse1[verse1.find(".")] + '\n'
      +verse4[verse4.index("Wea",0,len(verse4)):(verse4.find(".")+1)] +'\n'
      +verse4[(verse4.find(".")+1):verse4.index("Loo",0,len(verse4))] +'\n'
      +verse4[verse4.index("Loo",0,len(verse4)):] + name + verse2[-1]);

