def is_valid(s: str) -> bool:
    stack = []
    pairs = {
        ")": "(",
        "}": "{",
        "]": "["
    }
    open = "([{"
    close = ")]}"

    for c in s:
        if c in open:
            stack.append(c)
        elif c in close:
            if not stack or stack[-1] != pairs[c]:
                return False
            stack.pop()
    return len(stack) == 0


if __name__ == "__main__":
    print(is_valid("([])"))
