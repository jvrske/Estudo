def conta_vogais(s: str) -> int:
    counter = 0
    vogais = ['a', 'e', 'i', 'o', 'u']
    vogais_m = ['A', 'E', 'I', 'O', 'U']
    for c in s:
        if c in vogais or c in vogais_m:
            counter += 1
    return counter


if __name__ == "__main__":
    print(conta_vogais("42 is FUN!"))
