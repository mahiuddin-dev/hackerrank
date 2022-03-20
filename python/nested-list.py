# hackerrank nested-list
n = int(input())
student = []
scorelist = []

for i in range(n):
    name = input()
    score = float(input())
    student.append([name, score])
    scorelist += [score]

second_lowest = sorted(set(scorelist))[1]

result = []

for i in student:
    if i[1] == second_lowest:
        result.append(i[0])

result.sort()

for i in result:
    print(i)
