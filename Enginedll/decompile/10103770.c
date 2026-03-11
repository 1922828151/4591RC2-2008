/*
 * func-name: sub_10103770
 * func-address: 0x10103770
 * callers: 0x10104470, 0x10104580, 0x101046b0, 0x10137b60, 0x1013e2e0
 * callees: 0x10001440, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x100a1d10, 0x100e2550, 0x100ee930, 0x10102270, 0x10102e10, 0x101032a0, 0x10104960, 0x10105130, 0x101051a0, 0x1017a0b0, 0x101a2500, 0x101a2534
 */

void __thiscall sub_10103770(int *this)
{
  int *v1; // edi
  LARGE_INTEGER *v2; // eax
  unsigned int v3; // ebx
  void *v4; // esi
  void *v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  unsigned int i; // ebp
  int v10; // esi
  char *v11; // edi
  bool v12; // cc
  _DWORD *v13; // esi
  char *v14; // ebx
  int v15; // esi
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  int v19; // ecx
  int v20; // esi
  int v21; // esi
  int v22; // ecx
  int v23; // esi
  int v24; // esi
  int v25; // ecx
  int v26; // esi
  int v27; // esi
  int v28; // ecx
  int v29; // esi
  int v30; // esi
  char *v31; // edi
  _DWORD *v32; // esi
  char *v33; // ebp
  float *v34; // eax
  CRETimer *v35; // eax
  unsigned int v37; // [esp+28h] [ebp-A0h]
  int v38; // [esp+2Ch] [ebp-9Ch] BYREF
  int v39[2]; // [esp+30h] [ebp-98h] BYREF
  float v40[4]; // [esp+38h] [ebp-90h] BYREF
  float v41; // [esp+48h] [ebp-80h]
  float v42; // [esp+4Ch] [ebp-7Ch]
  float v43; // [esp+50h] [ebp-78h]
  float v44; // [esp+54h] [ebp-74h]
  float v45; // [esp+58h] [ebp-70h]
  float v46; // [esp+5Ch] [ebp-6Ch]
  _DWORD v47[4]; // [esp+60h] [ebp-68h] BYREF
  float v48; // [esp+70h] [ebp-58h]
  float v49; // [esp+74h] [ebp-54h]
  float v50; // [esp+78h] [ebp-50h]
  float v51; // [esp+7Ch] [ebp-4Ch]
  float v52; // [esp+80h] [ebp-48h]
  float v53; // [esp+84h] [ebp-44h]
  int v54; // [esp+C4h] [ebp-4h]

  v1 = this;
  v2 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v2);
  v3 = 0;
  if ( v1[1] )
  {
    v4 = (void *)*v1;
    if ( *v1 )
    {
      sub_10102270(*v1);
      operator delete(v4);
      *v1 = 0;
    }
    v5 = operator new(0x74u);
    v38 = (int)v5;
    v54 = 0;
    if ( v5 )
      v6 = sub_10104960(v5);
    else
      v6 = 0;
    v54 = -1;
    *v1 = v6;
    sub_10001440(v40);
    v44 = -1.0e10;
    v45 = -1.0e10;
    v54 = 1;
    v46 = -1.0e10;
    v41 = 1.0e10;
    v42 = 1.0e10;
    v43 = 1.0e10;
    if ( byte_10282ED4 )
    {
      v7 = dword_10282ECC;
      v8 = dword_10282EC8;
      for ( i = 0; ; ++i )
      {
        v37 = v3;
        if ( !v8 || i >= (v7 - v8) / 80 )
          break;
        if ( *(_BYTE *)(v8 + v3 + 44) )
        {
          if ( i >= (v7 - v8) / 80 )
          {
            invalid_parameter_noinfo();
            v7 = dword_10282ECC;
            v8 = dword_10282EC8;
          }
          v47[0] = &Volume::`vftable';
          v47[1] = *(_DWORD *)(v8 + v3 + 8);
          v47[2] = *(_DWORD *)(v8 + v3 + 12);
          v47[3] = *(_DWORD *)(v8 + v3 + 16);
          v47[0] = &BBox::`vftable';
          v48 = *(float *)(v8 + v3 + 20);
          v49 = *(float *)(v8 + v3 + 24);
          v50 = *(float *)(v8 + v3 + 28);
          v51 = *(float *)(v8 + v3 + 32);
          v52 = *(float *)(v8 + v3 + 36);
          v53 = *(float *)(v8 + v3 + 40);
          LOBYTE(v54) = 2;
          if ( v51 > (double)v44 )
            v44 = v51;
          if ( v52 > (double)v45 )
            v45 = v52;
          if ( v53 > (double)v46 )
            v46 = v53;
          if ( v48 < (double)v41 )
            v41 = v48;
          if ( v49 < (double)v42 )
            v42 = v49;
          if ( v50 < (double)v43 )
            v43 = v50;
          if ( !v8 || i >= (v7 - v8) / 80 )
          {
            invalid_parameter_noinfo();
            v8 = dword_10282EC8;
          }
          v38 = v3 + v8;
          sub_101051A0(*v1 + 100, (int)&v38);
          v10 = dword_10282EC8;
          if ( !dword_10282EC8 || i >= (dword_10282ECC - dword_10282EC8) / 80 )
          {
            invalid_parameter_noinfo();
            v10 = dword_10282EC8;
          }
          v11 = *(char **)(v10 + v3 + 56);
          v12 = *(_DWORD *)(v10 + v3 + 52) <= (unsigned int)v11;
          v13 = (_DWORD *)(v10 + v3 + 48);
          if ( !v12 )
            invalid_parameter_noinfo();
          v14 = (char *)v13[1];
          if ( (unsigned int)v14 > v13[2] )
            invalid_parameter_noinfo();
          std::vector<Model *>::erase(v13, v39, (int)v13, v14, (int)v13, v11);
          LOBYTE(v54) = 1;
          sub_1017A0B0(v47);
          v7 = dword_10282ECC;
          v8 = dword_10282EC8;
          v3 = v37;
          v1 = this;
        }
        v3 += 80;
      }
    }
    else
    {
      while ( 1 )
      {
        v15 = v1[1];
        v16 = *(_DWORD *)(v15 + 3224);
        if ( !v16 || v3 >= (*(_DWORD *)(v15 + 3228) - v16) >> 2 )
          break;
        v17 = 4 * v3;
        if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v15 + 3224) + 4 * v3) + 696) )
        {
          v18 = this[1];
          v19 = *(_DWORD *)(v18 + 3224);
          v20 = v18 + 3220;
          if ( !v19 || v3 >= (*(_DWORD *)(v20 + 8) - v19) >> 2 )
            invalid_parameter_noinfo();
          if ( *(_DWORD *)(*(_DWORD *)(v17 + *(_DWORD *)(v20 + 4)) + 716) )
          {
            v21 = this[1];
            v22 = *(_DWORD *)(v21 + 3224);
            v23 = v21 + 3220;
            if ( !v22 || v3 >= (*(_DWORD *)(v23 + 8) - v22) >> 2 )
              invalid_parameter_noinfo();
            StaticModel::GetWorldBBox(*(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v23 + 4) + 4 * v3) + 716), v47);
            LOBYTE(v54) = 3;
            if ( v51 > (double)v44 )
              v44 = v51;
            if ( v52 > (double)v45 )
              v45 = v52;
            if ( v53 > (double)v46 )
              v46 = v53;
            if ( v48 < (double)v41 )
              v41 = v48;
            if ( v49 < (double)v42 )
              v42 = v49;
            if ( v50 < (double)v43 )
              v43 = v50;
            v24 = this[1];
            v25 = *(_DWORD *)(v24 + 3224);
            v26 = v24 + 3220;
            if ( !v25 || v3 >= (*(_DWORD *)(v26 + 8) - v25) >> 2 )
              invalid_parameter_noinfo();
            v38 = *(int *)(v17 + *(_DWORD *)(v26 + 4));
            sub_10105130(*this + 84, (int)&v38);
            v27 = this[1];
            v28 = *(_DWORD *)(v27 + 3224);
            v29 = v27 + 3220;
            if ( !v28 || v3 >= (*(_DWORD *)(v29 + 8) - v28) >> 2 )
              invalid_parameter_noinfo();
            v30 = *(_DWORD *)(v17 + *(_DWORD *)(v29 + 4));
            v31 = *(char **)(v30 + 1160);
            v32 = (_DWORD *)(v30 + 1152);
            if ( v32[1] > (unsigned int)v31 )
              invalid_parameter_noinfo();
            v33 = (char *)v32[1];
            if ( (unsigned int)v33 > v32[2] )
              invalid_parameter_noinfo();
            std::vector<Model *>::erase(v32, v39, (int)v32, v33, (int)v32, v31);
            LOBYTE(v54) = 1;
            sub_1017A0B0(v47);
          }
        }
        v1 = this;
        ++v3;
      }
    }
    v34 = (float *)*v1;
    v34[1] = v40[1];
    v34[2] = v40[2];
    v34[3] = v40[3];
    v34[4] = v41;
    v34[5] = v42;
    v34[6] = v43;
    v34[7] = v44;
    v34[8] = v45;
    v34[9] = v46;
    sub_10102E10(*v1, (int)v1);
    sub_101032A0(*v1, (int)v1);
    v35 = REGetGlobalTimer();
    *(float *)&v38 = CRETimer::StopMiniTimer(v35);
    LogPrintf("*****OcTree Builed: %.5f", *(float *)&v38);
    v54 = -1;
    sub_1017A0B0(v40);
  }
}
