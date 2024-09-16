num = int(input("Entrez un nombre entier: "))
binaire = []

while num > 0:
    binaire.append(num % 2)
    num //= 2

binaire.reverse()
print("Représentation binaire:", ''.join(map(str, binaire)))
