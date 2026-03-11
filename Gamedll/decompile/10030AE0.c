/*
 * func-name: sub_10030AE0
 * func-address: 0x10030ae0
 * callers: none
 * callees: 0x1002dc10, 0x1002de00, 0x102c9d98
 */

int __cdecl sub_10030AE0(int a1, int a2)
{
  float *v3; // eax
  float v4; // ecx
  float v5; // edx
  float v6; // ecx
  float v7; // edx
  _DWORD *v8; // [esp+0h] [ebp-20h] BYREF
  float v9; // [esp+4h] [ebp-1Ch] BYREF
  float *v10; // [esp+8h] [ebp-18h] BYREF
  float v11; // [esp+Ch] [ebp-14h]
  float v12; // [esp+10h] [ebp-10h]
  float v13; // [esp+14h] [ebp-Ch]
  float v14; // [esp+18h] [ebp-8h]
  float v15; // [esp+1Ch] [ebp-4h]

  v8 = 0;
  if ( !((int (__cdecl *)(int, const char *, _DWORD **, float *))PyArg_ParseTuple)(a2, "Of:Vector4___div__", &v8, &v9)
    || sub_1002DC10(&v10, v8, (const char **)dword_103B4E80, 1) == -1 )
  {
    return 0;
  }
  v11 = 1.0 / v9;
  v12 = *v10 * v11;
  v13 = v10[1] * v11;
  v14 = v10[2] * v11;
  v15 = v11 * v10[3];
  v3 = (float *)operator new(0x10u);
  if ( v3 )
  {
    v4 = v12;
    v5 = v13;
    *v3 = 0.0;
    v3[1] = 0.0;
    v3[2] = 0.0;
    *v3 = v4;
    v6 = v14;
    v3[1] = v5;
    v7 = v15;
    v3[2] = v6;
    v3[3] = v7;
  }
  else
  {
    v3 = 0;
  }
  return sub_1002DE00((int)v3, dword_103B4E80, 1);
}
