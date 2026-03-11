/*
 * func-name: ?Tick@BouncyParticles@@UAEXXZ_0
 * func-address: 0x100ae5c0
 * callers: 0x10007ed7
 * callees: 0x100029cd, 0x100059c0, 0x10008c06, 0x102c9dbc
 */

void __cdecl BouncyParticles::Tick(float a1)
{
  BouncyParticles *this; // ecx
  double v2; // st7
  BouncyParticles *v3; // esi
  bool v4; // zf
  double v5; // st6
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  float *v10; // ebx
  int v11; // ecx
  int v12; // edx
  double v13; // st5
  float *v14; // eax
  double v15; // st7
  double v16; // st6
  double v17; // st5
  double v18; // st5
  double v19; // rt0
  int v20; // edx
  int v21; // eax
  unsigned int v22; // edi
  int v23; // eax
  bool v24; // [esp+7h] [ebp-E5h]
  float v25; // [esp+8h] [ebp-E4h]
  float v26; // [esp+8h] [ebp-E4h]
  float v27; // [esp+Ch] [ebp-E0h]
  float v28; // [esp+10h] [ebp-DCh]
  float v29; // [esp+10h] [ebp-DCh]
  float v30; // [esp+10h] [ebp-DCh]
  float v31; // [esp+14h] [ebp-D8h]
  float v32; // [esp+14h] [ebp-D8h]
  float v33; // [esp+14h] [ebp-D8h]
  float v34; // [esp+14h] [ebp-D8h]
  float v35; // [esp+20h] [ebp-CCh]
  int v36; // [esp+20h] [ebp-CCh]
  int v37; // [esp+24h] [ebp-C8h]
  int v38; // [esp+28h] [ebp-C4h]
  float v39; // [esp+2Ch] [ebp-C0h]
  float v40; // [esp+38h] [ebp-B4h]
  float v41; // [esp+3Ch] [ebp-B0h]
  float v42; // [esp+40h] [ebp-ACh]
  float v43; // [esp+44h] [ebp-A8h]
  float v44; // [esp+48h] [ebp-A4h]
  float v45; // [esp+4Ch] [ebp-A0h]
  float v46; // [esp+50h] [ebp-9Ch] BYREF
  float v47; // [esp+54h] [ebp-98h]
  float v48; // [esp+58h] [ebp-94h]
  float v49; // [esp+5Ch] [ebp-90h]
  float v50; // [esp+60h] [ebp-8Ch]
  float v51; // [esp+64h] [ebp-88h]
  float v52; // [esp+68h] [ebp-84h]
  float v53; // [esp+6Ch] [ebp-80h]
  float v54; // [esp+70h] [ebp-7Ch]
  float v55; // [esp+74h] [ebp-78h]
  float v56; // [esp+78h] [ebp-74h]
  float v57; // [esp+7Ch] [ebp-70h]
  float v58; // [esp+80h] [ebp-6Ch]
  float v59; // [esp+84h] [ebp-68h]
  float v60; // [esp+88h] [ebp-64h]
  float v61; // [esp+8Ch] [ebp-60h]
  float v62; // [esp+90h] [ebp-5Ch]
  float v63; // [esp+94h] [ebp-58h]
  float v64; // [esp+98h] [ebp-54h]
  float v65; // [esp+9Ch] [ebp-50h]
  float v66; // [esp+A0h] [ebp-4Ch]
  float v67; // [esp+A4h] [ebp-48h]
  float v68; // [esp+A8h] [ebp-44h]
  float v69; // [esp+ACh] [ebp-40h]
  float v70; // [esp+B0h] [ebp-3Ch]
  float v71; // [esp+B4h] [ebp-38h]
  float v72; // [esp+B8h] [ebp-34h]
  float v73; // [esp+BCh] [ebp-30h]
  float v74; // [esp+C0h] [ebp-2Ch]
  float v75; // [esp+C4h] [ebp-28h]
  float v76[3]; // [esp+C8h] [ebp-24h] BYREF
  double v77; // [esp+D4h] [ebp-18h]
  _BYTE v78[12]; // [esp+E0h] [ebp-Ch] BYREF
  float vars0; // [esp+ECh] [ebp+0h]
  float retaddr; // [esp+F0h] [ebp+4h]

  v27 = GDeltaTime;
  v2 = GDeltaTime;
  v3 = this;
  if ( GDeltaTime > 0.1000000014901161 )
  {
    v27 = 0.1;
    v2 = (float)0.1;
  }
  v4 = *((_BYTE *)this + 212) == 0;
  v77 = 1000.0 * v2;
  v35 = v77 + *((float *)this + 52);
  *((float *)this + 52) = v35;
  v24 = v4 && *((float *)this + 57) <= (double)v35;
  v5 = 0.0;
  v6 = 0;
  v7 = 0;
  v38 = 0;
  v36 = 0;
  if ( *((int *)this + 51) > 0 )
  {
    v37 = 0;
    do
    {
      v8 = *((_DWORD *)v3 + 48);
      if ( !v8 || v6 >= (*((_DWORD *)v3 + 49) - v8) / 96 )
      {
        _invalid_parameter_noinfo();
        v2 = v27;
        v5 = 0.0;
      }
      v9 = v37 + *((_DWORD *)v3 + 48);
      v28 = *(float *)(v9 + 52) - v77;
      *(float *)(v9 + 52) = v28;
      if ( v28 <= v5 && v24 )
      {
        (*(void (__thiscall **)(BouncyParticles *, int))(*(_DWORD *)v3 + 24))(v3, v9);
        v38 = ++v7;
        if ( v7 > *((_DWORD *)v3 + 82) )
        {
          *((float *)v3 + 52) = 0.0;
          v24 = 0;
        }
        v5 = 0.0;
        v2 = v27;
      }
      if ( *((float *)v3 + 70) > (double)*(float *)(v9 + 52) )
        *(_DWORD *)(v9 + 44) = *(_DWORD *)(v9 + 44) & 0xFFFFFF
                             | ((unsigned int)(__int64)(*(float *)(v9 + 52) / *((float *)v3 + 70) * 255.0) << 24);
      if ( *(_BYTE *)(v9 + 84) )
      {
        v10 = (float *)(v9 + 12);
        v55 = *(float *)(v9 + 24) * v2;
        v56 = retaddr * v2;
        v57 = a1 * v2;
        v25 = *(float *)v9 + v55;
        *(float *)v9 = v25;
        v39 = v56 + *(float *)(v9 + 4);
        *(float *)(v9 + 4) = v39;
        v29 = v57 + *(float *)(v9 + 8);
        *(float *)(v9 + 8) = v29;
        if ( v5 == *(float *)(v9 + 12) && v5 == *(float *)(v9 + 16) && v5 == *(float *)(v9 + 20) )
        {
          v11 = *(_DWORD *)(v9 + 4);
          v12 = *(_DWORD *)(v9 + 8);
          *v10 = *(float *)v9;
          *(_DWORD *)(v9 + 16) = v11;
          *(_DWORD *)(v9 + 20) = v12;
        }
        if ( *((_BYTE *)v3 + 380) )
        {
          v46 = v5;
          v47 = v46;
          v48 = v46;
          v73 = v25 - *v10;
          v43 = v73;
          v74 = v39 - *(float *)(v9 + 16);
          v44 = v74;
          v75 = v29 - *(float *)(v9 + 20);
          v45 = v75;
          sub_100029CD();
          v13 = *(float *)(v9 + 60);
          v61 = v43 * v13;
          v62 = v44 * v13;
          v63 = v13 * v45;
          v49 = v61 * 0.8333333134651184;
          v50 = v62 * 0.8333333134651184;
          v51 = 0.8333333134651184 * v63;
          v76[0] = v25 + v49;
          v76[1] = v39 + v50;
          v76[2] = v29 + v51;
          if ( BouncyParticles::doesSegmentCrossPlane(
                 v3,
                 (BouncyParticles *)((char *)v3 + 368),
                 (BouncyParticles *)((char *)v3 + 356),
                 (struct Vector *)(v9 + 12),
                 (struct Vector *)v76,
                 (struct Vector *)&v46) )
          {
            v30 = retaddr * retaddr + vars0 * vars0 + a1 * a1;
            v31 = sqrt(v30);
            v26 = v31 * *((float *)v3 + 96) * ((double)(rand() % 75 + 25) / 100.0);
            if ( *((float *)v3 + 97) < (double)v26 )
              v26 = *((float *)v3 + 97);
            v14 = (float *)sub_10008C06((int)v78, (int)v3 + 356);
            v40 = *v14;
            v41 = v14[1];
            v42 = v14[2];
            sub_100029CD();
            v32 = -v26;
            v67 = v40 * v32;
            vars0 = v67;
            v68 = v41 * v32;
            retaddr = v68;
            v69 = v32 * v42;
            a1 = v69;
            v33 = v68 * v68 + v67 * v67 + v69 * v69;
            v34 = sqrt(v33);
            v15 = 0.0;
            if ( *((float *)v3 + 98) > (double)v34 )
            {
              v52 = 0.0;
              v53 = 0.0;
              v54 = 0.0;
              vars0 = 0.0;
              retaddr = 0.0;
              a1 = 0.0;
              *(_BYTE *)(v9 + 84) = 0;
            }
            v16 = v27;
            v58 = vars0 * v27;
            v59 = retaddr * v27;
            v60 = a1 * v27;
            v64 = v58 + v46;
            v17 = v59;
            *(float *)v9 = v64;
            v65 = v17 + v47;
            v18 = v60;
            *(float *)(v9 + 4) = v65;
            v66 = v18 + v48;
            *(float *)(v9 + 8) = v66;
          }
          else
          {
            v15 = 0.0;
            v16 = v27;
          }
          v19 = v16;
          v5 = v15;
          v2 = v19;
        }
        v4 = *(_BYTE *)(v9 + 84) == 0;
        v20 = *(_DWORD *)(v9 + 4);
        v21 = *(_DWORD *)(v9 + 8);
        *v10 = *(float *)v9;
        *(_DWORD *)(v9 + 16) = v20;
        *(_DWORD *)(v9 + 20) = v21;
        v7 = v38;
        if ( !v4 )
        {
          v70 = *((float *)v3 + 66) * v2;
          v71 = *((float *)v3 + 67) * v2;
          v72 = *((float *)v3 + 68) * v2;
          vars0 = vars0 + v70;
          retaddr = v71 + retaddr;
          a1 = a1 + v72;
        }
      }
      v37 += 96;
      v6 = ++v36;
    }
    while ( v36 < *((_DWORD *)v3 + 51) );
  }
  if ( v24 )
  {
    while ( 1 )
    {
      v22 = *((_DWORD *)v3 + 51);
      if ( (signed int)v22 >= *((_DWORD *)v3 + 54) )
        break;
      v23 = *((_DWORD *)v3 + 48);
      if ( !v23 || v22 >= (*((_DWORD *)v3 + 49) - v23) / 96 )
        _invalid_parameter_noinfo();
      (*(void (__thiscall **)(BouncyParticles *, unsigned int))(*(_DWORD *)v3 + 24))(
        v3,
        *((_DWORD *)v3 + 48) + 96 * v22);
      ++*((_DWORD *)v3 + 51);
      if ( ++v7 > *((_DWORD *)v3 + 82) )
      {
        *((float *)v3 + 52) = 0.0;
        return;
      }
    }
  }
}
