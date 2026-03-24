def count_vowels(w):
    counter = 0
    vowels = "aeiou"
    for c in w:
        if c.lower() in vowels:
            counter += 1
    return counter


def sort_words(words: list) -> list:
    return sorted(words, key=lambda x: (len(x), x.lower(), count_vowels(x)))


if __name__ == "__main__":
    words = ["Banana", "fig", "Apple", "kiwi", "date", "blueberry"]
    result = sort_words(words)
    print(result)
