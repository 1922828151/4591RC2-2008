/*
 * func-name: sub_10030D00
 * func-address: 0x10030d00
 * callers: none
 * callees: 0x1002dc10
 */

int __cdecl sub_10030D00(int a1, int a2)
{
  _DWORD *v3; // [esp+8h] [ebp-8h] BYREF
  float v4; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **))PyArg_ParseTuple)(a2, "O:Vector4_Average", &v3)
    || sub_1002DC10(&v4, v3, (const char **)dword_103B4E80, 1) == -1 )
  {
    return 0;
  }
  v4 = (*(float *)(LODWORD(v4) + 4) + *(float *)LODWORD(v4) + *(float *)(LODWORD(v4) + 8) + *(float *)(LODWORD(v4) + 12))
     * 0.25;
  return PyFloat_FromDouble(COERCE_UNSIGNED_INT64(v4), HIDWORD(COERCE_UNSIGNED_INT64(v4)));
}
