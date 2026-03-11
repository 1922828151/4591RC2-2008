/*
 * func-name: sub_1002F250
 * func-address: 0x1002f250
 * callers: none
 * callees: 0x1002dc10
 */

int __cdecl sub_1002F250(int a1, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-8h] BYREF
  float *v4; // [esp+4h] [ebp-4h] BYREF

  v3 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **))PyArg_ParseTuple)(a2, "O:Vector_IsZero", &v3)
    || sub_1002DC10(&v4, v3, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  if ( 0.0 == *v4 && 0.0 == v4[1] && 0.0 == v4[2] )
    return PyInt_FromLong(1);
  return PyInt_FromLong(0);
}
