#deteksi anagram ~15 menit

def anagram(kata1, kata2):
    if len(kata1) != len(kata2):
        return "Bukan anagram"
    
    for i in kata1:
        if i in kata2:
            kata2.pop(kata2.index(i))
        else:
            return "Bukan anagram"
    
    return "Anagram"

x = list(input("Tuliskan kata pertama: "))
y = list(input("Tuliskan kata kedua: "))

print(anagram(x,y))