#angka ~10 menit
#rumusnya n * n/2(1+n) --> dimana n adalah angka batas

def jumlahkali1(batas):
    return int((batas * batas/2 * (1+batas)))

# cara 2, pakai for loop
def jumlahkali2(batas):
    fact = 0
    for i in range(1, (batas+1)):
        fact = fact + i
    
    return (batas * fact)

x = int(input("Tuliskan batas yang diinginkan: "))
print("Jumlah menggunakan func1 adalah: " + str(jumlahkali1(x)))
print("Jumlah menggunakan func2 adalah: " + str(jumlahkali2(x)))