/*
 * func-name: sub_10030470
 * func-address: 0x10030470
 * callers: none
 * callees: 0x1002dc10
 */

int __cdecl sub_10030470(int a1, int a2)
{
  _DWORD *v3; // [esp+8h] [ebp-8h] BYREF
  int v4; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **))PyArg_ParseTuple)(a2, "O:Vector4_w_get", &v3)
    || sub_1002DC10(&v4, v3, (const char **)dword_103B4E80, 1) == -1 )
  {
    return 0;
  }
  else
  {
    return PyFloat_FromDouble(
             COERCE_UNSIGNED_INT64(*(float *)(v4 + 12)),
             HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v4 + 12))));
  }
}
