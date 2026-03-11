/*
 * func-name: sub_1002ED30
 * func-address: 0x1002ed30
 * callers: none
 * callees: 0x1000bd2f, 0x1002dc10
 */

int __cdecl sub_1002ED30(int a1, int a2)
{
  unsigned __int8 v3; // al
  _DWORD *v4; // [esp+0h] [ebp-10h] BYREF
  _DWORD *v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **, _DWORD **))PyArg_ParseTuple)(a2, "OO:Vector___eq__", &v4, &v5)
    || sub_1002DC10(&v7, v4, (const char **)dword_103B4E84, 1) == -1
    || sub_1002DC10(&v6, v5, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  v3 = sub_1000BD2F(v6);
  return PyInt_FromLong(v3);
}
