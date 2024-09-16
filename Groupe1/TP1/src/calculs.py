num1 = int(input("Entrez le premier entier: "))
num2 = int(input("Entrez le deuxième entier: "))
op = input("Entrez un opérateur (+, -, *, /, %, &, |, ~): ")

if op == '+':
    print("Résultat:", num1 + num2)
elif op == '-':
    print("Résultat:", num1 - num2)
elif op == '*':
    print("Résultat:", num1 * num2)
elif op == '/':
    if num2 != 0:
        print("Résultat:", num1 // num2)
    else:
        print("Erreur: Division par zéro")
elif op == '%':
    if num2 != 0:
        print("Résultat:", num1 % num2)
    else:
        print("Erreur: Division par zéro")
elif op == '&':
    print("Résultat:", num1 & num2)
elif op == '|':
    print("Résultat:", num1 | num2)
elif op == '~':
    print(f"Résultat: ~{num1} = {~num1}, ~{num2} = {~num2}")
else:
    print("Opérateur non valide")
