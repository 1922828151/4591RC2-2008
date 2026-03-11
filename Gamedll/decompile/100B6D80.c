/*
 * func-name: ?RenderBillboardQuadAt@ParticleTrail@@IAEXPAVParticleTrailNode@@AAVVector@@PAUVertexIndicesBatch@@AAH@Z_0
 * func-address: 0x100b6d80
 * callers: 0x10015172
 * callees: none
 */

void __thiscall ParticleTrail::RenderBillboardQuadAt(
        ParticleTrail *this,
        struct ParticleTrailNode *a2,
        struct Vector *a3,
        struct VertexIndicesBatch *a4,
        int *a5)
{
  unsigned int v5; // edx
  int v6; // eax
  int v7; // ecx
  float *v8; // ecx
  double v9; // st6
  float *v10; // ecx
  double v11; // st5
  float *v12; // ecx
  char *v13; // eax
  double v14; // st5
  double v15; // st5
  float v16; // [esp+8h] [ebp-18h]
  __int64 v17; // [esp+8h] [ebp-18h]
  float v18; // [esp+Ch] [ebp-14h]
  float v19; // [esp+10h] [ebp-10h]
  float v20; // [esp+10h] [ebp-10h]
  float v21; // [esp+10h] [ebp-10h]
  float v22; // [esp+10h] [ebp-10h]
  float v23; // [esp+14h] [ebp-Ch]
  float v24; // [esp+14h] [ebp-Ch]
  float v25; // [esp+14h] [ebp-Ch]
  float v26; // [esp+14h] [ebp-Ch]
  float v27; // [esp+18h] [ebp-8h]
  float v28; // [esp+18h] [ebp-8h]
  float v29; // [esp+18h] [ebp-8h]
  float v30; // [esp+18h] [ebp-8h]
  float v31; // [esp+1Ch] [ebp-4h]
  float v32; // [esp+1Ch] [ebp-4h]
  float v33; // [esp+1Ch] [ebp-4h]
  float v34; // [esp+1Ch] [ebp-4h]
  float v35; // [esp+28h] [ebp+8h]

  ParticleTrail::Particle1Position = *(_DWORD *)a3;
  dword_103B56F8 = *((_DWORD *)a3 + 1);
  dword_103B56FC = *((_DWORD *)a3 + 2);
  v35 = *((float *)this + 87) * *((float *)a2 + 9);
  v5 = *((_DWORD *)this + 86) & 0xFFFFFF | ((unsigned __int8)(int)(v35 * 255.0) << 24);
  ParticleTrail::Particle1Color = v5;
  if ( *((float *)this + 79) < 1.0 )
  {
    v5 = ((unsigned int)(__int64)(255.0 * (*((float *)this + 79) * *((float *)a2 + 9))) << 24) | v5 & 0xFFFFFF;
    ParticleTrail::Particle1Color = v5;
  }
  v6 = 4 * *a5;
  v7 = 12 * *a5;
  *((_DWORD *)a4 + 2 * v7 + 3) = v5;
  v8 = (float *)((char *)a4 + 8 * v7);
  ++v6;
  v16 = ParticleTrail::Particle1Position - ParticleTrail::Particle1Right;
  v18 = *(float *)&dword_103B56F8 - flt_103B5728;
  v19 = *(float *)&dword_103B56FC - flt_103B572C;
  v23 = v16 - ParticleTrail::Particle1Up;
  v27 = v18 - *(float *)&dword_103B5710;
  v9 = v19 - *(float *)&dword_103B5714;
  *v8 = v23;
  v8[1] = v27;
  v31 = v9;
  v8[2] = v31;
  v8[4] = 0.0;
  v8[5] = 1.0;
  *((_DWORD *)a4 + 6 * v6 + 3) = ParticleTrail::Particle1Color;
  v10 = (float *)((char *)a4 + 24 * v6++);
  v24 = ParticleTrail::Particle1Right + ParticleTrail::Particle1Position;
  v28 = *(float *)&dword_103B56F8 + flt_103B5728;
  v32 = *(float *)&dword_103B56FC + flt_103B572C;
  *(float *)&v17 = v24 - ParticleTrail::Particle1Up;
  *((float *)&v17 + 1) = v28 - *(float *)&dword_103B5710;
  v11 = v32 - *(float *)&dword_103B5714;
  *(_QWORD *)v10 = v17;
  v20 = v11;
  v10[2] = v20;
  v10[4] = 1.0;
  v10[5] = 1.0;
  *((_DWORD *)a4 + 6 * v6 + 3) = ParticleTrail::Particle1Color;
  v12 = (float *)((char *)a4 + 24 * v6);
  v25 = ParticleTrail::Particle1Position - ParticleTrail::Particle1Right;
  v29 = *(float *)&dword_103B56F8 - flt_103B5728;
  v33 = *(float *)&dword_103B56FC - flt_103B572C;
  v13 = (char *)a4 + 24 * v6 + 24;
  *(float *)&v17 = v25 + ParticleTrail::Particle1Up;
  *((float *)&v17 + 1) = v29 + *(float *)&dword_103B5710;
  v14 = v33 + *(float *)&dword_103B5714;
  *(_QWORD *)v12 = v17;
  v21 = v14;
  v12[2] = v21;
  v12[4] = 0.0;
  v12[5] = 0.0;
  *((_DWORD *)v13 + 3) = ParticleTrail::Particle1Color;
  v26 = ParticleTrail::Particle1Right + ParticleTrail::Particle1Position;
  v30 = *(float *)&dword_103B56F8 + flt_103B5728;
  v34 = *(float *)&dword_103B56FC + flt_103B572C;
  *(float *)&v17 = v26 + ParticleTrail::Particle1Up;
  *((float *)&v17 + 1) = v30 + *(float *)&dword_103B5710;
  v15 = v34 + *(float *)&dword_103B5714;
  *(_QWORD *)v13 = v17;
  v22 = v15;
  *((float *)v13 + 2) = v22;
  *((float *)v13 + 4) = 1.0;
  *((float *)v13 + 5) = 0.0;
  ++*a5;
}
