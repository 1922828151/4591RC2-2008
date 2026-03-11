/*
 * func-name: sub_1002F400
 * func-address: 0x1002f400
 * callers: none
 * callees: 0x1002dc10
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002F400(int a1, int a2)
{
  float *v3; // eax
  float *v4; // ecx
  _DWORD *v5; // [esp+0h] [ebp-10h] BYREF
  _DWORD *v6; // [esp+4h] [ebp-Ch] BYREF
  float *v7; // [esp+8h] [ebp-8h] BYREF
  float *v8; // [esp+Ch] [ebp-4h] BYREF

  v5 = 0;
  v6 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **, _DWORD **))PyArg_ParseTuple)(a2, "OO:Vector_Add", &v5, &v6)
    || sub_1002DC10(&v8, v5, (const char **)dword_103B4E84, 1) == -1
    || sub_1002DC10(&v7, v6, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  v3 = v8;
  v4 = v7;
  *v8 = *v7 + *v8;
  v3[1] = v4[1] + v3[1];
  v3[2] = v4[2] + v3[2];
  return ++Py_NoneStruct;
}
