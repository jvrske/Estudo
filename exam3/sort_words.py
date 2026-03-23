def count_vowels(w):
    count = 0
    vowels = "aeiou"
    for c in w:
        if c.lower() in vowels:
            count += 1
    return count


def sort_words(words: list) -> list:
    return sorted(words, key=lambda x: (len(x), x.lower(), count_vowels(x)))


if __name__ == "__main__":
    words = ["Plum", "plum", "PLUM"]
    result = sort_words(words)
    print(result)
