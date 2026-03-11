/*
 * func-name: sub_1002E3C0
 * func-address: 0x1002e3c0
 * callers: none
 * callees: 0x1002dc10
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002E3C0(int a1, int a2)
{
  float *v3; // eax
  _DWORD *v4; // [esp+0h] [ebp-14h] BYREF
  float v5; // [esp+4h] [ebp-10h] BYREF
  float v6; // [esp+8h] [ebp-Ch] BYREF
  float *v7; // [esp+Ch] [ebp-8h] BYREF
  float v8; // [esp+10h] [ebp-4h]

  v4 = 0;
  if ( !PyArg_ParseTuple(a2, "Off:Vector2___call__", &v4, &v6, &v5)
    || sub_1002DC10(&v7, v4, (const char **)dword_103B4E88, 1) == -1 )
  {
    return 0;
  }
  v3 = v7;
  v8 = v5;
  *v7 = v6;
  v3[1] = v8;
  return ++Py_NoneStruct;
}
