/*
 * func-name: sub_1002D030
 * func-address: 0x1002d030
 * callers: none
 * callees: 0x1000dda0
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002D030(int a1, int a2)
{
  int result; // eax
  float v3; // [esp+1Ch] [ebp-1Ch]
  float v4; // [esp+20h] [ebp-18h]
  float v5; // [esp+24h] [ebp-14h]
  float v6; // [esp+28h] [ebp-10h]
  float v7; // [esp+2Ch] [ebp-Ch] BYREF
  float v8; // [esp+30h] [ebp-8h] BYREF
  float v9; // [esp+34h] [ebp-4h] BYREF

  result = PyArg_ParseTuple(a2, "fffffff:FadeFog", &v9, &v8, &v7);
  if ( result )
  {
    sub_1000DDA0(v9, v8, v7, v6, v5, v4, v3);
    return ++Py_NoneStruct;
  }
  return result;
}
