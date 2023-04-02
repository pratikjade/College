A = dict()
B = dict()
Y = dict()
A = {"a": 0, "b": 1, "c": 0, "d": 1}
B = {"a": 0, "b": 0, "c": 1, "d": 1}
print('The First Fuzzy Set is :', A)
print('The Second Fuzzy Set is :', B)
for A_key, B_key in zip(A, B):
    A_value = A[A_key]
    B_value = B[B_key]
    if A_value < B_value:
        Y[A_key] = A_value
    else:
        Y[B_key] = B_value
print('Fuzzy Set Conjuction ie. A*B is :', Y)
for A_key, B_key in zip(A, B):
            A_value = A[A_key]
            B_value = B[B_key]
            if A_value > B_value:
              Y[A_key] = A_value
            else:
                Y[B_key] = B_value 
print('Fuzzy Set disjuction ie. A+B is :', Y)
A = dict()
B = dict()
Y = dict()
A = {"a": 0, "b": 1, "c": 0, "d": 1}
B = {"a": 0, "b": 0, "c": 1, "d": 1}
for A_key, B_key in zip(A, B):
    A_value = A[A_key]
    B_value = B[B_key]
    for A_key in A:
        Y[A_key] = 1-A[A_key]
print('Fuzzy Set  ~A  is :', Y)
X= dict()
for Y_key, B_key in zip(Y, B):
    Y_value = Y[Y_key]
    B_value = B[B_key]
    if Y_value > B_value:
        X[Y_key] = Y_value
    else:
        X[B_key] = B_value
print('Fuzzy Set imPlication ie. ~A * B is :', X)
for A_key, B_key in zip(A, B):
    A_value = A[A_key]
    B_value = B[B_key]
if ~A_value < B_value:
        Y[A_key] = A_value
else:
        Y[B_key] = B_value
        print('Fuzzy Set imlication ie. ~A * B is :', Y)
