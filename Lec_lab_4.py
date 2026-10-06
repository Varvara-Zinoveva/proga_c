import random

#Функция быстрой сортировки

def quick_sort(a):
    if len(a) <= 1:
        return a

    s = a[len(a) // 2]
    left = [x for x in a if x < s]
    right = [x for x in a if x > s]
    mid = [x for x in a if x == s]

    return quick_sort(left) + mid + quick_sort(right)


# Задана последовательность из 1000 целых чисел. Переставить элементы последовательности таким образом, чтобы они располагались в порядке возрастания


a = [random.randint(-100, 100) for _ in range(1000)]

a = quick_sort(a)

print(*a)

#Написать программу, сортирующую по возрастанию одномерный массив случайных целых чисел, находящихся в интервале {50,100}. Использовать быструю сортировку


n = int(input('Введите размер массива: '))
a = [random.randint(50, 100) for _ in range(n)] # randint включает обе границы

print("До:   ", *a)

a = quick_sort(a)

print("После:", *a)

#Написать программу, сортирующую по возрастанию первый столбец двумерного массива целых чисел. Использовать быструю сортировку Массив создать из случайных чисел, расположенных в интервале {5,61}

rows = int(input('Введите количество строк: '))
cols = int(input('Введите количество столбцов: '))

def p_matrix(m):
    for row in m:
        print(*(f"{x:3d}" for x in row))

if rows <= 0 or cols <= 0:
    print('Ошибка, количество строк и столбцов должны быть больше 0')
else:
    a = [[random.randint(5, 61) for _ in range(cols)] for _ in range(rows)]

    col = [row[0] for row in a]

    print("До:")
    p_matrix(a)

    col = quick_sort(col)
    for i in range(rows):
        a[i][0] = col[i]

    print("После:")
    p_matrix(a)

# Написать программу, сортирующую список студентов группы по алфавиту и использующую стандартную сортировку qsort

n = int(input("Сколько студентов? "))
students = [input() for _ in range(n)]

students.sort()

print("По алфавиту:")
for s in students:
    print(s)