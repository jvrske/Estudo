def isValid(s):
    stash = []
    open = "({["
    close = ")]}"
    pairs = {
        ")": "(",
        "]": "[",
        "}": "{"
    }

    for c in s:
        if c in open:
            stash.append(c)
        elif c in close:
            if not stash or stash[-1] != pairs[c]:
                return False
            stash.pop()
    return len(stash) == 0
