/*
 * func-name: sub_1002F0D0
 * func-address: 0x1002f0d0
 * callers: none
 * callees: 0x1002dc10
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002F0D0(int a1, int a2)
{
  float *v3; // eax
  double v4; // st7
  _DWORD *v5; // [esp+0h] [ebp-10h] BYREF
  float v6; // [esp+4h] [ebp-Ch] BYREF
  float *v7; // [esp+8h] [ebp-8h] BYREF
  float v8; // [esp+Ch] [ebp-4h]

  v5 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **, float *))PyArg_ParseTuple)(a2, "Of:Vector___idiv__", &v5, &v6)
    || sub_1002DC10(&v7, v5, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  v3 = v7;
  v8 = 1.0 / v6;
  v4 = v8;
  *v7 = *v7 * v8;
  v3[1] = v4 * v3[1];
  v3[2] = v4 * v3[2];
  return ++Py_NoneStruct;
}
