/*
 * func-name: sub_1002F700
 * func-address: 0x1002f700
 * callers: none
 * callees: 0x1002dc10, 0x1002de00, 0x102c0d10, 0x102c9d98
 */

int __cdecl sub_1002F700(int a1, int a2)
{
  int *v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // [esp+0h] [ebp-24h] BYREF
  _DWORD *v9; // [esp+4h] [ebp-20h] BYREF
  _DWORD *v10; // [esp+8h] [ebp-1Ch] BYREF
  int v11; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h] BYREF
  _BYTE v14[12]; // [esp+18h] [ebp-Ch] BYREF

  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( !PyArg_ParseTuple(a2, "OOO:Vector_NormalFromTriangle", &v8, &v9, &v10)
    || sub_1002DC10(&v13, v8, (const char **)dword_103B4E84, 1) == -1
    || sub_1002DC10(&v12, v9, (const char **)dword_103B4E84, 1) == -1
    || sub_1002DC10(&v11, v10, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  v3 = (int *)sub_102C0D10(v14, v13, v12, v11);
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
