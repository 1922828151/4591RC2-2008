/*
 * func-name: sub_1002F160
 * func-address: 0x1002f160
 * callers: none
 * callees: 0x1002dc10, 0x102c9dbc
 */

int __cdecl sub_1002F160(int a1, int a2)
{
  _DWORD *v3; // [esp+8h] [ebp-8h] BYREF
  float v4; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **))PyArg_ParseTuple)(a2, "O:Vector_Length", &v3)
    || sub_1002DC10(&v4, v3, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  v4 = *(float *)(LODWORD(v4) + 4) * *(float *)(LODWORD(v4) + 4)
     + *(float *)LODWORD(v4) * *(float *)LODWORD(v4)
     + *(float *)(LODWORD(v4) + 8) * *(float *)(LODWORD(v4) + 8);
  v4 = sqrt(v4);
  return PyFloat_FromDouble(COERCE_UNSIGNED_INT64(v4), HIDWORD(COERCE_UNSIGNED_INT64(v4)));
}
