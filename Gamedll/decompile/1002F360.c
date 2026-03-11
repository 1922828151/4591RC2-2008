/*
 * func-name: sub_1002F360
 * func-address: 0x1002f360
 * callers: none
 * callees: 0x1002dc10
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002F360(int a1, int a2)
{
  float *v3; // eax
  _DWORD *v4; // [esp+0h] [ebp-1Ch] BYREF
  float v5[2]; // [esp+4h] [ebp-18h] BYREF
  float v6; // [esp+Ch] [ebp-10h] BYREF
  float *v7; // [esp+10h] [ebp-Ch] BYREF
  float v8; // [esp+14h] [ebp-8h]
  float v9; // [esp+18h] [ebp-4h]

  v4 = 0;
  if ( !PyArg_ParseTuple(a2, "Offf:Vector_Set", &v4, &v6, v5)
    || sub_1002DC10(&v7, v4, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  v3 = v7;
  v8 = v5[0];
  v9 = v5[1];
  *v7 = v6;
  v3[1] = v8;
  v3[2] = v9;
  return ++Py_NoneStruct;
}
