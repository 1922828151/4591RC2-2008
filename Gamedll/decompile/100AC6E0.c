/*
 * func-name: ?SetParticleDefaults@ParticleSystem@@UAEXAAVParticle@@@Z_0
 * func-address: 0x100ac6e0
 * callers: 0x10019d1c
 * callees: 0x100029cd, 0x10004327, 0x102c9dbc
 */

void __thiscall ParticleSystem::SetParticleDefaults(ParticleSystem *this, struct Particle *a2)
{
  int (__cdecl *v3)(); // edi
  int v4; // eax
  int v5; // eax
  struct Particle *v6; // esi
  int v7; // ecx
  double v8; // st7
  double v9; // st7
  float v10; // edx
  int v11; // ecx
  int v12; // edi
  unsigned int i; // ebp
  int v14; // ecx
  int v15; // edx
  bool v16; // zf
  int v17; // ecx
  _DWORD *v18; // edx
  int v19; // eax
  _DWORD *v20; // ecx
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  double v28; // st7
  double v29; // st7
  float v30; // edx
  double v31; // st7
  double v32; // st7
  float v33; // [esp+10h] [ebp-20h]
  _DWORD *v34; // [esp+10h] [ebp-20h]
  int v35; // [esp+14h] [ebp-1Ch] BYREF
  double v36; // [esp+18h] [ebp-18h]
  float v37; // [esp+20h] [ebp-10h]
  float v38; // [esp+24h] [ebp-Ch] BYREF
  float v39; // [esp+28h] [ebp-8h]
  float v40; // [esp+2Ch] [ebp-4h]
  float v41; // [esp+34h] [ebp+4h]
  float v42; // [esp+34h] [ebp+4h]
  float v43; // [esp+34h] [ebp+4h]
  float v44; // [esp+34h] [ebp+4h]
  float v45; // [esp+34h] [ebp+4h]

  *(float *)&v35 = *((float *)this + 77) * *((float *)this + 77)
                 + *((float *)this + 76) * *((float *)this + 76)
                 + *((float *)this + 78) * *((float *)this + 78);
  *(float *)&v35 = sqrt(*(float *)&v35);
  v3 = rand;
  if ( *(float *)&v35 == 0.0 )
  {
    v6 = a2;
    *(_DWORD *)a2 = *((_DWORD *)this + 5);
    *((_DWORD *)a2 + 1) = *((_DWORD *)this + 6);
    v10 = *((float *)this + 7);
  }
  else
  {
    v4 = rand();
    *(float *)&v36 = (double)v4 / 32767.0 + (double)v4 / 32767.0 - 1.0;
    v5 = rand();
    v33 = (double)v5 / 32767.0 + (double)v5 / 32767.0 - 1.0;
    *(float *)&v35 = COERCE_FLOAT(rand());
    v6 = a2;
    v38 = (double)v35 / 32767.0 + (double)v35 / 32767.0 - 1.0;
    v38 = *((float *)this + 76) * v38;
    v39 = *((float *)this + 77) * v33;
    v40 = *((float *)this + 78) * *(float *)&v36;
    *(float *)&v36 = *((float *)this + 5) + v38;
    *((float *)&v36 + 1) = *((float *)this + 6) + v39;
    v7 = HIDWORD(v36);
    v8 = *((float *)this + 7);
    *(_DWORD *)a2 = LODWORD(v36);
    v9 = v8 + v40;
    *((_DWORD *)a2 + 1) = v7;
    v37 = v9;
    v10 = v37;
  }
  *((float *)v6 + 2) = v10;
  v11 = *((_DWORD *)v6 + 1);
  *((_DWORD *)v6 + 3) = *(_DWORD *)v6;
  *((_DWORD *)v6 + 4) = v11;
  *((float *)v6 + 5) = v10;
  v36 = *((float *)this + 64);
  v41 = v36 - (double)rand() / 32767.0 * *((float *)this + 65);
  *((float *)v6 + 16) = v41;
  *((float *)v6 + 15) = v41;
  *((float *)v6 + 17) = 0.0;
  if ( *((_BYTE *)this + 316) )
  {
    v12 = IndoorVolume::IndoorVolumes[0];
    for ( i = 0; ; ++i )
    {
      v14 = *(_DWORD *)(v12 + 4);
      if ( !v14 || i >= (*(_DWORD *)(v12 + 8) - v14) >> 2 )
        break;
      v15 = *(_DWORD *)(v12 + 4);
      v35 = 4 * i;
      v16 = *(_DWORD *)(*(_DWORD *)(v15 + 4 * i) + 712) == *((_DWORD *)this + 29);
      LODWORD(v36) = v12;
      if ( v16 )
      {
        v17 = *(_DWORD *)(v12 + 4);
        v18 = (_DWORD *)(v12 + 4);
        v34 = (_DWORD *)(v12 + 4);
        if ( !v17 || i >= (*(_DWORD *)(v12 + 8) - v17) >> 2 )
        {
          _invalid_parameter_noinfo();
          v12 = IndoorVolume::IndoorVolumes[0];
          v18 = v34;
        }
        if ( *(_DWORD *)(*(_DWORD *)(v35 + *v18) + 1096) == 1 )
        {
          v19 = *(_DWORD *)(v12 + 4);
          v20 = (_DWORD *)(v12 + 4);
          if ( !v19 || i >= (*(_DWORD *)(v12 + 8) - v19) >> 2 )
          {
            _invalid_parameter_noinfo();
            v20 = (_DWORD *)(v12 + 4);
          }
          if ( IndoorVolume::IsInsideThisVolume(*(IndoorVolume **)(v35 + *v20), v6) )
          {
            v38 = 9999.0;
            *(float *)v6 = 9999.0;
            v39 = -9999.0;
            *((float *)v6 + 1) = -9999.0;
            v40 = 9999.0;
            *((float *)v6 + 2) = 9999.0;
            return;
          }
          v12 = IndoorVolume::IndoorVolumes[0];
          v21 = IndoorVolume::IndoorVolumes[1];
          if ( !v21 || i >= (IndoorVolume::IndoorVolumes[2] - v21) >> 2 )
          {
            _invalid_parameter_noinfo();
            v12 = IndoorVolume::IndoorVolumes[0];
          }
          v22 = IndoorVolume::IndoorVolumes[1];
          *(float *)&v35 = 0.0;
          v23 = *(_DWORD *)(4 * i + v22);
          v38 = *(float *)v6 + flt_103AE5B8;
          v39 = *((float *)v6 + 1) + flt_103AE5BC;
          v40 = *((float *)v6 + 2) + flt_103AE5C0;
          if ( sub_10004327(v23 + 1068, v23 + 1080, (int)&v38, (int)&unk_103AE5C4, (int)&v35) != -1 )
          {
            *(float *)&v36 = flt_103AE5C8 * *(float *)&v35;
            *(float *)&v36 = *(float *)&v36 + v39;
            *((float *)v6 + 17) = *(float *)&v36 + *((float *)v6 + 16);
            v12 = IndoorVolume::IndoorVolumes[0];
          }
        }
      }
    }
    v3 = rand;
  }
  v42 = (double)v3() / 32767.0 * *((float *)this + 73) + *((float *)this + 72);
  *((float *)v6 + 13) = v42;
  *((float *)v6 + 14) = v42;
  *((_DWORD *)v6 + 11) = *((_DWORD *)this + 80);
  v24 = *((_DWORD *)this + 80);
  v38 = 0.0;
  v39 = 0.0;
  *((_DWORD *)v6 + 12) = v24;
  v40 = 0.0;
  if ( 0.0 != *((float *)this + 61) || 0.0 != *((float *)this + 62) || 0.0 != *((float *)this + 63) )
  {
    v25 = v3();
    *(float *)&v35 = (double)v25 / 32767.0 + (double)v25 / 32767.0 - 1.0;
    v26 = v3();
    *(float *)&v36 = (double)v26 / 32767.0 + (double)v26 / 32767.0 - 1.0;
    v27 = v3();
    v43 = (double)v27 / 32767.0 + (double)v27 / 32767.0 - 1.0;
    v38 = v43 * *((float *)this + 61);
    v39 = *((float *)this + 62) * *(float *)&v36;
    v40 = *((float *)this + 63) * *(float *)&v35;
  }
  *(float *)&v36 = v38 + *((float *)this + 58);
  v28 = *((float *)this + 59);
  v38 = *(float *)&v36;
  *((float *)&v36 + 1) = v28 + v39;
  v29 = *((float *)this + 60);
  v39 = *((float *)&v36 + 1);
  v37 = v29 + v40;
  v40 = v37;
  sub_100029CD();
  v44 = (double)v3() / 32767.0 * *((float *)this + 74) + *((float *)this + 69);
  *(float *)&v36 = v38 * v44;
  *((float *)&v36 + 1) = v39 * v44;
  v37 = v44 * v40;
  v38 = *((float *)this + 8) + *(float *)&v36;
  v39 = *((float *)this + 9) + *((float *)&v36 + 1);
  v30 = v39;
  v31 = *((float *)this + 10);
  *((float *)v6 + 6) = v38;
  v32 = v31 + v37;
  *((float *)v6 + 7) = v30;
  v40 = v32;
  *((float *)v6 + 8) = v40;
  if ( 0.0 != *((float *)this + 75) )
  {
    v45 = ((double)v3() / 32767.0 * 1.3 + 0.4) * *((float *)this + 75);
    *((float *)v6 + 18) = 0.0;
    *((float *)v6 + 19) = v45;
    *((float *)v6 + 20) = 0.0;
  }
}
