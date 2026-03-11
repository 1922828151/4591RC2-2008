/*
 * func-name: sub_1002D1B0
 * func-address: 0x1002d1b0
 * callers: none
 * callees: 0x10003251
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002D1B0(int a1, int a2)
{
  float v2; // ecx
  int result; // eax
  float v4; // [esp+4h] [ebp-4h] BYREF

  v4 = v2;
  result = ((int (__cdecl *)(int, const char *, float *))PyArg_ParseTuple)(a2, "f:SetSkyDayTime", &v4);
  if ( result )
  {
    sub_10003251(v4);
    return ++Py_NoneStruct;
  }
  return result;
}
