#randomizer ~40-50 mnt

import random

def randInt(bts):
    memory = []
    string = ""

    while bts > 0:
        check = True
        container = random.randint(1,20)

        for i in memory:
            if container == i:
                check = False

        if check:
            bts -= 1
            memory.append(container)

            #pakai string krn kalau langsung return list memory, nanti ada [] nya
            string += str(container)
            string += " "

    return string
            
batas = int(input("Tuliskan jumlah angka yang ingin didapatkan: "))

print(randInt(batas))