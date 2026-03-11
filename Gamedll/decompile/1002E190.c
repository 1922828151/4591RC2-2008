/*
 * func-name: sub_1002E190
 * func-address: 0x1002e190
 * callers: none
 * callees: 0x1002dc10
 */

int __cdecl sub_1002E190(int a1, int a2)
{
  _DWORD *v3; // [esp+8h] [ebp-8h] BYREF
  float *v4; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **))PyArg_ParseTuple)(a2, "O:Vector2_x_get", &v3)
    || sub_1002DC10(&v4, v3, (const char **)dword_103B4E88, 1) == -1 )
  {
    return 0;
  }
  else
  {
    return PyFloat_FromDouble(COERCE_UNSIGNED_INT64(*v4), HIDWORD(COERCE_UNSIGNED_INT64(*v4)));
  }
}
