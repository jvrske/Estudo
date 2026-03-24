def is_palindrome(s: str) -> bool:
    new_s = ''.join(c.lower() for c in s if c.isalnum())
    return new_s == new_s[::-1]


if __name__ == "__main__":
    print(is_palindrome("A man a plan a canal Panama"))
