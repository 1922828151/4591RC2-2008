/*
 * func-name: sub_1002EB90
 * func-address: 0x1002eb90
 * callers: none
 * callees: 0x1002dc10, 0x1002de00, 0x102c9d98
 */

int __cdecl sub_1002EB90(int a1, int a2)
{
  float *v3; // eax
  float v4; // ecx
  float v5; // edx
  _DWORD *v6; // [esp+0h] [ebp-1Ch] BYREF
  _DWORD *v7; // [esp+4h] [ebp-18h] BYREF
  float *v8; // [esp+8h] [ebp-14h] BYREF
  float *v9; // [esp+Ch] [ebp-10h] BYREF
  float v10; // [esp+10h] [ebp-Ch]
  float v11; // [esp+14h] [ebp-8h]
  float v12; // [esp+18h] [ebp-4h]

  v6 = 0;
  v7 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **, _DWORD **))PyArg_ParseTuple)(a2, "OO:Vector___sub__", &v6, &v7)
    || sub_1002DC10(&v8, v6, (const char **)dword_103B4E84, 1) == -1
    || sub_1002DC10(&v9, v7, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  v10 = *v8 - *v9;
  v11 = v8[1] - v9[1];
  v12 = v8[2] - v9[2];
  v3 = (float *)operator new(0xCu);
  if ( v3 )
  {
    v4 = v11;
    *v3 = v10;
    v5 = v12;
    v3[1] = v4;
    v3[2] = v5;
  }
  else
  {
    v3 = 0;
  }
  return sub_1002DE00((int)v3, dword_103B4E84, 1);
}
