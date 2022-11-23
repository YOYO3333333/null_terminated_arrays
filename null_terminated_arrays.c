#include "null_terminated_arrays.h"

#include <stddef.h>

size_t len_array(const char ***arr, size_t i)
{
    size_t j = 0;
    if (arr[i])
    {
        while (arr[i][j])
            j++;
    }
    return j;
}
void reverse_matrix(const char ***matrix)
{
    size_t len = 0;
    while (matrix[len] != NULL)
        len++;
    size_t i = 0;
    while (i < len)
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
        i++;
    }
    i = 0;
    while (i < len / 2)
    {
        const char **tmp = matrix[i];
        matrix[i] = matrix[len - i - 1];
        matrix[len - i - 1] = tmp;
        i++;
    }
    return;
}
