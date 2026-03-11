/*
 * func-name: sub_1002FAF0
 * func-address: 0x1002faf0
 * callers: none
 * callees: 0x1002dc10
 */

int __cdecl sub_1002FAF0(int a1, int a2)
{
  _DWORD *v3; // [esp+8h] [ebp-10h] BYREF
  _DWORD *v4; // [esp+Ch] [ebp-Ch] BYREF
  float *v5; // [esp+10h] [ebp-8h] BYREF
  float v6; // [esp+14h] [ebp-4h] BYREF

  v3 = 0;
  v4 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **, _DWORD **))PyArg_ParseTuple)(a2, "OO:Vector_Dot", &v3, &v4)
    || sub_1002DC10(&v6, v3, (const char **)dword_103B4E84, 1) == -1
    || sub_1002DC10(&v5, v4, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  v6 = v5[1] * *(float *)(LODWORD(v6) + 4) + *v5 * *(float *)LODWORD(v6) + v5[2] * *(float *)(LODWORD(v6) + 8);
  return PyFloat_FromDouble(COERCE_UNSIGNED_INT64(v6), HIDWORD(COERCE_UNSIGNED_INT64(v6)));
}
