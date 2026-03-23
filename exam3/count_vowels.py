def count_vowels(s: str) -> int:
    counter = 0
    vowels = "aeiou"

    for c in s:
        if c.lower() in vowels:
            counter += 1
    return counter


if __name__ == "__main__":
    print(count_vowels("42 is FUN!"))
