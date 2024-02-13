import random 
arr1 = [random.randint(-30, 30)
for _ in range (20)]
arr2 = [random.randint(-30, 30)
for _ in range (20)]
print('Pervii massiv', *arr1)
print('Vtoroi massiv', *arr2)
new_arr = []
for i in range(len(arr1)):
    if arr1[1] > arr2[i]:
        new_arr.append(arr1[i])
    else: 
        new_arr.append(arr2[i])
print('nowii massiv: ', *new_arr)