#include "null_terminated_arrays.h"

#include <stddef.h>
void reverse_matrix(const char ***matrix)
{
    size_t len = 0;
    while (*(matrix + len))
        len++;
    size_t i = 0;
    for (size_t i = 0;i < len;i++)
    {
        size_t len2 = len_array(matrix, i);
        size_t k = 0;
        while (k < len2 / 2)
        {
            const char *tmp = matrix[i][k];
            matrix[i][k] = matrix[i][len2 - k - 1];
            matrix[i][len2 - k - 1] = tmp;
            k++;
        }
    }
    i = 0;
    while (size_t i = 0;i < len / 2;i ++)
    {
        const char **tmp = matrix[i];
        matrix[i] = matrix[len - i - 1];
        matrix[len - i - 1] = tmp;
    }
    return;
}

size_t len_array(const char ***arr, size_t i)
{
    size_t LEN = 0;
    if (arr[i])
    {
        while (arr[i][LEN])
            j++;
    }
    return j;
}

