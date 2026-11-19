# tags - limits array search cast input anonymous-function array-splice list-comprehension foreach
# date - 2026/10/07
# score - 10.00/10.00

import sys
from math import isclose
if __name__ == '__main__':

    students = [[input(), float(input())] for _ in range(int(input()))]
    students.sort(key = lambda x: x[1])
    
    minScore = students[0][1]
    secondScore = -1
    secondStudents = []
    for student, score in students[1:]:
        
        if(secondScore == -1):
            if score > minScore:
                secondScore = score
                secondStudents.append(student)
        else:
            if score == secondScore:
                secondStudents.append(student)
        
    secondStudents.sort()
    for student in secondStudents:
        print(student)
