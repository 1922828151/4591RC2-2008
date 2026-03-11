/*
 * func-name: sub_1002F670
 * func-address: 0x1002f670
 * callers: none
 * callees: 0x1002de00, 0x102c0aa0, 0x102c9d98
 */

int __cdecl sub_1002F670(int a1, int a2)
{
  int result; // eax
  int *v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  _DWORD *v7; // eax
  float v8; // [esp+18h] [ebp-18h] BYREF
  float v9; // [esp+1Ch] [ebp-14h] BYREF
  float v10; // [esp+20h] [ebp-10h] BYREF
  int v11[3]; // [esp+24h] [ebp-Ch] BYREF

  result = PyArg_ParseTuple(a2, "fff:Vector_MakeDirection", &v10, &v9, &v8);
  if ( result )
  {
    v3 = (int *)sub_102C0AA0((int)v11, v10, v9, v8);
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v7 = operator new(0xCu);
    if ( v7 )
    {
      *v7 = v4;
      v7[1] = v5;
      v7[2] = v6;
    }
    else
    {
      v7 = 0;
    }
    return sub_1002DE00((int)v7, dword_103B4E84, 1);
  }
  return result;
}
