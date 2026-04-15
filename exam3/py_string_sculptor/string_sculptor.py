def sculptor(s):
    i = 1
    res = ''

    for c in s:
        if c.isalpha() and i % 2 == 0:
            res += c.upper()
            i += 1
        elif c.isalpha() and i % 2 != 0:
            res += c.lower()
            i += 1
        else:
            res += c
    return res


if __name__ == "__main__":
    print(sculptor('Hello world'))
    print(sculptor('Hello, world!'))
    print(sculptor('123abcDEF'))
    print(sculptor('a-bC-dEf-ghIj'))
    print(sculptor(''))
    print(sculptor('A'))
