arr=[]
for _ in range(int(input())):
    command, *value = input().split()
    if command == 'print':
        print(arr)
    else:
        getattr(arr,command)(*(map(int, value)))