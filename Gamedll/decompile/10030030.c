/*
 * func-name: sub_10030030
 * func-address: 0x10030030
 * callers: none
 * callees: 0x1002dc10, 0x102c0b90
 */

int __cdecl sub_10030030(int a1, int a2)
{
  _DWORD *v3; // [esp+8h] [ebp-18h] BYREF
  _DWORD *v4; // [esp+Ch] [ebp-14h] BYREF
  _DWORD *v5; // [esp+10h] [ebp-10h] BYREF
  int v6; // [esp+14h] [ebp-Ch] BYREF
  int v7; // [esp+18h] [ebp-8h] BYREF
  float v8; // [esp+1Ch] [ebp-4h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( !PyArg_ParseTuple(a2, "OOO:Vector_DistanceToLine", &v3, &v4, &v5)
    || sub_1002DC10(&v8, v3, (const char **)dword_103B4E84, 1) == -1
    || sub_1002DC10(&v7, v4, (const char **)dword_103B4E84, 1) == -1
    || sub_1002DC10(&v6, v5, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  v8 = sub_102C0B90(v7, v6);
  return PyFloat_FromDouble(COERCE_UNSIGNED_INT64(v8), HIDWORD(COERCE_UNSIGNED_INT64(v8)));
}
