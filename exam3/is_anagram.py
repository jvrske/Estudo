def is_anagram(s: str, w: str) -> bool:
    new_s = sorted(s.lower().replace(' ', ''))
    new_w = sorted(w.lower().replace(' ', ''))
    print(new_s)
    return new_s == new_w


if __name__ == "__main__":
    print(is_anagram("listen", "silent"))
