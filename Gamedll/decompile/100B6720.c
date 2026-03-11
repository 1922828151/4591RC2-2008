/*
 * func-name: ?RenderParticleLink@ParticleTrail@@IAEXPAVParticleTrailNode@@0PAUVertexIndicesBatch@@AAHAAM@Z_0
 * func-address: 0x100b6720
 * callers: 0x10017611
 * callees: 0x100029cd, 0x102c9fe0
 */

void __thiscall ParticleTrail::RenderParticleLink(
        ParticleTrail *this,
        struct ParticleTrailNode *a2,
        struct ParticleTrailNode *a3,
        struct VertexIndicesBatch *a4,
        int *a5,
        float *a6)
{
  unsigned int v7; // ebp
  int v9; // eax
  double v10; // st6
  double v11; // st7
  double v12; // st5
  double v13; // st3
  double v14; // st1
  double v15; // st4
  double v16; // st2
  double v17; // st1
  double v18; // st7
  double v19; // st3
  double v20; // st5
  double v21; // st6
  char *v22; // ecx
  int v23; // eax
  double v24; // st7
  double v25; // st7
  float *v26; // ecx
  double v27; // st6
  float *v28; // ecx
  double v29; // st5
  char *v30; // eax
  double v31; // st5
  float v32; // [esp+10h] [ebp-24h]
  float v33; // [esp+10h] [ebp-24h]
  float v34; // [esp+14h] [ebp-20h]
  float v35; // [esp+14h] [ebp-20h]
  float v36; // [esp+18h] [ebp-1Ch]
  float v37; // [esp+18h] [ebp-1Ch]
  float v38; // [esp+1Ch] [ebp-18h]
  float v39; // [esp+20h] [ebp-14h]
  float v40; // [esp+24h] [ebp-10h]
  float v41; // [esp+28h] [ebp-Ch]
  float v42; // [esp+28h] [ebp-Ch]
  float v43; // [esp+28h] [ebp-Ch]
  float v44; // [esp+28h] [ebp-Ch]
  float v45; // [esp+28h] [ebp-Ch]
  float v46; // [esp+28h] [ebp-Ch]
  float v47; // [esp+28h] [ebp-Ch]
  float v48; // [esp+28h] [ebp-Ch]
  float v49; // [esp+28h] [ebp-Ch]
  float v50; // [esp+2Ch] [ebp-8h]
  float v51; // [esp+2Ch] [ebp-8h]
  float v52; // [esp+2Ch] [ebp-8h]
  int v53; // [esp+2Ch] [ebp-8h]
  int v54; // [esp+2Ch] [ebp-8h]
  float v55; // [esp+2Ch] [ebp-8h]
  float v56; // [esp+2Ch] [ebp-8h]
  float v57; // [esp+2Ch] [ebp-8h]
  float v58; // [esp+2Ch] [ebp-8h]
  float v59; // [esp+30h] [ebp-4h]
  int v60; // [esp+30h] [ebp-4h]
  int v61; // [esp+30h] [ebp-4h]
  int v62; // [esp+30h] [ebp-4h]
  int v63; // [esp+30h] [ebp-4h]
  float v64; // [esp+30h] [ebp-4h]
  float v65; // [esp+30h] [ebp-4h]
  float v66; // [esp+30h] [ebp-4h]
  float v67; // [esp+30h] [ebp-4h]
  float v68; // [esp+38h] [ebp+4h]
  float v69; // [esp+38h] [ebp+4h]
  float v70; // [esp+38h] [ebp+4h]
  float v71; // [esp+38h] [ebp+4h]
  float v72; // [esp+38h] [ebp+4h]
  float v73; // [esp+38h] [ebp+4h]

  ParticleTrail::Particle1Color = *((_DWORD *)a2 + 8);
  v7 = *((_DWORD *)a3 + 8);
  ParticleTrail::Particle2Color = v7;
  if ( *((float *)this + 79) < 1.0 )
  {
    v9 = (int)(*((float *)a3 + 9) * *((float *)this + 79) * 255.0);
    ParticleTrail::Particle1Color = ParticleTrail::Particle1Color & 0xFFFFFF
                                  | ((unsigned int)(__int64)(255.0 * (*((float *)a2 + 9) * *((float *)this + 79))) << 24);
    ParticleTrail::Particle2Color = (v9 << 24) | v7 & 0xFFFFFF;
  }
  ParticleTrail::Particle1Position = *((_DWORD *)a2 + 2);
  dword_103B56F8 = *((_DWORD *)a2 + 3);
  dword_103B56FC = *((_DWORD *)a2 + 4);
  ParticleTrail::Particle2Position = *((_DWORD *)a3 + 2);
  dword_103B5704 = *((_DWORD *)a3 + 3);
  dword_103B5708 = *((_DWORD *)a3 + 4);
  v32 = ParticleTrail::CameraLocation - *((float *)a2 + 2);
  v38 = v32;
  v34 = flt_103B56C8 - *((float *)a2 + 3);
  v39 = v34;
  v36 = flt_103B56CC - *((float *)a2 + 4);
  v40 = v36;
  sub_100029CD();
  v41 = ParticleTrail::CameraLocation - *((float *)a3 + 2);
  v33 = v41;
  v50 = flt_103B56C8 - *((float *)a3 + 3);
  v35 = v50;
  v59 = flt_103B56CC - *((float *)a3 + 4);
  v37 = v59;
  sub_100029CD();
  v10 = v39;
  v11 = v38;
  v12 = v40;
  v68 = *((float *)a2 + 18) * v40 + *((float *)a2 + 16) * v38 + *((float *)a2 + 17) * v39;
  v13 = flt_103B56F0;
  v14 = flt_103B56E4;
  if ( v68 < -0.69999999 || v68 > 0.69999999 )
  {
    v42 = *((float *)a2 + 18) * flt_103B56EC - *((float *)a2 + 17) * v13;
    v51 = v13 * *((float *)a2 + 16) - *((float *)a2 + 18) * ParticleTrail::CameraUpVector;
    v15 = ParticleTrail::CameraUpVector * *((float *)a2 + 17) - flt_103B56EC * *((float *)a2 + 16);
  }
  else
  {
    v42 = *((float *)a2 + 18) * flt_103B56E0 - *((float *)a2 + 17) * v14;
    v51 = v14 * *((float *)a2 + 16) - *((float *)a2 + 18) * ParticleTrail::CameraRightVector;
    v15 = ParticleTrail::CameraRightVector * *((float *)a2 + 17) - flt_103B56E0 * *((float *)a2 + 16);
  }
  *(float *)&v60 = v15;
  dword_103B5714 = v60;
  dword_103B5710 = LODWORD(v51);
  ParticleTrail::Particle1Up = LODWORD(v42);
  v69 = *((float *)a3 + 16) * v33 + *((float *)a3 + 17) * v35 + *((float *)a3 + 18) * v37;
  if ( v69 < -0.69999999 || v69 > 0.69999999 )
  {
    v43 = *((float *)a3 + 18) * flt_103B56EC - *((float *)a3 + 17) * flt_103B56F0;
    v52 = *((float *)a3 + 16) * flt_103B56F0 - *((float *)a3 + 18) * ParticleTrail::CameraUpVector;
    v16 = *((float *)a3 + 17) * ParticleTrail::CameraUpVector;
    v17 = *((float *)a3 + 16) * flt_103B56EC;
  }
  else
  {
    v43 = *((float *)a3 + 18) * flt_103B56E0 - *((float *)a3 + 17) * flt_103B56E4;
    v52 = *((float *)a3 + 16) * flt_103B56E4 - *((float *)a3 + 18) * ParticleTrail::CameraRightVector;
    v16 = *((float *)a3 + 17) * ParticleTrail::CameraRightVector;
    v17 = *((float *)a3 + 16) * flt_103B56E0;
  }
  ParticleTrail::Particle2Up = LODWORD(v43);
  *(float *)&v61 = v16 - v17;
  dword_103B5720 = v61;
  dword_103B571C = LODWORD(v52);
  v44 = v10 * *((float *)a2 + 18) - v12 * *((float *)a2 + 17);
  *(float *)&v53 = v12 * *((float *)a2 + 16) - v11 * *((float *)a2 + 18);
  v18 = v11 * *((float *)a2 + 17);
  v19 = *((float *)a2 + 16);
  ParticleTrail::Particle1Up = LODWORD(v44);
  dword_103B5710 = v53;
  *(float *)&v62 = v18 - v10 * v19;
  dword_103B5714 = v62;
  v45 = *((float *)a3 + 18) * v35 - v37 * *((float *)a3 + 17);
  *(float *)&v54 = v37 * *((float *)a3 + 16) - *((float *)a3 + 18) * v33;
  v20 = *((float *)a3 + 17);
  v21 = v35 * *((float *)a3 + 16);
  ParticleTrail::Particle2Up = LODWORD(v45);
  dword_103B571C = v54;
  *(float *)&v63 = v33 * v20 - v21;
  dword_103B5720 = v63;
  sub_100029CD();
  sub_100029CD();
  v70 = *((float *)a2 + 11);
  ParticleTrail::Particle1Up = v70 * ParticleTrail::Particle1Up;
  *(float *)&dword_103B5710 = v70 * *(float *)&dword_103B5710;
  *(float *)&dword_103B5714 = v70 * *(float *)&dword_103B5714;
  v71 = *((float *)a3 + 11);
  ParticleTrail::Particle2Up = v71 * ParticleTrail::Particle2Up;
  *(float *)&dword_103B571C = v71 * *(float *)&dword_103B571C;
  *(float *)&dword_103B5720 = v71 * *(float *)&dword_103B5720;
  v22 = (char *)a4 + 96 * *a5;
  v23 = 4 * *a5 + 1;
  v72 = *((float *)a2 + 12) / *((float *)this + 80);
  v24 = v72 + *a6;
  *((_DWORD *)v22 + 3) = ParticleTrail::Particle1Color;
  v73 = v24;
  v46 = ParticleTrail::Particle1Position + ParticleTrail::Particle1Up;
  v55 = *(float *)&dword_103B56F8 + *(float *)&dword_103B5710;
  v25 = *(float *)&dword_103B56FC + *(float *)&dword_103B5714;
  *(float *)v22 = v46;
  *((float *)v22 + 1) = v55;
  v64 = v25;
  *((float *)v22 + 2) = v64;
  *((float *)v22 + 4) = 0.0;
  *((float *)v22 + 5) = *a6;
  *((_DWORD *)a4 + 6 * v23 + 3) = ParticleTrail::Particle1Color;
  v26 = (float *)((char *)a4 + 24 * v23++);
  v47 = ParticleTrail::Particle1Position - ParticleTrail::Particle1Up;
  v56 = *(float *)&dword_103B56F8 - *(float *)&dword_103B5710;
  v27 = *(float *)&dword_103B56FC - *(float *)&dword_103B5714;
  *v26 = v47;
  v26[1] = v56;
  v65 = v27;
  v26[2] = v65;
  v26[4] = 1.0;
  v26[5] = *a6;
  *((_DWORD *)a4 + 6 * v23 + 3) = ParticleTrail::Particle2Color;
  v28 = (float *)((char *)a4 + 24 * v23);
  v48 = ParticleTrail::Particle2Position + ParticleTrail::Particle2Up;
  v57 = *(float *)&dword_103B5704 + *(float *)&dword_103B571C;
  v29 = *(float *)&dword_103B5708 + *(float *)&dword_103B5720;
  *v28 = v48;
  v28[1] = v57;
  v66 = v29;
  v28[4] = 0.0;
  v28[2] = v66;
  v28[5] = v73;
  v30 = (char *)a4 + 24 * v23 + 24;
  *((_DWORD *)v30 + 3) = ParticleTrail::Particle2Color;
  v49 = ParticleTrail::Particle2Position - ParticleTrail::Particle2Up;
  v58 = *(float *)&dword_103B5704 - *(float *)&dword_103B571C;
  v31 = *(float *)&dword_103B5708 - *(float *)&dword_103B5720;
  *(float *)v30 = v49;
  *((float *)v30 + 1) = v58;
  v67 = v31;
  *((float *)v30 + 2) = v67;
  *((float *)v30 + 4) = 1.0;
  *((float *)v30 + 5) = v73;
  ++*a5;
  *a6 = v73;
  if ( v73 > 1.0 )
    *a6 = v73 - (double)(int)v73;
}
