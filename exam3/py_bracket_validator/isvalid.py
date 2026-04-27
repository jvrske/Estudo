def isValid(s):
    stash = []
    pairs = {
      ")": "(",
      "}": "{",
      "]": "["
    }

    for i in s:
        if i in "{[(":
            stash.append(i)
        if i in "}])":
            if not stash or stash[-1] != pairs[i]:
                return False
            stash.pop()
    return len(stash) == 0


print(isValid('()'))
print(isValid('()[]{}'))
print(isValid('{[()]}'))
print(isValid(''))
print(isValid('(]'))
print(isValid('([)]'))
print(isValid('((('))
