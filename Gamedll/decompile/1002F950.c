/*
 * func-name: sub_1002F950
 * func-address: 0x1002f950
 * callers: none
 * callees: 0x1002dc10
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002F950(int a1, int a2)
{
  float *v3; // eax
  _DWORD *v4; // [esp+0h] [ebp-8h] BYREF
  float *v5; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **))PyArg_ParseTuple)(a2, "O:Vector_Zero", &v4)
    || sub_1002DC10(&v5, v4, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  v3 = v5;
  v5[2] = 0.0;
  v3[1] = 0.0;
  *v3 = 0.0;
  return ++Py_NoneStruct;
}
