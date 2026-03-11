/*
 * func-name: sub_1002F9C0
 * func-address: 0x1002f9c0
 * callers: none
 * callees: 0x100029cd, 0x1002dc10, 0x1002de00, 0x102c9d98
 */

int __cdecl sub_1002F9C0(int a1, int a2)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // ecx
  _DWORD *v8; // [esp+0h] [ebp-14h] BYREF
  int *v9; // [esp+4h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]

  v8 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **))PyArg_ParseTuple)(a2, "O:Vector_Normalized", &v8)
    || sub_1002DC10(&v9, v8, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  v3 = v9[1];
  v4 = v9[2];
  v10 = *v9;
  v11 = v3;
  v12 = v4;
  sub_100029CD();
  v5 = operator new(0xCu);
  if ( v5 )
  {
    v6 = v11;
    *v5 = v10;
    v7 = v12;
    v5[1] = v6;
    v5[2] = v7;
  }
  else
  {
    v5 = 0;
  }
  return sub_1002DE00((int)v5, dword_103B4E84, 1);
}
