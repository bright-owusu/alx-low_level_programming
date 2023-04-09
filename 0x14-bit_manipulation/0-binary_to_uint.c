#include <stdlib.h>

unsigned int binary_to_uint(const char *b)
{
    unsigned int res = 0;

    if (b == NULL)
        return 0;

    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == '0')
        {
            res = (res << 1) | 0;
        }
        else if (b[i] == '1')
        {
            res = (res << 1) | 1;
        }
        else
        {
            return 0;
        }
    }

    return res;
}
