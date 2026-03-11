/*
 * func-name: sub_1002D1F0
 * func-address: 0x1002d1f0
 * callers: none
 * callees: 0x10016581
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002D1F0(int a1, int a2)
{
  const CHAR *v2; // ecx
  int result; // eax
  LPCSTR lpText; // [esp+0h] [ebp-4h] BYREF

  lpText = v2;
  result = ((int (__cdecl *)(int, const char *, LPCSTR *))PyArg_ParseTuple)(a2, "s:DoMessageBox", &lpText);
  if ( result )
  {
    sub_10016581(lpText);
    return ++Py_NoneStruct;
  }
  return result;
}
