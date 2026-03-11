/*
 * func-name: sub_10101680
 * func-address: 0x10101680
 * callers: 0x10101920
 * callees: 0x101189f0, 0x101786e0, 0x10178720, 0x101a251c
 */

int __stdcall sub_10101680(float *a1)
{
  struct RenderDevice *v2; // eax
  struct RenderDevice *v3; // eax
  float v5; // [esp+4h] [ebp-64h]
  float v6; // [esp+8h] [ebp-60h]
  float v7; // [esp+10h] [ebp-58h]
  float v8; // [esp+14h] [ebp-54h]
  float v9; // [esp+18h] [ebp-50h]
  float v10; // [esp+1Ch] [ebp-4Ch]
  float v11; // [esp+20h] [ebp-48h]
  float v12; // [esp+24h] [ebp-44h]
  _DWORD v13[16]; // [esp+28h] [ebp-40h] BYREF
  float v14; // [esp+6Ch] [ebp+4h]
  float v15; // [esp+6Ch] [ebp+4h]
  float v16; // [esp+6Ch] [ebp+4h]

  memset(v13, 0, sizeof(v13));
  sub_101786E0(1.0);
  *(float *)&v13[15] = 1.0;
  v14 = a1[9] - a1[6];
  v6 = v14;
  v15 = a1[8] - a1[5];
  v5 = v15;
  v16 = a1[7] - a1[4];
  sub_10178720(v16, v5, v6);
  v7 = a1[7] + a1[4];
  v8 = a1[8] + a1[5];
  v9 = a1[9] + a1[6];
  v10 = v7 * 0.5;
  *(float *)&v13[12] = v10;
  v11 = v8 * 0.5;
  *(float *)&v13[13] = v11;
  v12 = 0.5 * v9;
  *(float *)&v13[14] = v12;
  v2 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD *))(*(_DWORD *)v2 + 456))(v2, v13);
  v3 = RenderDevice::Instance();
  return (*(int (__thiscall **)(struct RenderDevice *, int, int, int))(*(_DWORD *)v3 + 424))(v3, 4, 8, 12);
}
