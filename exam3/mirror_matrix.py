def mirror_matrix(matrix: list[list]) -> list[list]:
    mirror = [list(line)[::-1] for line in zip(*matrix)]
    print(zip(*matrix))
    print(mirror)
    return mirror


if __name__ == "__main__":
    matrix = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ]
    mirror_matrix(matrix)
