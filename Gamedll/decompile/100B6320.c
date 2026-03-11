/*
 * func-name: ?SetupParticle@ParticleTrail@@IAEXPAVParticleTrailNode@@AAVVector@@@Z_0
 * func-address: 0x100b6320
 * callers: 0x10019dfd
 * callees: 0x102c9dbc
 */

void __thiscall ParticleTrail::SetupParticle(ParticleTrail *this, struct ParticleTrailNode *a2, struct Vector *a3)
{
  double v5; // st7
  double v6; // st7
  float *v7; // ebx
  float v8; // [esp+Ch] [ebp-18h]
  float v9; // [esp+Ch] [ebp-18h]
  float v10; // [esp+Ch] [ebp-18h]
  float v11; // [esp+Ch] [ebp-18h]
  float v12; // [esp+10h] [ebp-14h]
  float v13; // [esp+14h] [ebp-10h]
  float v14; // [esp+18h] [ebp-Ch]
  float v15; // [esp+18h] [ebp-Ch]
  float v16; // [esp+1Ch] [ebp-8h]
  float v17; // [esp+1Ch] [ebp-8h]
  float v18; // [esp+20h] [ebp-4h]
  float v19; // [esp+20h] [ebp-4h]
  float v20; // [esp+28h] [ebp+4h]
  float v21; // [esp+28h] [ebp+4h]

  v8 = (double)(rand() % 100) / 100.0;
  v12 = *((float *)this + 74) * v8 + *((float *)this + 73);
  v9 = (double)(rand() % 100) / 100.0;
  v13 = *((float *)this + 76) * v9 + *((float *)this + 75);
  v10 = (double)(rand() % 100) / 100.0;
  v5 = *((float *)this + 66) * v10 + *((float *)this + 65);
  *((_DWORD *)a2 + 2) = *(_DWORD *)a3;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a3 + 1);
  v11 = v5;
  *((_DWORD *)a2 + 4) = *((_DWORD *)a3 + 2);
  v14 = *((float *)this + 67) * v12;
  v16 = *((float *)this + 68) * v12;
  v6 = v12 * *((float *)this + 69);
  *((float *)a2 + 5) = v14;
  *((float *)a2 + 6) = v16;
  v18 = v6;
  *((float *)a2 + 7) = v18;
  *((_DWORD *)a2 + 8) = *((_DWORD *)this + 78);
  *((float *)a2 + 9) = (double)*((unsigned __int8 *)this + 315) / 255.0;
  *((float *)a2 + 10) = v13;
  *((float *)a2 + 11) = v11;
  *((float *)a2 + 12) = 0.0;
  v7 = (float *)*((_DWORD *)this + 61);
  if ( v7 )
  {
    v15 = *(float *)a3 - v7[2];
    v17 = *((float *)a3 + 1) - v7[3];
    v19 = *((float *)a3 + 2) - v7[4];
    v20 = v17 * v17 + v15 * v15 + v19 * v19;
    v21 = sqrt(v20);
    v7[12] = v21;
  }
  if ( *((_DWORD *)this + 60) )
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 61);
    *(_DWORD *)(*((_DWORD *)this + 61) + 4) = a2;
    *((_DWORD *)this + 61) = a2;
  }
  else
  {
    *((_DWORD *)this + 60) = a2;
    *((_DWORD *)this + 61) = a2;
    *(_DWORD *)a2 = 0;
  }
  *((_DWORD *)a2 + 1) = 0;
  ++*((_DWORD *)this + 62);
  ++*((_DWORD *)this + 92);
}
