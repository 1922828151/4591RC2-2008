/*
 * func-name: sub_1002CFE0
 * func-address: 0x1002cfe0
 * callers: none
 * callees: 0x1000dae9
 */

int __usercall sub_1002CFE0@<eax>(double a1@<st0>, int a2, int a3)
{
  int result; // eax
  int v4; // [esp+8h] [ebp-8h] BYREF
  float v5; // [esp+Ch] [ebp-4h]

  result = ((int (__cdecl *)(int, const char *, int *))PyArg_ParseTuple)(a3, "i:GetSkyValue", &v4);
  if ( result )
  {
    sub_1000DAE9(v4);
    v5 = a1;
    return PyFloat_FromDouble(COERCE_UNSIGNED_INT64(v5), HIDWORD(COERCE_UNSIGNED_INT64(v5)));
  }
  return result;
}
