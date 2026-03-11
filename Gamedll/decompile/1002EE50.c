/*
 * func-name: sub_1002EE50
 * func-address: 0x1002ee50
 * callers: none
 * callees: 0x1002dc10, 0x1002de00, 0x102c9d98
 */

int __cdecl sub_1002EE50(int a1, int a2)
{
  float *v3; // eax
  float v4; // edx
  float v5; // ecx
  _DWORD *v6; // [esp+0h] [ebp-14h] BYREF
  float *v7; // [esp+4h] [ebp-10h] BYREF
  float v8; // [esp+8h] [ebp-Ch]
  float v9; // [esp+Ch] [ebp-8h]
  float v10; // [esp+10h] [ebp-4h]

  v6 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **))PyArg_ParseTuple)(a2, "O:Vector___neg__", &v6)
    || sub_1002DC10(&v7, v6, (const char **)dword_103B4E84, 1) == -1 )
  {
    return 0;
  }
  v8 = -*v7;
  v9 = -v7[1];
  v10 = -v7[2];
  v3 = (float *)operator new(0xCu);
  if ( v3 )
  {
    v4 = v9;
    *v3 = v8;
    v5 = v10;
    v3[1] = v4;
    v3[2] = v5;
  }
  else
  {
    v3 = 0;
  }
  return sub_1002DE00((int)v3, dword_103B4E84, 1);
}
