/*
 * func-name: sub_10030100
 * func-address: 0x10030100
 * callers: none
 * callees: 0x1002dc10
 */

int __cdecl sub_10030100(int a1, int a2)
{
  _DWORD *v3; // [esp+8h] [ebp-8h] BYREF
  float v4; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **))PyArg_ParseTuple)(a2, "O:Vector_Average", &v3)
    || sub_1002DC10(&v4, v3, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  v4 = (*(float *)(LODWORD(v4) + 4) + *(float *)LODWORD(v4) + *(float *)(LODWORD(v4) + 8)) * 0.3333329856395721;
  return PyFloat_FromDouble(COERCE_UNSIGNED_INT64(v4), HIDWORD(COERCE_UNSIGNED_INT64(v4)));
}
