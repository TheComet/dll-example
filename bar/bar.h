#ifdef _BUILDING
#   define API __declspec(dllexport)
#else
#   define API __declspec(dllimport)
#endif

API void bar(void);
