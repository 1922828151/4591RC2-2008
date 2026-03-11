/*
 * func-name: sub_1002D0D0
 * func-address: 0x1002d0d0
 * callers: none
 * callees: 0x10012e59
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002D0D0(int a1, int a2)
{
  int v2; // ecx
  int result; // eax
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = v2;
  result = ((int (__cdecl *)(int, const char *, int *))PyArg_ParseTuple)(a2, "i:SetSkyState", &v4);
  if ( result )
  {
    sub_10012E59(v4);
    return ++Py_NoneStruct;
  }
  return result;
}
