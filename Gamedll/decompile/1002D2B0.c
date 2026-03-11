/*
 * func-name: sub_1002D2B0
 * func-address: 0x1002d2b0
 * callers: none
 * callees: 0x10003ebd
 */

int __cdecl sub_1002D2B0(int a1, int a2)
{
  int v2; // ecx
  int result; // eax
  int v4; // eax
  int v5; // [esp+0h] [ebp-4h] BYREF

  v5 = v2;
  result = ((int (__cdecl *)(int, const char *, int *))PyArg_ParseTuple)(a2, "i:getRandomWholeNumber", &v5);
  if ( result )
  {
    v4 = sub_10003EBD(v5);
    return PyInt_FromLong(v4);
  }
  return result;
}
