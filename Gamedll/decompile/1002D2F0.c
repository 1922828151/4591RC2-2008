/*
 * func-name: sub_1002D2F0
 * func-address: 0x1002d2f0
 * callers: none
 * callees: 0x1000b0b9, 0x1002c940
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002D2F0(int a1, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-8h] BYREF
  int v4; // [esp+4h] [ebp-4h] BYREF

  v3 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **))PyArg_ParseTuple)(a2, "O:addInteriorVolumeBox", &v3)
    || sub_1002C940(&v4, v3, (const char **)dword_103B4E5C, 1) == -1 )
  {
    return 0;
  }
  sub_1000B0B9(v4, (int)v3);
  return ++Py_NoneStruct;
}
