/*
 * func-name: sub_100D4060
 * func-address: 0x100d4060
 * callers: 0x10010e0b
 * callees: 0x10017599, 0x10018836, 0x10019b41, 0x102c99de, 0x102c9d98, 0x102c9dc8, 0x102c9ea2, 0x102ca0d8
 */

char __userpurge sub_100D4060@<al>(
        int a1@<ecx>,
        int a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        float a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  NxPhysics *v14; // eax
  int Material; // eax
  float *v16; // eax
  double v17; // st7
  int v18; // eax
  int v19; // edi
  int v20; // ecx
  int *v21; // eax
  void (__thiscall ***v22)(_DWORD, int); // esi
  unsigned int v23; // edi
  float *v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  float *v29; // eax
  float v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // ecx
  float v33; // eax
  float v34; // ecx
  float v35; // edi
  float v36; // eax
  float v37; // edx
  float v38; // edx
  int v39; // eax
  int VehicleActor; // eax
  int v42; // eax
  unsigned int v43; // edi
  int v44; // ebp
  _BYTE *v45; // eax
  void (__thiscall **v46)(_DWORD, int); // edi
  int v47; // eax
  int v48; // [esp+2Ch] [ebp-188h]
  int v49; // [esp+2Ch] [ebp-188h]
  int v50; // [esp+30h] [ebp-184h]
  struct NxMaterialDesc *v51; // [esp+30h] [ebp-184h]
  int v52; // [esp+34h] [ebp-180h]
  int v53; // [esp+38h] [ebp-17Ch]
  int v54; // [esp+44h] [ebp-170h]
  float v55; // [esp+44h] [ebp-170h]
  float v56; // [esp+44h] [ebp-170h]
  int v57; // [esp+48h] [ebp-16Ch]
  float v58; // [esp+48h] [ebp-16Ch]
  int v59; // [esp+48h] [ebp-16Ch]
  int v60; // [esp+4Ch] [ebp-168h]
  void (__thiscall ***v61)(_DWORD, int); // [esp+50h] [ebp-164h]
  int v62; // [esp+54h] [ebp-160h]
  float v63[38]; // [esp+5Ch] [ebp-158h] BYREF
  float v64[33]; // [esp+F4h] [ebp-C0h] BYREF
  float v65; // [esp+178h] [ebp-3Ch] BYREF
  _DWORD v66[3]; // [esp+17Ch] [ebp-38h] BYREF
  char v67[32]; // [esp+188h] [ebp-2Ch] BYREF
  _UNKNOWN *retaddr; // [esp+1B4h] [ebp+0h]

  sub_10018836(a4);
  sub_10018836(a5);
  *(float *)(a1 + 52) = a6;
  *(float *)(a1 + 60) = a7;
  v63[33] = 0.0;
  *(float *)(a1 + 56) = a9;
  memset(&v63[34], 0, 12);
  v63[30] = 1.0;
  v63[31] = 0.0;
  v63[32] = 0.0;
  v63[27] = 0.0;
  v63[25] = 0.0;
  v63[26] = 0.0;
  v63[29] = 0.0;
  v63[28] = 0.0;
  v14 = (NxPhysics *)NxPhysics::Instance(&v63[25], v48, v50, v52, v53);
  Material = NxPhysics::CreateMaterial(v14, v51);
  v64[0] = 1.0;
  *(_DWORD *)(a1 + 12) = Material;
  v64[1] = 0.0;
  LODWORD(v64[30]) = 4;
  v64[2] = 0.0;
  LODWORD(v64[27]) = 2304;
  v64[3] = 0.0;
  v64[5] = 0.0;
  v64[6] = 0.0;
  v64[7] = 0.0;
  v64[11] = 0.0;
  v64[10] = 0.0;
  v64[9] = 0.0;
  v64[14] = 0.0;
  v64[13] = 0.0;
  v64[12] = 0.0;
  v64[18] = 0.0;
  v64[17] = 0.0;
  v64[16] = 0.0;
  v64[21] = 0.0;
  v64[20] = 0.0;
  v64[19] = 0.0;
  v64[4] = 1.0;
  v64[8] = 1.0;
  v64[22] = 0.39999998;
  v64[23] = 0.0;
  v64[24] = 0.050000001;
  v64[25] = -1.0;
  v64[28] = -1.0;
  v64[29] = -1.0;
  v64[26] = 0.0;
  v64[31] = -1.0;
  v64[32] = 0.0;
  v65 = 3.4028235e38;
  v64[15] = a8;
  memset(v63, 0, 0x68u);
  v63[13] = 0.0;
  v63[0] = 1.0;
  v63[12] = 0.0;
  v63[4] = 1.0;
  memset(&v63[14], 0, 14);
  v63[8] = 1.0;
  memset(&v63[18], 0, 12);
  v63[1] = 0.0;
  v63[2] = 0.0;
  v63[3] = 0.0;
  v63[5] = 0.0;
  v63[23] = v63[22];
  v63[6] = 0.0;
  LODWORD(v63[21]) = 1;
  v63[7] = 0.0;
  v63[11] = 0.0;
  v63[10] = 0.0;
  v63[9] = 0.0;
  retaddr = 0;
  if ( a8 > 0.0 )
    LODWORD(v63[12]) = v64;
  qmemcpy(v63, (const void *)NxHelper::ToNxMat33(v67, a3), 0x24u);
  v16 = (float *)NxHelper::ToNxVec3(v66, a3 + 48);
  v63[9] = *v16;
  v63[10] = v16[1];
  v17 = v16[2];
  v18 = *(_DWORD *)(a4 + 4);
  v63[11] = v17;
  if ( v18 )
    v19 = (*(_DWORD *)(a4 + 8) - v18) / 12;
  else
    v19 = 0;
  v20 = (120 * (unsigned __int64)(unsigned int)v19) >> 32 != 0 ? -1 : 120 * v19;
  v21 = (int *)operator new(__CFADD__(v20, 4) ? -1 : v20 + 4);
  LOBYTE(retaddr) = 1;
  if ( v21 )
  {
    v22 = (void (__thiscall ***)(_DWORD, int))(v21 + 1);
    *v21 = v19;
    `eh vector constructor iterator'(v21 + 1, 0x78u, v19, sub_10006F69, sub_10013F25);
    v61 = v22;
  }
  else
  {
    v61 = 0;
    v22 = 0;
  }
  v23 = 0;
  LOBYTE(retaddr) = 0;
  v62 = 0;
  if ( sub_10017599() )
  {
    v60 = 0;
    v24 = (float *)(v22 + 29);
    do
    {
      v25 = *(_DWORD *)(a4 + 4);
      if ( !v25 || v23 >= (*(_DWORD *)(a4 + 8) - v25) / 12 )
        _invalid_parameter_noinfo();
      v26 = *(_DWORD *)(a4 + 4);
      v54 = v26 + v60;
      if ( !v26 || v23 >= (*(_DWORD *)(a4 + 8) - v26) / 12 )
        _invalid_parameter_noinfo();
      v27 = *(_DWORD *)(a4 + 4);
      v57 = v27;
      if ( !v27 || v23 >= (*(_DWORD *)(a4 + 8) - v27) / 12 )
        _invalid_parameter_noinfo();
      v58 = *(float *)(v57 + v60 + 4);
      v55 = *(float *)(v54 + 8);
      *(v24 - 2) = *(float *)(v60 + *(_DWORD *)(a4 + 4));
      *(v24 - 1) = v58;
      *v24 = v55;
      v28 = *(_DWORD *)(LODWORD(a6) + 4);
      if ( !v28 || v23 >= (*(_DWORD *)(LODWORD(a6) + 8) - v28) / 12 )
        _invalid_parameter_noinfo();
      v29 = (float *)NxHelper::ToNxVec3(v66, v60 + *(_DWORD *)(LODWORD(a6) + 4));
      *(v24 - 18) = *v29;
      *(v24 - 17) = v29[1];
      *(v24 - 16) = v29[2];
      *((_WORD *)v24 - 27) = *(_WORD *)(a1 + 12);
      v30 = v63[23];
      if ( LODWORD(v63[24]) <= LODWORD(v63[23]) )
      {
        v31 = LODWORD(v63[22]);
        v32 = 2 * ((LODWORD(v63[23]) - LODWORD(v63[22])) >> 2) + 2;
        if ( LODWORD(v63[22]) )
        {
          v31 = (LODWORD(v63[24]) - LODWORD(v63[22])) >> 2;
          v32 = 2 * ((LODWORD(v63[23]) - LODWORD(v63[22])) >> 2) + 2;
        }
        if ( v31 < v32 )
        {
          v59 = 4 * v32;
          v33 = COERCE_FLOAT(malloc(4 * v32));
          v34 = v63[22];
          v35 = v33;
          v36 = v63[23];
          v37 = v35;
          v56 = v63[23];
          if ( LODWORD(v63[22]) != LODWORD(v63[23]) )
          {
            do
            {
              *(_DWORD *)LODWORD(v37) = *(_DWORD *)LODWORD(v34);
              LODWORD(v34) += 4;
              LODWORD(v37) += 4;
            }
            while ( LODWORD(v34) != LODWORD(v56) );
            v36 = v63[23];
            v34 = v63[22];
          }
          if ( v34 != 0.0 )
          {
            free((void *)LODWORD(v34));
            v36 = v63[23];
            v34 = v63[22];
          }
          LODWORD(v38) = LODWORD(v35) + v59;
          LODWORD(v30) = LODWORD(v35) + 4 * ((LODWORD(v36) - LODWORD(v34)) >> 2);
          v63[22] = v35;
          v23 = v62;
          v63[24] = v38;
          v63[23] = v30;
        }
      }
      v60 += 12;
      *(_DWORD *)LODWORD(v30) = v24 - 29;
      LODWORD(v63[23]) += 4;
      v62 = ++v23;
      v24 += 30;
    }
    while ( v23 < sub_10017599() );
    v22 = v61;
  }
  v39 = NxPhysics::Instance(0, a4, v63, a12, a13);
  VehicleActor = NxPhysics::CreateVehicleActor(v39);
  *(_DWORD *)(a1 + 4) = VehicleActor;
  if ( !VehicleActor )
    goto LABEL_36;
  if ( v22 )
  {
    if ( *(v22 - 1) )
      (**v22)(v22, 3);
    else
      operator delete[](v22 - 1);
  }
  v42 = *(_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 80))(*(_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 8) = v42;
  if ( v42 )
  {
    v43 = 0;
    if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 76))(*(_DWORD *)(a1 + 4), v49) )
    {
      do
      {
        v44 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 80))(*(_DWORD *)(a1 + 4)) + 4 * v43);
        v45 = operator new(0x28u);
        if ( v45 )
          *v45 = 0;
        else
          v45 = 0;
        *v45 = 0;
        *(_DWORD *)(v44 + 4) = v45;
        ++v43;
      }
      while ( v43 < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 76))(*(_DWORD *)(a1 + 4)) );
    }
    (*(void (__cdecl **)(int))(**(_DWORD **)(a1 + 4) + 216))(a11);
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 208))(LODWORD(a9));
    v46 = (void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 124);
    v47 = NxHelper::ToNxVec3(&v65, LODWORD(a8));
    (*v46)(*(_DWORD *)(a1 + 4), v47);
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 348))(1.0e10);
    sub_10019B41(v62);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 4) + 348))(*(_DWORD *)(a1 + 4), 1.0e10);
    if ( LODWORD(v63[21]) )
      free((void *)LODWORD(v63[21]));
    return 1;
  }
  else
  {
LABEL_36:
    if ( LODWORD(v63[21]) )
      free((void *)LODWORD(v63[21]));
    return 0;
  }
}
