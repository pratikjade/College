A = {"a": 0.1, "b": 0.5, "c": 0.8, "d": 0.6}
B = {"a": 0.3, "b": 0.1, "c": 0.5, "d": 0.6}
C = {"a": 0.0, "b": 0.0, "c": 0.0, "d": 0.0}
print("Set A is - ")
print(A)
print("Set B is -")
print(B)
print()

print("Union Operation")
for i in A:
    # print(i)
    if (A[i] > B[i]):
        C[i] = A[i]
    else:
        C[i] = B[i]
print(C)

print("Intersection Operation")
for i in A:
    # print(i)
    if (A[i] < B[i]):
        C[i] = A[i]
    else:
        C[i] = B[i]
print(C)

print("Complement Operation on C")
for i in A:
    C[i] = round(1.0 - C[i], 2)
print(C)

print("Difference of set A")
for i in A:
    B[i] = round(1.0 - B[i], 2)
print(A)
