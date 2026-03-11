/*
 * func-name: sub_1002E6F0
 * func-address: 0x1002e6f0
 * callers: none
 * callees: 0x1002dc10
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002E6F0(int a1, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF
  float v5; // [esp+8h] [ebp-4h] BYREF

  v3 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **, float *))PyArg_ParseTuple)(a2, "Of:Vector_y_set", &v3, &v5)
    || sub_1002DC10(&v4, v3, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  if ( v4 )
    *(float *)(v4 + 4) = v5;
  return ++Py_NoneStruct;
}
