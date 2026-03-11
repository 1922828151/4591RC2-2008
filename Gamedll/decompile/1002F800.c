/*
 * func-name: sub_1002F800
 * func-address: 0x1002f800
 * callers: none
 * callees: 0x1002dc10, 0x102c0c90
 */

int __cdecl sub_1002F800(int a1, int a2)
{
  unsigned __int64 v3; // st7
  _DWORD *v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v4 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **))PyArg_ParseTuple)(a2, "O:Vector_Yaw", &v4)
    || sub_1002DC10(&v5, v4, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  *(double *)&v3 = sub_102C0C90(v5);
  return PyFloat_FromDouble(v3, HIDWORD(v3));
}
