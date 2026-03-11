/*
 * func-name: sub_1002E550
 * func-address: 0x1002e550
 * callers: none
 * callees: 0x1002dc10, 0x102c9d50
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002E550(int a1, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-8h] BYREF
  void *v4; // [esp+4h] [ebp-4h] BYREF

  v3 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **))PyArg_ParseTuple)(a2, "O:delete_Vector2", &v3)
    || sub_1002DC10(&v4, v3, (const char **)dword_103B4E88, 1) == -1 )
  {
    return 0;
  }
  operator delete(v4);
  return ++Py_NoneStruct;
}
