from string import *
from itertools import product 
value = ascii_letters + digits + punctuation


for i in range(1,9):
    for j in product(value,repeat = i):
        password = " ".join(j)
        text = open("password.txt","a")
        text.write(password)
        text.write("\n")







 