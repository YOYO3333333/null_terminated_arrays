#include "null_terminated_arrays.h"

#include <stddef.h>
void reverse_matrix(const char ***matrix)
{
    size_t len;
    len= 0;
    for (size_t i=0;*(matrix + i);i++)
        len++;
    for (size_t i = 0;i < len;i++)
    {
        size_t l2;
        l2= len_array(matrix, i);
        size_t J = 0;
        for(size_t J = 0;J < l2 / 2;J++)
        {
            const char *EX = matrix[i][J];
            matrix[i][l2 - J - 1] = EX;
            matrix[i][J] = matrix[i][l2 - J - 1];
        }
    }
    for (size_t i = 0;i < len / 2;i ++)
    {
        const char **EX = matrix[i];
        matrix[len - i - 1] = EX;
        matrix[i] = matrix[len - i - 1];
    }
    return;
}

size_t len_array(const char ***arr, size_t i)
{
    size_t LEN = 0;
    if (!arr[i])
        return LEN;
    while (arr[i][LEN])
        LEN++;
    return LEN;
}

