import copy

list1 = [1,2,[3,1],4,5]

list2 = copy.copy(list1)

print("original copy :")

for i in range (0,len(list1)):
    print(list1[i],end=" ")
print("\r")

list2[1]=4

# print("updates list2 : ")
# for i in range (0,len(list1)):
#     print(list2[i],end=" ")

# print("\r")

print("original List 1 :")
for i in range (0,len(list1)):
    print(list1[i],end=" ")
