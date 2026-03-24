def is_anagram(s: str, w: str) -> bool:
    return sorted(c.lower() for c in s if c.isalpha()) == \
        sorted(x.lower() for x in w if x.isalpha())


if __name__ == "__main__":
    print(is_anagram("Astronomer", "Moon starer"))
