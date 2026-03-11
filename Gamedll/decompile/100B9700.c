/*
 * func-name: ?SetParticleDefaults@PhysicsParticles@@UAEXAAVParticle@@@Z_0
 * func-address: 0x100b9700
 * callers: 0x1000e90d
 * callees: 0x100029cd, 0x102c1be0, 0x102c9dbc
 */

void __thiscall PhysicsParticles::SetParticleDefaults(PhysicsParticles *this, struct Particle *a2)
{
  char *v3; // esi
  int v4; // eax
  int v5; // eax
  struct Particle *v6; // esi
  float v7; // edx
  double v8; // st7
  float v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st6
  int v17; // ecx
  int v18; // ecx
  float v19; // [esp+Ch] [ebp-38h]
  float v20; // [esp+Ch] [ebp-38h]
  int v21; // [esp+Ch] [ebp-38h]
  float v22; // [esp+10h] [ebp-34h]
  float v23; // [esp+10h] [ebp-34h]
  float v24; // [esp+14h] [ebp-30h]
  double v25; // [esp+14h] [ebp-30h]
  float v26; // [esp+14h] [ebp-30h]
  float v27; // [esp+14h] [ebp-30h]
  float v28; // [esp+18h] [ebp-2Ch]
  float v29; // [esp+1Ch] [ebp-28h]
  float v30; // [esp+20h] [ebp-24h]
  float v31; // [esp+20h] [ebp-24h]
  float v32; // [esp+20h] [ebp-24h]
  float v33; // [esp+20h] [ebp-24h]
  float v34; // [esp+24h] [ebp-20h]
  float v35; // [esp+24h] [ebp-20h]
  float v36; // [esp+24h] [ebp-20h]
  float v37; // [esp+28h] [ebp-1Ch]
  float v38; // [esp+28h] [ebp-1Ch]
  float v39; // [esp+28h] [ebp-1Ch]
  float v40; // [esp+2Ch] [ebp-18h] BYREF
  float v41; // [esp+30h] [ebp-14h]
  float v42; // [esp+34h] [ebp-10h]
  float v43; // [esp+38h] [ebp-Ch] BYREF
  float v44; // [esp+3Ch] [ebp-8h]
  float v45; // [esp+40h] [ebp-4h]
  float v46; // [esp+48h] [ebp+4h]
  float v47; // [esp+48h] [ebp+4h]
  float v48; // [esp+48h] [ebp+4h]
  float v49; // [esp+48h] [ebp+4h]

  v3 = (char *)this + 304;
  v19 = *((float *)this + 77) * *((float *)this + 77)
      + *((float *)this + 76) * *((float *)this + 76)
      + *((float *)this + 78) * *((float *)this + 78);
  v20 = sqrt(v19);
  if ( v20 == 0.0 )
  {
    v6 = a2;
    *(_DWORD *)a2 = *((_DWORD *)this + 5);
    *((_DWORD *)a2 + 1) = *((_DWORD *)this + 6);
    v9 = *((float *)this + 7);
  }
  else
  {
    v4 = rand();
    v24 = (double)v4 / 32767.0 + (double)v4 / 32767.0 - 1.0;
    v5 = rand();
    v22 = (double)v5 / 32767.0 + (double)v5 / 32767.0 - 1.0;
    v21 = rand();
    v30 = (double)v21 / 32767.0 + (double)v21 / 32767.0 - 1.0;
    v43 = 0.0;
    v44 = 0.0;
    v45 = 0.0;
    sub_102C1BE0(v3, &v43);
    v6 = a2;
    v31 = v43 * v30;
    v34 = v44 * v22;
    v37 = v45 * v24;
    v43 = v31 + *((float *)this + 5);
    v44 = *((float *)this + 6) + v34;
    v7 = v44;
    v8 = *((float *)this + 7);
    *(float *)a2 = v43;
    *((float *)a2 + 1) = v7;
    v45 = v8 + v37;
    v9 = v45;
  }
  *((float *)v6 + 2) = v9;
  v25 = *((float *)this + 64);
  v46 = v25 - (double)rand() / 32767.0 * *((float *)this + 65);
  *((float *)v6 + 16) = v46;
  *((float *)v6 + 15) = v46;
  *((float *)v6 + 17) = 0.0;
  *((float *)v6 + 13) = (double)rand() / 32767.0 * *((float *)this + 73) + *((float *)this + 72);
  *((_DWORD *)v6 + 11) = *((_DWORD *)this + 80);
  v32 = 0.0;
  v35 = 0.0;
  *((_DWORD *)v6 + 12) = *((_DWORD *)this + 80);
  v38 = 0.0;
  if ( 0.0 != *((float *)this + 61) || 0.0 != *((float *)this + 62) || 0.0 != *((float *)this + 63) )
  {
    v10 = rand();
    v23 = (double)v10 / 32767.0 + (double)v10 / 32767.0 - 1.0;
    v11 = rand();
    v26 = (double)v11 / 32767.0 + (double)v11 / 32767.0 - 1.0;
    v12 = rand();
    v47 = (double)v12 / 32767.0 + (double)v12 / 32767.0 - 1.0;
    v32 = v47 * *((float *)this + 61);
    v35 = *((float *)this + 62) * v26;
    v38 = *((float *)this + 63) * v23;
  }
  v27 = v32 + *((float *)this + 58);
  v13 = *((float *)this + 59);
  v43 = v27;
  v28 = v13 + v35;
  v14 = *((float *)this + 60);
  v44 = v28;
  v29 = v14 + v38;
  v45 = v29;
  sub_100029CD();
  v15 = (double)rand() / 32767.0 * *((float *)this + 74) + *((float *)this + 69);
  *((_BYTE *)v6 + 84) = 1;
  v48 = v15;
  v33 = v43 * v48;
  v16 = v44;
  *((float *)v6 + 6) = v33;
  v36 = v16 * v48;
  *((float *)v6 + 7) = v36;
  v39 = v48 * v45;
  *((float *)v6 + 8) = v39;
  if ( *((float *)this + 75) > 0.0 )
  {
    v49 = ((double)rand() / 32767.0 * 1.3 + 0.4) * *((float *)this + 75);
    *((float *)v6 + 18) = 0.0;
    *((float *)v6 + 19) = v49;
    *((float *)v6 + 20) = 0.0;
  }
  if ( !*((_DWORD *)v6 + 23) )
    (*(void (__thiscall **)(PhysicsParticles *, struct Particle *))(*(_DWORD *)this + 56))(this, v6);
  v17 = *((_DWORD *)v6 + 23);
  v40 = *(float *)v6;
  v41 = *((float *)v6 + 1);
  v42 = *((float *)v6 + 2);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v17 + 24))(v17, &v40);
  v18 = *((_DWORD *)v6 + 23);
  v40 = *((float *)v6 + 6);
  v41 = *((float *)v6 + 7);
  v42 = *((float *)v6 + 8);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v18 + 224))(v18, &v40);
}
