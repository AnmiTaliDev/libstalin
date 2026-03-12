# libstalin

Stalin sort implementation in C.

Stalin sort is a "sorting" algorithm that iterates through an array once and removes any element that is out of order, leaving only a non-decreasing subsequence starting from the first element.

**Input:** `[1, 2, 10, 3, 5, 8, 15]`
**Output:** `[1, 2, 10, 15]`

## API

```c
#include <stalin.h>

size_t stalin_sort(int *arr, size_t len);
```

Sorts `arr` in-place. Returns the new length of the array. Elements beyond the returned length are undefined.

## Build

Requires [Meson](https://mesonbuild.com/) and a C compiler.

```sh
meson setup build
meson compile -C build
meson install -C build
```

With tests:

```sh
meson setup build -Dbuild_tests=true
meson compile -C build
./build/test_stalin
```

## License

[The Unlicense](https://unlicense.org) — public domain.
