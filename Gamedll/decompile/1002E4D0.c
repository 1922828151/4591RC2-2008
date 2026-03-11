/*
 * func-name: sub_1002E4D0
 * func-address: 0x1002e4d0
 * callers: none
 * callees: 0x1002dc10, 0x1002de00
 */

int __cdecl sub_1002E4D0(int a1, int a2)
{
  int v3; // eax
  _DWORD *v4; // [esp+0h] [ebp-10h] BYREF
  float v5; // [esp+4h] [ebp-Ch] BYREF
  float *v6; // [esp+8h] [ebp-8h] BYREF
  float v7; // [esp+Ch] [ebp-4h]

  v4 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **, float *))PyArg_ParseTuple)(a2, "Of:Vector2___imul__", &v4, &v5)
    || sub_1002DC10(&v6, v4, (const char **)dword_103B4E88, 1) == -1 )
  {
    return 0;
  }
  v3 = (int)v6;
  v7 = v5;
  *v6 = v5 * *v6;
  *(float *)(v3 + 4) = *(float *)(v3 + 4) * v7;
  return sub_1002DE00(v3, dword_103B4E88, 0);
}
