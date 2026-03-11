/*
 * func-name: sub_10105E20
 * func-address: 0x10105e20
 * callers: 0x10106ce0
 * callees: 0x10105a40, 0x101a2516, 0x101a295e
 */

int __cdecl sub_10105E20(int a1, float *a2, int a3, double a4, double a5, double a6)
{
  int v8; // ebx
  bool v9; // cc
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int result; // eax
  float v30; // [esp+1Ch] [ebp-50h]
  float v31; // [esp+24h] [ebp-48h]
  float retaddr; // [esp+70h] [ebp+4h]
  float v33; // [esp+78h] [ebp+Ch]
  float v34; // [esp+78h] [ebp+Ch]
  float v35; // [esp+78h] [ebp+Ch]
  float v36; // [esp+7Ch] [ebp+10h]
  float v37; // [esp+7Ch] [ebp+10h]
  float v38; // [esp+7Ch] [ebp+10h]
  double v40; // [esp+98h] [ebp+2Ch]
  double v42; // [esp+A0h] [ebp+34h]

  v30 = sub_10105A40(0.0, 0.0, *(float *)&a4) * *((float *)&a4 + 1);
  *(float *)a3 = v30;
  *(float *)(a3 + 4) = v30;
  *(float *)(a3 + 8) = v30;
  *(float *)(a3 + 12) = 1.0;
  *a2 = 0.0;
  v31 = *(float *)&a4 * (6.283185482025146 * *(float *)&a4);
  v33 = sqrt(v31);
  v8 = a3 + 16;
  v34 = 1.0 / v33;
  v40 = v34;
  v42 = *(float *)&a3;
  do
  {
    v35 = (float)a1;
    v36 = -((v35 * v35 + a5) / a6);
    v37 = exp(v36);
    v8 += 16;
    v9 = a1 + 1 < 8;
    v38 = v37 * v40;
    ++a1;
    retaddr = v38 * a4;
    a2[a1 - 1] = v35 * v42;
    *(float *)(v8 - 16) = retaddr;
    *(float *)(v8 - 12) = retaddr;
    *(float *)(v8 - 8) = retaddr;
    *(float *)(v8 - 4) = 1.0;
  }
  while ( v9 );
  v10 = *(_DWORD *)(a3 + 20);
  v11 = *(_DWORD *)(a3 + 24);
  *(_DWORD *)(a3 + 128) = *(_DWORD *)(a3 + 16);
  v12 = *(_DWORD *)(a3 + 28);
  *(_DWORD *)(a3 + 132) = v10;
  *(_DWORD *)(a3 + 136) = v11;
  *(_DWORD *)(a3 + 140) = v12;
  a2[8] = -a2[1];
  v13 = *(_DWORD *)(a3 + 36);
  v14 = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(a3 + 144) = *(_DWORD *)(a3 + 32);
  v15 = *(_DWORD *)(a3 + 44);
  *(_DWORD *)(a3 + 148) = v13;
  *(_DWORD *)(a3 + 152) = v14;
  *(_DWORD *)(a3 + 156) = v15;
  a2[9] = -a2[2];
  v16 = *(_DWORD *)(a3 + 52);
  v17 = *(_DWORD *)(a3 + 56);
  *(_DWORD *)(a3 + 160) = *(_DWORD *)(a3 + 48);
  v18 = *(_DWORD *)(a3 + 60);
  *(_DWORD *)(a3 + 164) = v16;
  *(_DWORD *)(a3 + 168) = v17;
  *(_DWORD *)(a3 + 172) = v18;
  a2[10] = -a2[3];
  v19 = *(_DWORD *)(a3 + 68);
  v20 = *(_DWORD *)(a3 + 72);
  *(_DWORD *)(a3 + 176) = *(_DWORD *)(a3 + 64);
  v21 = *(_DWORD *)(a3 + 76);
  *(_DWORD *)(a3 + 180) = v19;
  *(_DWORD *)(a3 + 184) = v20;
  *(_DWORD *)(a3 + 188) = v21;
  a2[11] = -a2[4];
  v22 = *(_DWORD *)(a3 + 84);
  v23 = *(_DWORD *)(a3 + 88);
  *(_DWORD *)(a3 + 192) = *(_DWORD *)(a3 + 80);
  v24 = *(_DWORD *)(a3 + 92);
  *(_DWORD *)(a3 + 196) = v22;
  *(_DWORD *)(a3 + 200) = v23;
  *(_DWORD *)(a3 + 204) = v24;
  a2[12] = -a2[5];
  v25 = *(_DWORD *)(a3 + 100);
  v26 = *(_DWORD *)(a3 + 104);
  *(_DWORD *)(a3 + 208) = *(_DWORD *)(a3 + 96);
  v27 = *(_DWORD *)(a3 + 108);
  *(_DWORD *)(a3 + 212) = v25;
  *(_DWORD *)(a3 + 216) = v26;
  *(_DWORD *)(a3 + 220) = v27;
  a2[13] = -a2[6];
  *(_DWORD *)(a3 + 224) = *(_DWORD *)(a3 + 112);
  *(_DWORD *)(a3 + 228) = *(_DWORD *)(a3 + 116);
  v28 = *(_DWORD *)(a3 + 124);
  *(_DWORD *)(a3 + 232) = *(_DWORD *)(a3 + 120);
  *(_DWORD *)(a3 + 236) = v28;
  result = 0;
  a2[14] = -a2[7];
  return result;
}
