/*
 * func-name: sub_10030540
 * func-address: 0x10030540
 * callers: none
 * callees: 0x1002dc10, 0x1002de00, 0x102c0860, 0x102c9d98
 */

int __cdecl sub_10030540(int a1, int a2)
{
  int *v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  int v7; // ebp
  float *v8; // eax
  _DWORD *v9; // [esp+14h] [ebp-24h] BYREF
  _DWORD *v10; // [esp+18h] [ebp-20h] BYREF
  float v11; // [esp+1Ch] [ebp-1Ch] BYREF
  int v12; // [esp+20h] [ebp-18h] BYREF
  int v13; // [esp+24h] [ebp-14h] BYREF
  int v14[4]; // [esp+28h] [ebp-10h] BYREF

  v9 = 0;
  v10 = 0;
  if ( !PyArg_ParseTuple(a2, "OOf:Vector4_Lerp", &v9, &v10, &v11)
    || sub_1002DC10(&v13, v9, (const char **)dword_103B4E80, 1) == -1
    || sub_1002DC10(&v12, v10, (const char **)dword_103B4E80, 1) == -1 )
  {
    return 0;
  }
  v3 = (int *)sub_102C0860((int)v14, v12, v11);
  v4 = *v3;
  v5 = v3[1];
  v6 = v3[2];
  v7 = v3[3];
  v8 = (float *)operator new(0x10u);
  if ( v8 )
  {
    *v8 = 0.0;
    v8[1] = 0.0;
    v8[2] = 0.0;
    *(_DWORD *)v8 = v4;
    *((_DWORD *)v8 + 1) = v5;
    *((_DWORD *)v8 + 2) = v6;
    *((_DWORD *)v8 + 3) = v7;
  }
  else
  {
    v8 = 0;
  }
  return sub_1002DE00((int)v8, dword_103B4E80, 1);
}
