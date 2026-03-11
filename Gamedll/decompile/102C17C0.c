/*
 * func-name: sub_102C17C0
 * func-address: 0x102c17c0
 * callers: none
 * callees: 0x10002e2d, 0x102c16a0
 */

int __thiscall sub_102C17C0(int this)
{
  float v2; // eax
  float v3; // ecx
  float v4; // edx
  float v5; // eax
  float v6; // eax
  int v7; // ecx
  float v8; // edx
  float *v9; // eax
  float v10; // ecx
  float v11; // edx
  float v12; // edi
  float v13; // ebx
  float v14; // ebp
  int v15; // eax
  float v16; // ecx
  float v17; // edx
  float *v18; // eax
  float v19; // ecx
  float v20; // edx
  double v21; // st7
  float v23; // [esp+10h] [ebp-3Ch]
  float v24; // [esp+14h] [ebp-38h]
  float v25; // [esp+18h] [ebp-34h]
  float v26; // [esp+1Ch] [ebp-30h] BYREF
  float v27; // [esp+20h] [ebp-2Ch]
  float v28; // [esp+24h] [ebp-28h]
  float v29; // [esp+28h] [ebp-24h]
  float v30; // [esp+2Ch] [ebp-20h]
  float v31; // [esp+30h] [ebp-1Ch]
  float v32; // [esp+34h] [ebp-18h] BYREF
  float v33; // [esp+38h] [ebp-14h]
  float v34; // [esp+3Ch] [ebp-10h]
  _DWORD v35[3]; // [esp+40h] [ebp-Ch] BYREF

  v2 = *(float *)(this + 16);
  v3 = *(float *)(this + 20);
  v4 = *(float *)(this + 24);
  v26 = v2;
  v5 = *(float *)(this + 32);
  v27 = v3;
  v23 = v5;
  v6 = *(float *)this;
  v24 = *(float *)(this + 36);
  v7 = *(_DWORD *)(this + 4);
  v28 = v4;
  v8 = *(float *)(this + 40);
  *(float *)v35 = v6;
  v35[1] = v7;
  v25 = v8;
  v35[2] = *(_DWORD *)(this + 8);
  v9 = (float *)sub_10002E2D((int)&v32, (int)v35);
  v10 = v9[1];
  v29 = *v9;
  v11 = v9[2];
  v30 = v10;
  v32 = v26 - v29;
  v12 = v32;
  v31 = v11;
  v33 = v27 - v10;
  v13 = v33;
  v26 = v32;
  v27 = v33;
  v34 = v28 - v11;
  v14 = v34;
  v28 = v34;
  v15 = sub_10002E2D((int)&v32, (int)v35);
  v16 = *(float *)(v15 + 4);
  v29 = *(float *)v15;
  v17 = *(float *)(v15 + 8);
  v30 = v16;
  v31 = v17;
  v18 = (float *)sub_10002E2D((int)v35, (int)&v26);
  v19 = v18[1];
  v32 = *v18;
  v20 = v18[2];
  v26 = v32 + v29;
  v27 = v19 + v30;
  v21 = v20 + v31;
  *(float *)(this + 16) = v12;
  *(float *)(this + 20) = v13;
  *(float *)(this + 24) = v14;
  v28 = v21;
  v32 = v23 - v26;
  *(float *)(this + 32) = v32;
  v33 = v24 - v27;
  *(float *)(this + 36) = v33;
  v34 = v25 - v28;
  *(float *)(this + 40) = v34;
  sub_102C16A0((float *)this);
  return this;
}
