/*
 * func-name: sub_10006CD0
 * func-address: 0x10006cd0
 * callers: 0x10005510
 * callees: none
 */

void __cdecl sub_10006CD0(_DWORD *a1, int a2, float *a3, float a4)
{
  int v4; // edx
  double v5; // st7
  int (__thiscall *v6)(_DWORD *); // edx
  int v7; // eax
  void (__thiscall ***v8)(_DWORD, _DWORD *); // ecx
  _DWORD v9[2]; // [esp+4h] [ebp-40h] BYREF
  double v10; // [esp+Ch] [ebp-38h]
  double v11; // [esp+14h] [ebp-30h]
  double v12; // [esp+1Ch] [ebp-28h]
  float v13; // [esp+24h] [ebp-20h]
  float v14; // [esp+28h] [ebp-1Ch]
  float v15; // [esp+2Ch] [ebp-18h]
  float v16; // [esp+34h] [ebp-10h]
  float v17; // [esp+38h] [ebp-Ch]
  float v18; // [esp+3Ch] [ebp-8h]
  float v19; // [esp+40h] [ebp-4h]

  if ( a1[8] )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(a2 + 44) + 4);
    v10 = *(double *)a2;
    v5 = *(double *)(a2 + 8);
    v9[1] = v4;
    v11 = v5;
    v12 = *(double *)(a2 + 16);
    v13 = *(float *)(a2 + 24);
    v14 = *(float *)(a2 + 28);
    v15 = *(float *)(a2 + 32);
    v16 = *a3;
    v17 = a3[1];
    v6 = *(int (__thiscall **)(_DWORD *))(*a1 + 8);
    v18 = a3[2];
    v19 = a4;
    v7 = v6(a1);
    v8 = (void (__thiscall ***)(_DWORD, _DWORD *))a1[8];
    v9[0] = v7;
    (**v8)(v8, v9);
  }
}
