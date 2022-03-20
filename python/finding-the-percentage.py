# finding-the-percentage
if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    
    
    for key, value in student_marks.items():
        if query_name == key:
            print(f'{sum(value)/3:.2f}')
