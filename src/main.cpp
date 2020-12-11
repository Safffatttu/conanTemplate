// After confguration libraries should "just work".
// E.g. to use benchmark framework:
// 1. Uncomment it in conanfile.txt
// 2. Reconfigure project using instructions specified in README file
// 3. Uncomment next line, and recompile.
// #include <benchmark/benchmark.h>

#include "second.h"

int main()
{
    return foo();
}