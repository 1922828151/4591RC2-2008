/*
 * func-name: sub_1002E8B0
 * func-address: 0x1002e8b0
 * callers: none
 * callees: 0x1002de00, 0x102c9d98
 */

int __cdecl sub_1002E8B0(int a1, int a2)
{
  int result; // eax
  float *v3; // eax
  float v4; // [esp+0h] [ebp-14h] BYREF
  float v5; // [esp+4h] [ebp-10h] BYREF
  float v6; // [esp+8h] [ebp-Ch] BYREF
  float v7; // [esp+Ch] [ebp-8h]
  float v8; // [esp+10h] [ebp-4h]

  result = PyArg_ParseTuple(a2, "fff:new_Vector", &v6, &v4, &v5);
  if ( result )
  {
    v3 = (float *)operator new(0xCu);
    if ( v3 )
    {
      v7 = v4;
      v8 = v5;
      *v3 = v6;
      v3[1] = v7;
      v3[2] = v8;
    }
    else
    {
      v3 = 0;
    }
    return sub_1002DE00((int)v3, dword_103B4E84, 1);
  }
  return result;
}
