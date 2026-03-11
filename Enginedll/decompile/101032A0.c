/*
 * func-name: sub_101032A0
 * func-address: 0x101032a0
 * callers: 0x101032a0, 0x10103770, 0x10103ef0
 * callees: 0x1004c2c0, 0x10102270, 0x10102bb0, 0x101032a0, 0x10104f10, 0x101050c0, 0x1017a0b0, 0x101a2500
 */

void __thiscall sub_101032A0(int this, int a2)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ebp
  unsigned int j; // edi
  int v8; // ecx
  unsigned int i; // edi
  int v10; // ecx
  float *v11; // eax
  bool v12; // cc
  _DWORD *v13; // ebx
  int v14; // edi
  unsigned int v15; // ebp
  float *v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  unsigned int v22; // ebp
  int v23; // ecx
  int v24; // edi
  unsigned int v25; // eax
  int v26; // edi
  unsigned int v27; // edx
  int *v28; // eax
  void *v29; // ebx
  int v30; // ebx
  int *v31; // edi
  void *v32; // ebp
  int v33; // ebx
  int *v34; // ebp
  _DWORD *v35; // edi
  int v36; // eax
  char *v37; // ebx
  char *v38; // edi
  int v39; // eax
  char *v40; // ebp
  char v41; // [esp+1h] [ebp-6Dh]
  float v42; // [esp+2h] [ebp-6Ch]
  float v43; // [esp+2h] [ebp-6Ch]
  unsigned int v44; // [esp+2h] [ebp-6Ch]
  float v45; // [esp+6h] [ebp-68h]
  float v46; // [esp+6h] [ebp-68h]
  int v47; // [esp+6h] [ebp-68h]
  float v48; // [esp+Ah] [ebp-64h]
  float v49; // [esp+Ah] [ebp-64h]
  float **v50; // [esp+Ah] [ebp-64h]
  int v51; // [esp+Eh] [ebp-60h]
  int v52[3]; // [esp+12h] [ebp-5Ch] BYREF
  int v53[2]; // [esp+1Eh] [ebp-50h] BYREF
  float v54; // [esp+26h] [ebp-48h]
  float v55; // [esp+2Ah] [ebp-44h]
  float v56[3]; // [esp+2Eh] [ebp-40h] BYREF
  float v57[12]; // [esp+3Ah] [ebp-34h] BYREF
  int v58; // [esp+6Ah] [ebp-4h]

  v58 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  LODWORD(v57[11]) = &loc_101B042C;
  LODWORD(v57[10]) = ExceptionList;
  v4 = *(_DWORD *)(this + 104);
  if ( v4 )
    v5 = (*(_DWORD *)(this + 108) - v4) >> 2;
  else
    v5 = 0;
  v6 = a2;
  if ( v5 >= *(_DWORD *)(a2 + 12) )
  {
    v48 = *(float *)(this + 28) + *(float *)(this + 16);
    v45 = *(float *)(this + 32) + *(float *)(this + 20);
    v42 = *(float *)(this + 36) + *(float *)(this + 24);
    v49 = v48 * 0.5;
    v46 = v45 * 0.5;
    v43 = 0.5 * v42;
    *(float *)v52 = v49;
    *(float *)(this + 40) = v49;
    *(float *)&v52[1] = v46;
    *(float *)(this + 44) = v46;
    *(float *)&v52[2] = v43;
    *(float *)(this + 48) = v43;
    if ( *(int *)(v6 + 8) < 8 )
      *(float *)(this + 44) = *(float *)(this + 20);
    for ( i = 0; ; ++i )
    {
      v10 = *(_DWORD *)(this + 104);
      v44 = i;
      if ( !v10 || i >= (*(_DWORD *)(this + 108) - v10) >> 2 )
        break;
      v11 = (float *)(*(_DWORD *)(4 * i + *(_DWORD *)(this + 104)) + 4);
      LODWORD(v57[0]) = &Volume::`vftable';
      v57[1] = v11[1];
      v57[2] = v11[2];
      v57[3] = v11[3];
      LODWORD(v57[0]) = &BBox::`vftable';
      v57[4] = v11[4];
      v57[5] = v11[5];
      v57[6] = v11[6];
      v57[7] = v11[7];
      v57[8] = v11[8];
      v57[9] = v11[9];
      v12 = *(_DWORD *)(v6 + 8) <= 0;
      v58 = 0;
      v47 = 0;
      if ( !v12 )
      {
        v13 = &unk_102829F0;
        v50 = (float **)(this + 52);
LABEL_18:
        v14 = 0;
        v15 = *v13 & 0x80000000;
        while ( 1 )
        {
          v16 = sub_1004C2C0(v57, v56, v14);
          *(float *)&v51 = *v16 - *(float *)(this + 40);
          *(float *)v52 = v16[1] - *(float *)(this + 44);
          *(float *)v53 = v16[2] - *(float *)(this + 48);
          v53[1] = v51;
          v54 = *(float *)v52;
          v55 = *(float *)v53;
          if ( (v51 & 0x80000000) == v15 && (v13[1] ^ LODWORD(v54)) >= 0 && (v13[2] ^ LODWORD(v55)) >= 0 )
            break;
          if ( ++v14 >= 8 )
            goto LABEL_34;
        }
        v17 = *(_DWORD *)(this + 104);
        if ( !v17 || v44 >= (*(_DWORD *)(this + 108) - v17) >> 2 )
          invalid_parameter_noinfo();
        sub_10102BB0((float *)this, v50, v47, *(_DWORD *)(4 * v44 + *(_DWORD *)(this + 104)));
        v18 = *((_DWORD *)*v50 + 26);
        if ( v18 )
          v19 = (*((_DWORD *)*v50 + 27) - v18) >> 2;
        else
          v19 = 0;
        v20 = *(_DWORD *)(this + 104);
        if ( v20 )
          v21 = (*(_DWORD *)(this + 108) - v20) >> 2;
        else
          v21 = 0;
        if ( v19 == v21 )
        {
          v22 = 0;
          while ( 1 )
          {
            v23 = *(_DWORD *)(this + 104);
            if ( !v23 || v22 >= (*(_DWORD *)(this + 108) - v23) >> 2 )
              break;
            v53[0] = this;
            if ( v22 >= (*(_DWORD *)(this + 108) - v23) >> 2 )
              invalid_parameter_noinfo();
            v24 = *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * v22);
            v25 = *(_DWORD *)(v24 + 52);
            v26 = v24 + 48;
            if ( v25 )
              v27 = (int)(*(_DWORD *)(v26 + 8) - v25) >> 2;
            else
              v27 = 0;
            if ( v25 && v27 < (int)(*(_DWORD *)(v26 + 12) - v25) >> 2 )
            {
              v28 = *(int **)(v26 + 8);
              *v28 = this;
              *(_DWORD *)(v26 + 8) = v28 + 1;
              ++v22;
            }
            else
            {
              v29 = *(void **)(v26 + 8);
              if ( v25 > (unsigned int)v29 )
                invalid_parameter_noinfo();
              sub_10104F10((int)v52, v26, v29, (int)v53);
              ++v22;
            }
          }
          v30 = 0;
          if ( *(int *)(a2 + 8) > 0 )
          {
            v31 = (int *)(this + 52);
            do
            {
              v32 = (void *)*v31;
              if ( *v31 )
              {
                sub_10102270(*v31);
                operator delete(v32);
                *v31 = 0;
              }
              ++v30;
              ++v31;
            }
            while ( v30 < *(_DWORD *)(a2 + 8) );
          }
          v58 = -1;
          sub_1017A0B0(v57);
          v6 = a2;
          break;
        }
LABEL_34:
        ++v50;
        v13 += 3;
        if ( ++v47 < *(_DWORD *)(a2 + 8) )
          goto LABEL_18;
        i = v44;
        v6 = a2;
      }
      v58 = -1;
      sub_1017A0B0(v57);
    }
    v33 = 0;
    v41 = 0;
    if ( *(int *)(v6 + 8) > 0 )
    {
      v34 = (int *)(this + 52);
      do
      {
        v35 = (_DWORD *)*v34;
        if ( *v34 )
        {
          v36 = v35[26];
          if ( v36 && (v35[27] - v36) >> 2 )
          {
            sub_101032A0(a2);
            v41 = 1;
          }
          else
          {
            sub_10102270(*v34);
            operator delete(v35);
            *v34 = 0;
          }
        }
        ++v33;
        ++v34;
      }
      while ( v33 < *(_DWORD *)(a2 + 8) );
      if ( v41 )
      {
        v37 = *(char **)(this + 108);
        if ( *(_DWORD *)(this + 104) > (unsigned int)v37 )
          invalid_parameter_noinfo();
        v38 = *(char **)(this + 104);
        if ( (unsigned int)v38 > *(_DWORD *)(this + 108) )
          invalid_parameter_noinfo();
        if ( v38 != v37 )
        {
          v39 = (*(_DWORD *)(this + 108) - (int)v37) >> 2;
          v40 = &v38[4 * v39];
          if ( v39 > 0 )
            memmove_s(v38, 4 * v39, v37, 4 * v39);
          *(_DWORD *)(this + 108) = v40;
        }
      }
    }
  }
  else
  {
    for ( j = 0; ; ++j )
    {
      v8 = *(_DWORD *)(this + 104);
      if ( !v8 || j >= (*(_DWORD *)(this + 108) - v8) >> 2 )
        break;
      a2 = this;
      if ( j >= (*(_DWORD *)(this + 108) - v8) >> 2 )
        invalid_parameter_noinfo();
      sub_101050C0(*(_DWORD *)(*(_DWORD *)(this + 104) + 4 * j) + 48, (int)&a2);
    }
  }
}
