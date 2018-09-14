// This is an open source non-commercial project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#ifdef _MSC_VER
#  define testshlib_EXPORT __declspec(dllexport)
#else
#  define testshlib_EXPORT
#endif

extern testshlib_EXPORT void foo();

static const int truc=5;

void foo() { }

