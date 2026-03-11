/*
 * func-name: ?Tick@WaterDecal@@UAEXXZ_0
 * func-address: 0x100be8a0
 * callers: 0x1000a0fb
 * callees: 0x100029cd, 0x10005ad3, 0x1001717a, 0x102c9db6, 0x102c9dbc
 */

void __thiscall WaterDecal::Tick(WaterDecal *this)
{
  double v2; // st6
  double v3; // st6
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // ebp
  _DWORD *v7; // eax
  float v8; // ecx
  int v9; // ecx
  int v10; // edx
  double v11; // st6
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // ebp
  int v15; // eax
  float v16; // edx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // edi
  int v20; // ebp
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  double v26; // st7
  float *v27; // eax
  float v28; // [esp+14h] [ebp-110h]
  float v29; // [esp+14h] [ebp-110h]
  float v30; // [esp+14h] [ebp-110h]
  float v31; // [esp+14h] [ebp-110h]
  float v32; // [esp+14h] [ebp-110h]
  float v33; // [esp+14h] [ebp-110h]
  float v34; // [esp+14h] [ebp-110h]
  float v35; // [esp+14h] [ebp-110h]
  float v36; // [esp+14h] [ebp-110h]
  float v37; // [esp+14h] [ebp-110h]
  float v38; // [esp+14h] [ebp-110h]
  float v39; // [esp+14h] [ebp-110h]
  float v40; // [esp+14h] [ebp-110h]
  float v41; // [esp+14h] [ebp-110h]
  float v42; // [esp+14h] [ebp-110h]
  float v43; // [esp+18h] [ebp-10Ch]
  float v44; // [esp+18h] [ebp-10Ch]
  float v45; // [esp+18h] [ebp-10Ch]
  float v46; // [esp+18h] [ebp-10Ch]
  float v47; // [esp+18h] [ebp-10Ch]
  float v48; // [esp+1Ch] [ebp-108h]
  float v49; // [esp+1Ch] [ebp-108h]
  float v50; // [esp+1Ch] [ebp-108h]
  float v51; // [esp+1Ch] [ebp-108h]
  float v52; // [esp+1Ch] [ebp-108h]
  float v53; // [esp+20h] [ebp-104h] BYREF
  float v54; // [esp+24h] [ebp-100h]
  float v55; // [esp+28h] [ebp-FCh]
  float v56; // [esp+2Ch] [ebp-F8h]
  float v57; // [esp+30h] [ebp-F4h]
  float v58; // [esp+34h] [ebp-F0h]
  float v59; // [esp+38h] [ebp-ECh]
  float v60; // [esp+3Ch] [ebp-E8h] BYREF
  float v61; // [esp+40h] [ebp-E4h]
  float v62; // [esp+44h] [ebp-E0h]
  _BYTE v63[32]; // [esp+48h] [ebp-DCh] BYREF
  int v64; // [esp+88h] [ebp-9Ch]
  _BYTE v65[32]; // [esp+B0h] [ebp-74h] BYREF
  int v66; // [esp+F0h] [ebp-34h]
  int v67; // [esp+120h] [ebp-4h]

  v56 = GDeltaTime + *((float *)this + 85);
  *((float *)this + 85) = v56;
  v48 = *((float *)this + 5) - *((float *)this + 66);
  v43 = *((float *)this + 6) - *((float *)this + 67);
  v28 = *((float *)this + 7) - *((float *)this + 68);
  v57 = v48;
  v58 = v43;
  v59 = v28;
  v29 = v48 * v48 + 0.0 * 0.0 + v28 * v28;
  v30 = sqrt(v29);
  v2 = v56;
  if ( *((float *)this + 48) <= (double)v30 )
  {
    if ( *((float *)this + 56) < v2 )
    {
      *((float *)this + 85) = 0.0;
      CollisionInfo::CollisionInfo((CollisionInfo *)v65);
      v37 = *((float *)this + 5) - 0.0;
      v11 = *((float *)this + 6);
      v67 = 1;
      v46 = v11 - 1.0;
      v51 = *((float *)this + 7) - 0.0;
      v60 = v37;
      v61 = v46;
      v62 = v51;
      v38 = *((float *)this + 5) + 0.0;
      v47 = *((float *)this + 6) + 1.0;
      v52 = *((float *)this + 7) + 0.0;
      v53 = v38;
      v54 = v47;
      v55 = v52;
      v12 = NxPhysics::Instance(&v53, &v60, 1, v65, 64);
      NxPhysics::RayCast(v12);
      if ( v66 )
      {
        ++*((_DWORD *)this + 86);
        v13 = *((_DWORD *)this + 45);
        if ( !v13 || *((_DWORD *)this + 86) >= (unsigned int)((*((_DWORD *)this + 46) - v13) / 28) )
          *((_DWORD *)this + 86) = 0;
        v14 = (_DWORD *)sub_10005AD3(0);
        v15 = sub_1001717A(*((_DWORD *)this + 86));
        *(_DWORD *)(v15 + 4) = *v14;
        v15 += 4;
        *(_DWORD *)(v15 + 4) = v14[1];
        v16 = v57;
        *(_DWORD *)(v15 + 8) = v14[2];
        v55 = v59;
        v53 = v16;
        v54 = v58;
        sub_100029CD();
        v39 = v54 * 0.0 + 0.0 * v53 - v55 * 1.0;
        v40 = acos(v39);
        *(float *)(sub_1001717A(*((_DWORD *)this + 86)) + 16) = v40;
        v41 = *((float *)this + 5) - *((float *)this + 66);
        if ( v41 > 0.0 )
        {
          v42 = -*(float *)(sub_1001717A(*((_DWORD *)this + 86)) + 16);
          *(float *)(sub_1001717A(*((_DWORD *)this + 86)) + 16) = v42;
        }
        *(float *)sub_1001717A(*((_DWORD *)this + 86)) = *((float *)this + 55);
        *(float *)(sub_1001717A(*((_DWORD *)this + 86)) + 20) = *((float *)this + 57);
        *(_BYTE *)(sub_1001717A(*((_DWORD *)this + 86)) + 24) = 0;
      }
      v17 = *((_DWORD *)this + 6);
      v18 = *((_DWORD *)this + 7);
      *((_DWORD *)this + 66) = *((_DWORD *)this + 5);
      *((_DWORD *)this + 67) = v17;
      *((_DWORD *)this + 68) = v18;
      v67 = -1;
      CollisionInfo::~CollisionInfo((CollisionInfo *)v65);
    }
  }
  else if ( *((float *)this + 50) < v2 )
  {
    *((float *)this + 85) = 0.0;
    CollisionInfo::CollisionInfo((CollisionInfo *)v63);
    v31 = *((float *)this + 5) - 0.0;
    v3 = *((float *)this + 6) - 1.0;
    v67 = 0;
    v44 = v3;
    v49 = *((float *)this + 7) - 0.0;
    v53 = v31;
    v54 = v44;
    v55 = v49;
    v32 = *((float *)this + 5) + 0.0;
    v45 = *((float *)this + 6) + 1.0;
    v50 = *((float *)this + 7) + 0.0;
    v60 = v32;
    v61 = v45;
    v62 = v50;
    v4 = NxPhysics::Instance(&v60, &v53, 1, v63, 64);
    NxPhysics::RayCast(v4);
    if ( v64 )
    {
      ++*((_DWORD *)this + 86);
      v5 = *((_DWORD *)this + 45);
      if ( !v5 || *((_DWORD *)this + 86) >= (unsigned int)((*((_DWORD *)this + 46) - v5) / 28) )
        *((_DWORD *)this + 86) = 0;
      v6 = (_DWORD *)sub_10005AD3(0);
      v7 = (_DWORD *)(sub_1001717A(*((_DWORD *)this + 86)) + 4);
      *v7 = *v6;
      v7[1] = v6[1];
      v8 = v58;
      v7[2] = v6[2];
      v54 = v8;
      v53 = v57;
      v55 = v59;
      sub_100029CD();
      v33 = v54 * 0.0 + 0.0 * v53 - v55 * 1.0;
      v34 = acos(v33);
      *(float *)(sub_1001717A(*((_DWORD *)this + 86)) + 16) = v34;
      v35 = *((float *)this + 5) - *((float *)this + 66);
      if ( v35 > 0.0 )
      {
        v36 = -*(float *)(sub_1001717A(*((_DWORD *)this + 86)) + 16);
        *(float *)(sub_1001717A(*((_DWORD *)this + 86)) + 16) = v36;
      }
      *(float *)sub_1001717A(*((_DWORD *)this + 86)) = *((float *)this + 49);
      *(float *)(sub_1001717A(*((_DWORD *)this + 86)) + 20) = *((float *)this + 51);
      *(_BYTE *)(sub_1001717A(*((_DWORD *)this + 86)) + 24) = 1;
    }
    v9 = *((_DWORD *)this + 6);
    v10 = *((_DWORD *)this + 7);
    *((_DWORD *)this + 66) = *((_DWORD *)this + 5);
    *((_DWORD *)this + 67) = v9;
    *((_DWORD *)this + 68) = v10;
    v67 = -1;
    CollisionInfo::~CollisionInfo((CollisionInfo *)v63);
  }
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    v21 = *((_DWORD *)this + 45);
    if ( !v21 || v19 >= (*((_DWORD *)this + 46) - v21) / 28 )
      break;
    v22 = *((_DWORD *)this + 45);
    if ( !v22 || v19 >= (*((_DWORD *)this + 46) - v22) / 28 )
      _invalid_parameter_noinfo();
    *(float *)(*((_DWORD *)this + 45) + v20) = *(float *)(*((_DWORD *)this + 45) + v20) - GDeltaTime;
    v23 = *((_DWORD *)this + 45);
    if ( !v23 || v19 >= (*((_DWORD *)this + 46) - v23) / 28 )
      _invalid_parameter_noinfo();
    v24 = *((_DWORD *)this + 45);
    if ( *(float *)(v24 + v20) > 0.0 )
    {
      if ( !v24 || v19 >= (*((_DWORD *)this + 46) - v24) / 28 )
        _invalid_parameter_noinfo();
      v25 = *((_DWORD *)this + 45);
      if ( *(_BYTE *)(v25 + v20 + 24) )
      {
        if ( !v25 || v19 >= (*((_DWORD *)this + 46) - v25) / 28 )
          _invalid_parameter_noinfo();
        v26 = *((float *)this + 52);
      }
      else
      {
        if ( !v25 || v19 >= (*((_DWORD *)this + 46) - v25) / 28 )
          _invalid_parameter_noinfo();
        v26 = *((float *)this + 58);
      }
      v27 = (float *)(*((_DWORD *)this + 45) + v20 + 20);
      ++v19;
      v20 += 28;
      *v27 = v26 * GDeltaTime + *v27;
    }
    else
    {
      if ( !v24 || v19 >= (*((_DWORD *)this + 46) - v24) / 28 )
        _invalid_parameter_noinfo();
      *(float *)(*((_DWORD *)this + 45) + v20) = 0.0;
      ++v19;
      v20 += 28;
    }
  }
  FXSystem::Tick(this);
}
