/*
 * func-name: sub_1002D360
 * func-address: 0x1002d360
 * callers: none
 * callees: 0x100112cf
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002D360(int a1, int a2)
{
  int v2; // ecx
  int result; // eax
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = v2;
  result = ((int (__cdecl *)(int, const char *, int *))PyArg_ParseTuple)(a2, "s:PlayOgg", &v4);
  if ( result )
  {
    sub_100112CF(v4, v4);
    return ++Py_NoneStruct;
  }
  return result;
}
