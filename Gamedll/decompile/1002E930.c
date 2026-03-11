/*
 * func-name: sub_1002E930
 * func-address: 0x1002e930
 * callers: none
 * callees: 0x10010613, 0x1002dc10, 0x1002de00, 0x102c9d98
 */

int __cdecl sub_1002E930(int a1, int a2)
{
  int *v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // [esp+0h] [ebp-1Ch] BYREF
  _DWORD *v9; // [esp+4h] [ebp-18h] BYREF
  int v10; // [esp+8h] [ebp-14h] BYREF
  int v11; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v12[12]; // [esp+10h] [ebp-Ch] BYREF

  v8 = 0;
  v9 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **, _DWORD **))PyArg_ParseTuple)(a2, "OO:Vector___xor__", &v8, &v9)
    || sub_1002DC10(&v11, v8, (const char **)dword_103B4E84, 1) == -1
    || sub_1002DC10(&v10, v9, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  v3 = (int *)sub_10010613((int)v12, v10);
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
