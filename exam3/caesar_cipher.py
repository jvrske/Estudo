def caesar_cipher(s: str, shift: int):
    result = []
    for c in s:
        base = ord('A') if c.isupper() else ord('a')
        if c.isalpha():
            result.append(chr((ord(c) - base + shift) % 26 + base))
        else:
            result.append(c)
    return result


if __name__ == "__main__":
    result = (caesar_cipher("Hello", -1))
    print("".join(result))
