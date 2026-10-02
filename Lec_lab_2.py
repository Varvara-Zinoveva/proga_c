#№1 Сортировка выбором по возрастанию
import random
 
n = 5
a = [random.randint(2, 103) for _ in range(n)]
print("Исходный массив:     ", a)
 
for i in range(n - 1):
    mini = i
    for j in range(i + 1, n):
        if a[j] < a[mini]:
            mini = j
    a[i], a[mini] = a[mini], a[i]
 
print("Отсортированный массив: ", a)


#№2 Сортировка по убыванию

import random
 
n = 5
a = [random.randint(2, 103) for _ in range(n)]
print("Исходный массив:     ", a)
 
for i in range(n - 1):
    mini = i
    for j in range(i + 1, n):
        if a[j] > a[mini]:
            mini = j
    a[i], a[mini] = a[mini], a[i]
 
print("Отсортированный массив: ", a)
 

#№3 Сортировка выбором по возрастанию
import random

phones = ["%02d-%02d-%02d" % (random.randint(0, 99),
                              random.randint(0, 99),
                              random.randint(0, 99)) for _ in range(5)]
print("Исходный список:     ", phones)
 
 
def key(phone):
    return tuple(int(part) for part in phone.split("-"))
 
 
n = len(phones)
for i in range(n - 1):
    mini = i
    for j in range(i + 1, n):
        if key(phones[j]) < key(phones[mini]):
            mini = j
    phones[i], phones[mini] = phones[mini], phones[i]
 
print("Отсортированный массив: ", phones)