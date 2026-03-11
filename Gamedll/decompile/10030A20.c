/*
 * func-name: sub_10030A20
 * func-address: 0x10030a20
 * callers: none
 * callees: 0x1002dc10, 0x1002de00
 */

int __cdecl sub_10030A20(int a1, int a2)
{
  float *v3; // eax
  float *v4; // ecx
  _DWORD *v5; // [esp+0h] [ebp-10h] BYREF
  _DWORD *v6; // [esp+4h] [ebp-Ch] BYREF
  float *v7; // [esp+8h] [ebp-8h] BYREF
  float *v8; // [esp+Ch] [ebp-4h] BYREF

  v5 = 0;
  v6 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **, _DWORD **))PyArg_ParseTuple)(
          a2,
          "OO:Vector4___isub__",
          &v5,
          &v6)
    || sub_1002DC10(&v7, v5, (const char **)dword_103B4E80, 1) == -1
    || sub_1002DC10(&v8, v6, (const char **)dword_103B4E80, 1) == -1 )
  {
    return 0;
  }
  v3 = v7;
  v4 = v8;
  *v7 = *v7 - *v8;
  v3[1] = v3[1] - v4[1];
  v3[2] = v3[2] - v4[2];
  v3[3] = v3[3] - v4[3];
  return sub_1002DE00((int)v3, dword_103B4E80, 0);
}
