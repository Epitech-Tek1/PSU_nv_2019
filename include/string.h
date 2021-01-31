/*
** EPITECH PROJECT, 2020
** PSU_nv_2019
** File description:
** string
*/

#ifndef STRING_H_
#define STRING_H_

#include <features.h>

#define __need_size_t
#define __need_NULL
#include <stddef.h>

#ifdef __OPTIMIZE__
static __always_inline void *
my_memcpy(void *restrict _dest, const void *restrict _src, size_t _l)
{
    char *c_dest = _dest;
    const char *csrc = _src;

    while (_l--)
        *c_dest++ = *csrc++;
    return (_dest);
}
#else
void *my_memcpy(void *__restrict _dest, const void *__restrict _src, size_t _l)
            __attribute_pure__ __nonnull((1, 2));
#endif /* !__OPTIMIZE__ */

#ifdef __OPTIMIZE__
static __always_inline void
my_bzero(void *_s, size_t _l)
{
    unsigned char *_s2 = (unsigned char *)_s;

    while (--_l)
        *++_s2 = '\0';
}
#else
void my_bzero(void *_s, size_t _l);
#endif /* !__OPTIMIZE__ */

void *my_memalloc(const size_t size)
            __attribute_malloc__;

#endif /* !STRING_H_ */