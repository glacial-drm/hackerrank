# tags - input hashmap variadic fstring
# date - 2026/xx/xx
# score - 10.00/10.00

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    avgMarks = sum(student_marks[query_name]) / len(student_marks[query_name])
    print(f"{avgMarks:.2f}")
