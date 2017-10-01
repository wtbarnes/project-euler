"""
Project Euler #9
Return product of numbers subject to the conditions:
1. i + j + k = 1000
2. i^2 + j^2 = k^2
"""
import numpy as np
import numba

@numba.jit(nopython=True)
def search_triplets(max_num):
    for i in np.arange(max_num)[::-1]:
        for j in np.arange(i):
            if i+j > max_num:
                break
            for k in np.arange(j):
                if i+j+k > max_num:
                    break
                if j**2 + k**2 == i**2:
                    if i + j + k == max_num:
                        return i, j, k


if __name__ == '__main__':
    x = search_triplets(1000)
    print('{}*{}*{} = {}'.format(*x, np.product(x)))
    