/*
 * func-name: ?Tick@LaserParticleSystem@@UAEXXZ_0
 * func-address: 0x100a8760
 * callers: 0x100088f0
 * callees: 0x100029cd, 0x10005b55, 0x10008c06, 0x102c9dbc
 */

void __thiscall LaserParticleSystem::Tick(LaserParticleSystem *this)
{
  bool v2; // zf
  double v3; // st7
  unsigned int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ebp
  float *v8; // edi
  int v9; // edx
  int v10; // eax
  float *v11; // eax
  float v12; // ecx
  float v13; // edx
  float v14; // eax
  double v15; // st6
  double v16; // st6
  double v17; // st6
  float v18; // edx
  float v19; // eax
  double v20; // st5
  unsigned int v21; // edi
  int v22; // eax
  bool v23; // [esp+Fh] [ebp-C1h]
  float v24; // [esp+10h] [ebp-C0h]
  float v25; // [esp+10h] [ebp-C0h]
  float v26; // [esp+10h] [ebp-C0h]
  float v27; // [esp+10h] [ebp-C0h]
  float v28; // [esp+10h] [ebp-C0h]
  float v29; // [esp+18h] [ebp-B8h]
  float v30; // [esp+18h] [ebp-B8h]
  float v31; // [esp+1Ch] [ebp-B4h]
  int v32; // [esp+1Ch] [ebp-B4h]
  int v33; // [esp+20h] [ebp-B0h]
  int v34; // [esp+24h] [ebp-ACh]
  float v35; // [esp+28h] [ebp-A8h]
  float v36; // [esp+2Ch] [ebp-A4h]
  float v37; // [esp+30h] [ebp-A0h]
  float v38; // [esp+34h] [ebp-9Ch]
  float v39; // [esp+38h] [ebp-98h]
  float v40; // [esp+3Ch] [ebp-94h]
  float v41; // [esp+40h] [ebp-90h] BYREF
  float v42; // [esp+44h] [ebp-8Ch]
  float v43; // [esp+48h] [ebp-88h]
  float v44; // [esp+4Ch] [ebp-84h]
  float v45; // [esp+50h] [ebp-80h]
  float v46; // [esp+54h] [ebp-7Ch]
  float v47; // [esp+58h] [ebp-78h]
  float v48; // [esp+5Ch] [ebp-74h]
  float v49; // [esp+60h] [ebp-70h]
  float v50; // [esp+64h] [ebp-6Ch]
  float v51; // [esp+68h] [ebp-68h]
  float v52; // [esp+6Ch] [ebp-64h]
  float v53; // [esp+70h] [ebp-60h]
  float v54; // [esp+74h] [ebp-5Ch]
  float v55; // [esp+78h] [ebp-58h]
  float v56; // [esp+7Ch] [ebp-54h]
  float v57; // [esp+80h] [ebp-50h]
  float v58; // [esp+84h] [ebp-4Ch]
  float v59; // [esp+88h] [ebp-48h]
  float v60; // [esp+8Ch] [ebp-44h]
  float v61; // [esp+90h] [ebp-40h]
  float v62; // [esp+94h] [ebp-3Ch]
  float v63; // [esp+98h] [ebp-38h]
  float v64; // [esp+9Ch] [ebp-34h]
  float v65; // [esp+A0h] [ebp-30h]
  float v66; // [esp+A4h] [ebp-2Ch]
  float v67; // [esp+A8h] [ebp-28h]
  float v68; // [esp+ACh] [ebp-24h]
  float v69; // [esp+B0h] [ebp-20h]
  float v70; // [esp+B4h] [ebp-1Ch]
  float v71; // [esp+B8h] [ebp-18h]
  float v72; // [esp+BCh] [ebp-14h]
  float v73; // [esp+C0h] [ebp-10h]
  _BYTE v74[12]; // [esp+C4h] [ebp-Ch] BYREF

  v2 = *((_BYTE *)this + 212) == 0;
  v31 = GDeltaTime * 1000.0 + *((float *)this + 52);
  *((float *)this + 52) = v31;
  v23 = v2 && *((float *)this + 57) <= (double)v31;
  v3 = 0.0;
  v4 = 0;
  v5 = 0;
  v33 = 0;
  v32 = 0;
  if ( *((int *)this + 51) > 0 )
  {
    v34 = 0;
    do
    {
      v6 = *((_DWORD *)this + 48);
      if ( !v6 || v4 >= (*((_DWORD *)this + 49) - v6) / 96 )
      {
        _invalid_parameter_noinfo();
        v3 = 0.0;
      }
      v7 = v34 + *((_DWORD *)this + 48);
      v29 = *(float *)(v7 + 52) - GDeltaTime * 1000.0;
      *(float *)(v7 + 52) = v29;
      if ( v29 <= v3 && v23 )
      {
        (*(void (__thiscall **)(LaserParticleSystem *, int))(*(_DWORD *)this + 24))(this, v7);
        v3 = 0.0;
        v33 = ++v5;
        if ( v5 > *((_DWORD *)this + 82) )
        {
          *((float *)this + 52) = 0.0;
          v23 = 0;
        }
      }
      if ( *((float *)this + 70) > (double)*(float *)(v7 + 52) )
        *(_DWORD *)(v7 + 44) = (unsigned __int8)*(_DWORD *)(v7 + 48)
                             | ((*(unsigned __int8 *)(v7 + 49)
                               | ((*(unsigned __int8 *)(v7 + 50)
                                 | ((unsigned int)(__int64)(*(float *)(v7 + 52)
                                                          / *((float *)this + 70)
                                                          * (double)HIBYTE(*(_DWORD *)(v7 + 48))) << 8)) << 8)) << 8);
      if ( *(_BYTE *)(v7 + 84) )
      {
        v8 = (float *)(v7 + 24);
        v59 = GDeltaTime * *(float *)(v7 + 24);
        v60 = *(float *)(v7 + 28) * GDeltaTime;
        v61 = GDeltaTime * *(float *)(v7 + 32);
        *(float *)v7 = *(float *)v7 + v59;
        *(float *)(v7 + 4) = *(float *)(v7 + 4) + v60;
        *(float *)(v7 + 8) = v61 + *(float *)(v7 + 8);
        if ( v3 == *(float *)(v7 + 12) && v3 == *(float *)(v7 + 16) && v3 == *(float *)(v7 + 20) )
        {
          v9 = *(_DWORD *)(v7 + 4);
          *(_DWORD *)(v7 + 12) = *(_DWORD *)v7;
          v10 = *(_DWORD *)(v7 + 8);
          *(_DWORD *)(v7 + 16) = v9;
          *(_DWORD *)(v7 + 20) = v10;
        }
        if ( *((_BYTE *)this + 372) && *((_BYTE *)this + 400) )
        {
          v41 = v3;
          v42 = v3;
          v43 = v3;
          if ( LaserParticleSystem::doesSegmentCrossPlane(
                 this,
                 (LaserParticleSystem *)((char *)this + 388),
                 (LaserParticleSystem *)((char *)this + 376),
                 (struct Vector *)(v7 + 12),
                 (struct Vector *)v7,
                 (struct Vector *)&v41) )
          {
            v24 = *(float *)(v7 + 28) * *(float *)(v7 + 28) + *v8 * *v8 + *(float *)(v7 + 32) * *(float *)(v7 + 32);
            v25 = sqrt(v24);
            v30 = (double)(rand() % 75 + 25) / 100.0 * (*((float *)this + 89) * v25);
            if ( *((float *)this + 90) < (double)v30 )
              v30 = *((float *)this + 90);
            v11 = (float *)sub_10008C06((int)v74, (int)this + 376);
            v12 = *v11;
            v13 = v11[1];
            v14 = v11[2];
            v44 = v12;
            v45 = v13;
            v46 = v14;
            sub_100029CD();
            v26 = -v30;
            v53 = v44 * v26;
            v15 = v45;
            *v8 = v53;
            v54 = v15 * v26;
            *(float *)(v7 + 28) = v54;
            v55 = v26 * v46;
            *(float *)(v7 + 32) = v55;
            v27 = *(float *)(v7 + 28) * *(float *)(v7 + 28) + *v8 * *v8 + *(float *)(v7 + 32) * *(float *)(v7 + 32);
            v28 = sqrt(v27);
            v3 = 0.0;
            if ( *((float *)this + 91) > (double)v28 )
            {
              v65 = 0.0;
              v66 = 0.0;
              v67 = 0.0;
              *v8 = 0.0;
              *(float *)(v7 + 28) = 0.0;
              *(float *)(v7 + 32) = 0.0;
              *(_BYTE *)(v7 + 84) = 0;
            }
            v47 = *v8 * GDeltaTime;
            v48 = *(float *)(v7 + 28) * GDeltaTime;
            v49 = GDeltaTime * *(float *)(v7 + 32);
            v71 = v47 + v41;
            v16 = v48;
            *(float *)v7 = v71;
            v72 = v16 + v42;
            v17 = v49;
            *(float *)(v7 + 4) = v72;
            v73 = v17 + v43;
            *(float *)(v7 + 8) = v73;
          }
          else
          {
            v3 = 0.0;
          }
          v5 = v33;
        }
        if ( *(_BYTE *)(v7 + 84) )
        {
          if ( v3 >= *((float *)this + 101) )
          {
            v68 = GDeltaTime * *((float *)this + 66);
            v69 = *((float *)this + 67) * GDeltaTime;
            v70 = GDeltaTime * *((float *)this + 68);
            *v8 = *v8 + v68;
            *(float *)(v7 + 28) = *(float *)(v7 + 28) + v69;
            *(float *)(v7 + 32) = v70 + *(float *)(v7 + 32);
          }
          else
          {
            v18 = *v8;
            v19 = *(float *)(v7 + 28);
            v37 = *(float *)(v7 + 32);
            v50 = *((float *)this + 102) - *(float *)v7;
            v35 = v18;
            v36 = v19;
            v51 = *((float *)this + 103) - *(float *)(v7 + 4);
            v52 = *((float *)this + 104) - *(float *)(v7 + 8);
            sub_100029CD();
            v40 = v52;
            v38 = v50;
            v39 = v51;
            sub_100029CD();
            v56 = v38 - v35;
            v57 = v39 - v36;
            v58 = v40 - v37;
            v20 = *((float *)this + 101);
            v62 = v56 * v20;
            v63 = v57 * v20;
            v64 = v20 * v58;
            *v8 = v62 + *v8;
            *(float *)(v7 + 28) = *(float *)(v7 + 28) + v63;
            *(float *)(v7 + 32) = *(float *)(v7 + 32) + v64;
            v3 = 0.0;
          }
        }
      }
      if ( v3 >= *(float *)(v7 + 52) && *((_BYTE *)this + 212) )
        *(_DWORD *)(v7 + 44) = 0;
      v34 += 96;
      v4 = ++v32;
    }
    while ( v32 < *((_DWORD *)this + 51) );
  }
  if ( v23 )
  {
    while ( 1 )
    {
      v21 = *((_DWORD *)this + 51);
      if ( (signed int)v21 >= *((_DWORD *)this + 54) )
        break;
      v22 = *((_DWORD *)this + 48);
      if ( !v22 || v21 >= (*((_DWORD *)this + 49) - v22) / 96 )
        _invalid_parameter_noinfo();
      (*(void (__thiscall **)(LaserParticleSystem *, unsigned int))(*(_DWORD *)this + 24))(
        this,
        *((_DWORD *)this + 48) + 96 * v21);
      ++*((_DWORD *)this + 51);
      if ( ++v5 > *((_DWORD *)this + 82) )
      {
        *((float *)this + 52) = 0.0;
        return;
      }
    }
  }
}
