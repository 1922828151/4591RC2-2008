/*
 * func-name: sub_10102E10
 * func-address: 0x10102e10
 * callers: 0x10102e10, 0x10103770, 0x10103d60
 * callees: 0x1004c2c0, 0x100ee930, 0x10102270, 0x10102950, 0x10102e10, 0x10104f10, 0x101050c0, 0x1017a0b0, 0x101a2500
 */

void __thiscall sub_10102E10(int this, int a2)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ebp
  unsigned int j; // edi
  int v8; // ecx
  unsigned int i; // edi
  int v10; // ecx
  bool v11; // cc
  _DWORD *v12; // ebx
  int v13; // edi
  unsigned int v14; // ebp
  float *v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // ebp
  int v22; // ecx
  int v23; // edi
  unsigned int v24; // eax
  int v25; // edi
  unsigned int v26; // edx
  int *v27; // eax
  void *v28; // ebx
  int v29; // ebx
  int *v30; // edi
  void *v31; // ebp
  int v32; // ebx
  int *v33; // ebp
  _DWORD *v34; // edi
  int v35; // eax
  char *v36; // ebx
  char *v37; // edi
  int v38; // eax
  char *v39; // ebp
  char v40; // [esp+1h] [ebp-6Dh]
  float v41; // [esp+2h] [ebp-6Ch]
  float v42; // [esp+2h] [ebp-6Ch]
  unsigned int v43; // [esp+2h] [ebp-6Ch]
  float v44; // [esp+6h] [ebp-68h]
  float v45; // [esp+6h] [ebp-68h]
  int v46; // [esp+6h] [ebp-68h]
  float v47; // [esp+Ah] [ebp-64h]
  float v48; // [esp+Ah] [ebp-64h]
  float **v49; // [esp+Ah] [ebp-64h]
  int v50; // [esp+Eh] [ebp-60h]
  int v51[3]; // [esp+12h] [ebp-5Ch] BYREF
  int v52[2]; // [esp+1Eh] [ebp-50h] BYREF
  float v53; // [esp+26h] [ebp-48h]
  float v54; // [esp+2Ah] [ebp-44h]
  float v55[3]; // [esp+2Eh] [ebp-40h] BYREF
  float v56[12]; // [esp+3Ah] [ebp-34h] BYREF
  int v57; // [esp+6Ah] [ebp-4h]

  v57 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  LODWORD(v56[11]) = &loc_101B041A;
  LODWORD(v56[10]) = ExceptionList;
  v4 = *(_DWORD *)(this + 88);
  if ( v4 )
    v5 = (*(_DWORD *)(this + 92) - v4) >> 2;
  else
    v5 = 0;
  v6 = a2;
  if ( v5 >= *(_DWORD *)(a2 + 12) )
  {
    v47 = *(float *)(this + 28) + *(float *)(this + 16);
    v44 = *(float *)(this + 32) + *(float *)(this + 20);
    v41 = *(float *)(this + 36) + *(float *)(this + 24);
    v48 = v47 * 0.5;
    v45 = v44 * 0.5;
    v42 = 0.5 * v41;
    *(float *)v51 = v48;
    *(float *)(this + 40) = v48;
    *(float *)&v51[1] = v45;
    *(float *)(this + 44) = v45;
    *(float *)&v51[2] = v42;
    *(float *)(this + 48) = v42;
    if ( *(int *)(v6 + 8) < 8 )
      *(float *)(this + 44) = *(float *)(this + 20);
    for ( i = 0; ; ++i )
    {
      v10 = *(_DWORD *)(this + 88);
      v43 = i;
      if ( !v10 || i >= (*(_DWORD *)(this + 92) - v10) >> 2 )
        break;
      StaticModel::GetWorldBBox(*(_DWORD **)(*(_DWORD *)(4 * i + *(_DWORD *)(this + 88)) + 716), v56);
      v11 = *(_DWORD *)(v6 + 8) <= 0;
      v57 = 0;
      v46 = 0;
      if ( !v11 )
      {
        v12 = &unk_102829F0;
        v49 = (float **)(this + 52);
LABEL_18:
        v13 = 0;
        v14 = *v12 & 0x80000000;
        while ( 1 )
        {
          v15 = sub_1004C2C0(v56, v55, v13);
          *(float *)&v50 = *v15 - *(float *)(this + 40);
          *(float *)v51 = v15[1] - *(float *)(this + 44);
          *(float *)v52 = v15[2] - *(float *)(this + 48);
          v52[1] = v50;
          v53 = *(float *)v51;
          v54 = *(float *)v52;
          if ( (v50 & 0x80000000) == v14 && (v12[1] ^ LODWORD(v53)) >= 0 && (v12[2] ^ LODWORD(v54)) >= 0 )
            break;
          if ( ++v13 >= 8 )
            goto LABEL_34;
        }
        v16 = *(_DWORD *)(this + 88);
        if ( !v16 || v43 >= (*(_DWORD *)(this + 92) - v16) >> 2 )
          invalid_parameter_noinfo();
        sub_10102950((float *)this, v49, v46, *(_DWORD *)(4 * v43 + *(_DWORD *)(this + 88)));
        v17 = *((_DWORD *)*v49 + 22);
        if ( v17 )
          v18 = (*((_DWORD *)*v49 + 23) - v17) >> 2;
        else
          v18 = 0;
        v19 = *(_DWORD *)(this + 88);
        if ( v19 )
          v20 = (*(_DWORD *)(this + 92) - v19) >> 2;
        else
          v20 = 0;
        if ( v18 == v20 )
        {
          v21 = 0;
          while ( 1 )
          {
            v22 = *(_DWORD *)(this + 88);
            if ( !v22 || v21 >= (*(_DWORD *)(this + 92) - v22) >> 2 )
              break;
            v52[0] = this;
            if ( v21 >= (*(_DWORD *)(this + 92) - v22) >> 2 )
              invalid_parameter_noinfo();
            v23 = *(_DWORD *)(*(_DWORD *)(this + 88) + 4 * v21);
            v24 = *(_DWORD *)(v23 + 1156);
            v25 = v23 + 1152;
            if ( v24 )
              v26 = (int)(*(_DWORD *)(v25 + 8) - v24) >> 2;
            else
              v26 = 0;
            if ( v24 && v26 < (int)(*(_DWORD *)(v25 + 12) - v24) >> 2 )
            {
              v27 = *(int **)(v25 + 8);
              *v27 = this;
              *(_DWORD *)(v25 + 8) = v27 + 1;
              ++v21;
            }
            else
            {
              v28 = *(void **)(v25 + 8);
              if ( v24 > (unsigned int)v28 )
                invalid_parameter_noinfo();
              sub_10104F10((int)v51, v25, v28, (int)v52);
              ++v21;
            }
          }
          v29 = 0;
          if ( *(int *)(a2 + 8) > 0 )
          {
            v30 = (int *)(this + 52);
            do
            {
              v31 = (void *)*v30;
              if ( *v30 )
              {
                sub_10102270(*v30);
                operator delete(v31);
                *v30 = 0;
              }
              ++v29;
              ++v30;
            }
            while ( v29 < *(_DWORD *)(a2 + 8) );
          }
          v57 = -1;
          sub_1017A0B0(v56);
          v6 = a2;
          break;
        }
LABEL_34:
        ++v49;
        v12 += 3;
        if ( ++v46 < *(_DWORD *)(a2 + 8) )
          goto LABEL_18;
        i = v43;
        v6 = a2;
      }
      v57 = -1;
      sub_1017A0B0(v56);
    }
    v32 = 0;
    v40 = 0;
    if ( *(int *)(v6 + 8) > 0 )
    {
      v33 = (int *)(this + 52);
      do
      {
        v34 = (_DWORD *)*v33;
        if ( *v33 )
        {
          v35 = v34[22];
          if ( v35 && (v34[23] - v35) >> 2 )
          {
            sub_10102E10(a2);
            v40 = 1;
          }
          else
          {
            sub_10102270(*v33);
            operator delete(v34);
            *v33 = 0;
          }
        }
        ++v32;
        ++v33;
      }
      while ( v32 < *(_DWORD *)(a2 + 8) );
      if ( v40 )
      {
        v36 = *(char **)(this + 92);
        if ( *(_DWORD *)(this + 88) > (unsigned int)v36 )
          invalid_parameter_noinfo();
        v37 = *(char **)(this + 88);
        if ( (unsigned int)v37 > *(_DWORD *)(this + 92) )
          invalid_parameter_noinfo();
        if ( v37 != v36 )
        {
          v38 = (*(_DWORD *)(this + 92) - (int)v36) >> 2;
          v39 = &v37[4 * v38];
          if ( v38 > 0 )
            memmove_s(v37, 4 * v38, v36, 4 * v38);
          *(_DWORD *)(this + 92) = v39;
        }
      }
    }
  }
  else
  {
    for ( j = 0; ; ++j )
    {
      v8 = *(_DWORD *)(this + 88);
      if ( !v8 || j >= (*(_DWORD *)(this + 92) - v8) >> 2 )
        break;
      a2 = this;
      if ( j >= (*(_DWORD *)(this + 92) - v8) >> 2 )
        invalid_parameter_noinfo();
      sub_101050C0(*(_DWORD *)(*(_DWORD *)(this + 88) + 4 * j) + 1152, (int)&a2);
    }
  }
}
