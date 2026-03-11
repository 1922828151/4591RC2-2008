/*
 * func-name: sub_1002CF80
 * func-address: 0x1002cf80
 * callers: none
 * callees: 0x100115ea
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002CF80(int a1, int a2)
{
  int result; // eax
  float v3; // [esp+8h] [ebp-Ch] BYREF
  float v4; // [esp+Ch] [ebp-8h] BYREF
  int v5; // [esp+10h] [ebp-4h] BYREF

  result = PyArg_ParseTuple(a2, "iff:FadeSky", &v5, &v4, &v3);
  if ( result )
  {
    sub_100115EA(v5, v4, v3);
    return ++Py_NoneStruct;
  }
  return result;
}
