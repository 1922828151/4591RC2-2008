/*
 * func-name: sub_1002F1F0
 * func-address: 0x1002f1f0
 * callers: none
 * callees: 0x1001a5c8, 0x1002dc10
 */

int __cdecl sub_1002F1F0(int a1, int a2)
{
  int v3; // eax
  _DWORD *v4; // [esp+0h] [ebp-8h] BYREF
  int v5; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **))PyArg_ParseTuple)(a2, "O:Vector_IsNearlyZero", &v4)
    || sub_1002DC10(&v5, v4, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  v3 = sub_1001A5C8();
  return PyInt_FromLong(v3);
}
