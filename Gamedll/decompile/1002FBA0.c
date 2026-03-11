/*
 * func-name: sub_1002FBA0
 * func-address: 0x1002fba0
 * callers: none
 * callees: 0x10006181, 0x1002dc10
 */

int __usercall sub_1002FBA0@<eax>(double a1@<st0>, int a2, int a3)
{
  _DWORD *v4; // [esp+8h] [ebp-10h] BYREF
  _DWORD *v5; // [esp+Ch] [ebp-Ch] BYREF
  int v6; // [esp+10h] [ebp-8h] BYREF
  float v7; // [esp+14h] [ebp-4h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **, _DWORD **))PyArg_ParseTuple)(
          a3,
          "OO:Vector_ScalarProjectionOntoVector",
          &v4,
          &v5)
    || sub_1002DC10(&v7, v4, (const char **)dword_103B4E84, 1) == -1
    || sub_1002DC10(&v6, v5, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  sub_10006181(v6);
  v7 = a1;
  return PyFloat_FromDouble(COERCE_UNSIGNED_INT64(v7), HIDWORD(COERCE_UNSIGNED_INT64(v7)));
}
