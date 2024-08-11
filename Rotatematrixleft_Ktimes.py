class solution:
    def rotatematrix(self, k, mat):
        if len(mat) == 0:
            return []
        if len(mat) == 1 and len(mat[0]) == 1:
            return mat
        if len(mat[0]) == k:
            return mat
        n = 0
        if k > len(mat[0]):
            n = k % len(mat[0])
        else:
            n = k
        for i in range(0,len(mat)):
            x = mat[i].copy()
            print(x)
            for j in range(len(mat[0])):
                x[((len(mat[0])-n)+j)%len(mat[0])] = mat[i][j]
            mat[i] = x.copy()
            x.clear()
        print(mat)

# Test the function
ob = solution()
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
k = 2
rotated_matrix = ob.rotatematrix(k, matrix)
print(rotated_matrix)
