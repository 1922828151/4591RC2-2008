/*
 * func-name: sub_1002D230
 * func-address: 0x1002d230
 * callers: none
 * callees: 0x1000b95b
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002D230(int a1, int a2)
{
  int v2; // ecx
  int result; // eax
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = v2;
  result = ((int (__cdecl *)(int, const char *, int *))PyArg_ParseTuple)(a2, "s:Print", &v4);
  if ( result )
  {
    j_nullsub_76();
    return ++Py_NoneStruct;
  }
  return result;
}
