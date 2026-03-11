/*
 * func-name: ?SetParticleDefaults@BouncyParticles@@UAEXAAVParticle@@@Z_0
 * func-address: 0x100acfa0
 * callers: 0x10010668
 * callees: 0x100029cd
 */

void __thiscall BouncyParticles::SetParticleDefaults(BouncyParticles *this, struct Particle *a2)
{
  double v4; // st7
  float v5; // [esp+Ch] [ebp-34h]
  float v6; // [esp+10h] [ebp-30h]
  double v7; // [esp+10h] [ebp-30h]
  float v8; // [esp+1Ch] [ebp-24h]
  float v9; // [esp+1Ch] [ebp-24h]
  float v10; // [esp+20h] [ebp-20h]
  float v11; // [esp+20h] [ebp-20h]
  float v12; // [esp+24h] [ebp-1Ch]
  float v13; // [esp+24h] [ebp-1Ch]
  float v14; // [esp+28h] [ebp-18h]
  float v15; // [esp+28h] [ebp-18h]
  float v16; // [esp+2Ch] [ebp-14h]
  float v17; // [esp+2Ch] [ebp-14h]
  float v18; // [esp+30h] [ebp-10h]
  float v19; // [esp+30h] [ebp-10h]
  float v20; // [esp+3Ch] [ebp-4h]
  float v21; // [esp+44h] [ebp+4h]
  float v22; // [esp+44h] [ebp+4h]

  *(_DWORD *)a2 = *((_DWORD *)this + 5);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 6);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 7);
  *((float *)a2 + 3) = 0.0;
  *((float *)a2 + 4) = 0.0;
  *((float *)a2 + 5) = 0.0;
  *((float *)a2 + 13) = (double)(rand() % 100) / 100.0 * *((float *)this + 73) + *((float *)this + 72);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 80);
  *((_DWORD *)a2 + 12) = *((_DWORD *)this + 80);
  v5 = (double)(rand() % 100) / 100.0 * *((float *)this + 63);
  v6 = (double)(rand() % 100) / 100.0 * *((float *)this + 63);
  v20 = (double)(rand() % 100) / 100.0 * *((float *)this + 63);
  v8 = (double)(rand() % 100) / 100.0 * *((float *)this + 61);
  v10 = (double)(rand() % 100) / 100.0 * *((float *)this + 62);
  v12 = (double)(rand() % 100) / 100.0 * *((float *)this + 63);
  v14 = v8 - v5;
  v16 = v10 - v6;
  v18 = v12 - v20;
  v9 = *((float *)this + 58) + v14;
  v11 = *((float *)this + 59) + v16;
  v13 = *((float *)this + 60) + v18;
  sub_100029CD();
  v21 = (double)(rand() % 100) / 100.0 * *((float *)this + 74) + *((float *)this + 69);
  v15 = v9 * v21;
  *((float *)a2 + 6) = v15;
  v17 = v11 * v21;
  *((float *)a2 + 7) = v17;
  v19 = v21 * v13;
  *((float *)a2 + 8) = v19;
  v7 = *((float *)this + 64);
  v4 = (double)(rand() % 100) / 100.0 * *((float *)this + 65);
  *((_BYTE *)a2 + 84) = 1;
  v22 = v7 - v4;
  *((float *)a2 + 16) = v22;
  *((float *)a2 + 15) = v22;
}
