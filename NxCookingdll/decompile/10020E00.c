/*
 * func-name: sub_10020E00
 * func-address: 0x10020e00
 * callers: 0x10021280, 0x10021fa0, 0x10022410, 0x10022c20
 * callees: 0x1000c970, 0x10014910, 0x10014950, 0x10014b50, 0x10015590, 0x10015660, 0x100201a0, 0x10020740, 0x10025ac0, 0x10034f10
 */

char __thiscall sub_10020E00(_DWORD *this)
{
  int (__stdcall ***v2)(size_t, int); // eax
  int (__stdcall ***v3)(size_t, int); // eax
  int v4; // ebx
  int (__stdcall ***v5)(size_t, int); // eax
  int v6; // edx
  float v7; // edi
  int (__stdcall ***v8)(size_t, int); // eax
  int v9; // edx
  unsigned int *v11; // ecx
  unsigned __int8 *v12; // ebp
  int v13; // edi
  unsigned int v14; // ebx
  unsigned int *v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // ebp
  bool v18; // zf
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // edx
  float *v23; // eax
  _DWORD *v24; // ebp
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  double v28; // st7
  float *v29; // ecx
  double v30; // st7
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  double v34; // st7
  float *v35; // eax
  int v36; // ebx
  int v37; // edx
  _DWORD *v38; // eax
  int v39; // ebp
  float *v40; // edi
  int v41; // eax
  double v42; // st5
  float *v43; // eax
  float *v44; // ecx
  double v45; // st5
  double v46; // st5
  float *v47; // ecx
  char v48; // bl
  char v49; // [esp+19h] [ebp-55h]
  unsigned __int8 *v50; // [esp+1Ah] [ebp-54h]
  float v51; // [esp+1Eh] [ebp-50h]
  unsigned int *i; // [esp+22h] [ebp-4Ch]
  unsigned int *v53; // [esp+22h] [ebp-4Ch]
  unsigned int v54; // [esp+26h] [ebp-48h]
  unsigned int j; // [esp+26h] [ebp-48h]
  int v56; // [esp+2Ah] [ebp-44h]
  int v57; // [esp+2Eh] [ebp-40h] BYREF
  float v58[3]; // [esp+32h] [ebp-3Ch] BYREF
  float v59[4]; // [esp+3Eh] [ebp-30h] BYREF
  float v60[4]; // [esp+4Eh] [ebp-20h] BYREF
  float v61[4]; // [esp+5Eh] [ebp-10h] BYREF

  *(_DWORD *)(this[1] + 36) = 0;
  if ( *(_DWORD *)(this[1] + 44) )
  {
    v2 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v2)[3])(v2, *(_DWORD *)(this[1] + 44));
    *(_DWORD *)(this[1] + 44) = 0;
  }
  if ( *(_DWORD *)(this[1] + 40) )
  {
    v3 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v3)[3])(v3, *(_DWORD *)(this[1] + 40));
    *(_DWORD *)(this[1] + 40) = 0;
  }
  sub_10014950(v59);
  sub_10014950(v60);
  if ( !sub_10020740(&v57, v59, (int)this, v60) )
    goto LABEL_9;
  v4 = v57;
  *(_DWORD *)(this[1] + 36) = v57;
  v5 = sub_10014910();
  *(_DWORD *)(this[1] + 40) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v5)(
                                v5,
                                36 * *(_DWORD *)(this[1] + 36),
                                6);
  v6 = this[1];
  if ( !*(_DWORD *)(v6 + 40) )
    goto LABEL_9;
  memset(*(void **)(v6 + 40), 0, 36 * *(_DWORD *)(v6 + 36));
  sub_1000C970((_DWORD *)this[1], v58);
  v7 = v59[1];
  v8 = sub_10014910();
  *(_DWORD *)(this[1] + 44) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v8)(
                                v8,
                                LODWORD(v7) - v4,
                                49);
  v9 = this[1];
  if ( *(_DWORD *)(v9 + 44) )
  {
    v11 = (unsigned int *)LODWORD(v59[2]);
    v12 = *(unsigned __int8 **)(v9 + 44);
    v50 = v12;
    v51 = v60[2];
    if ( v4 )
    {
      v13 = 0;
      v56 = v4;
      while ( 1 )
      {
        *(_DWORD *)(*(_DWORD *)(this[1] + 40) + v13 + 4) = v12;
        v14 = *v11;
        v15 = v11 + 1;
        *(_WORD *)(v13 + *(_DWORD *)(this[1] + 40)) = v14;
        v16 = 0;
        for ( i = v15; v16 < v14; ++v16 )
          v12[v16] = v15[v16];
        sub_10015660((float *)(*(_DWORD *)(this[1] + 40) + v13 + 12), v14, v12, *(_DWORD *)(this[1] + 16));
        v17 = 0;
        v18 = *(_DWORD *)LODWORD(v51) == 0;
        v54 = *(_DWORD *)LODWORD(v51);
        LODWORD(v51) += 4;
        v49 = 0;
        if ( !v18 )
        {
          do
          {
            v19 = *(_DWORD *)LODWORD(v51);
            LODWORD(v51) += 4;
            v20 = this[1];
            sub_10015590(
              v61,
              (float *)(*(_DWORD *)(v20 + 16) + 12 * *(_DWORD *)(*(_DWORD *)(v20 + 8) + 12 * v19)),
              (float *)(*(_DWORD *)(v20 + 16) + 12 * *(_DWORD *)(*(_DWORD *)(v20 + 8) + 12 * v19 + 4)),
              (float *)(*(_DWORD *)(v20 + 16) + 12 * *(_DWORD *)(*(_DWORD *)(v20 + 8) + 12 * v19 + 8)));
            if ( !v17
              && *(float *)(*(_DWORD *)(this[1] + 40) + v13 + 16) * v61[1]
               + *(float *)(*(_DWORD *)(this[1] + 40) + v13 + 20) * v61[2]
               + *(float *)(*(_DWORD *)(this[1] + 40) + v13 + 12) * v61[0] < 0.0 )
            {
              v49 = 1;
            }
            ++v17;
          }
          while ( v17 < v54 );
          if ( v49 )
          {
            v21 = this[1];
            v22 = *(_DWORD *)(v21 + 40);
            v23 = (float *)(v13 + v22 + 12);
            *v23 = -*v23;
            v23[1] = -*(float *)(v13 + v22 + 16);
            v23[2] = -*(float *)(v13 + v22 + 20);
            *(float *)(v13 + *(_DWORD *)(v21 + 40) + 24) = -*(float *)(v13 + *(_DWORD *)(v21 + 40) + 24);
            sub_10025AC0(v14, v50);
          }
        }
        v24 = (_DWORD *)this[1];
        v25 = 0;
        for ( j = 0; j < v24[3]; ++j )
        {
          v26 = v24[4];
          v27 = v24[10];
          v28 = *(float *)(v26 + v25 + 8) * *(float *)(v27 + v13 + 20);
          v29 = (float *)(v13 + v27);
          v30 = -(v28 + *(float *)(v25 + v26 + 4) * v29[4] + *(float *)(v25 + v26) * v29[3]);
          if ( v30 < v29[6] )
            *(float *)(v24[10] + v13 + 24) = v30;
          v25 += 12;
        }
        v31 = v24[10];
        if ( *(float *)(v31 + v13 + 16) * v58[1]
           + *(float *)(v31 + v13 + 20) * v58[2]
           + *(float *)(v31 + v13 + 12) * v58[0]
           + *(float *)(v31 + v13 + 24) > 0.0 )
        {
          sub_10025AC0(v14, v50);
          v32 = this[1];
          v33 = *(_DWORD *)(v32 + 40);
          v34 = *(float *)(v13 + v33 + 12);
          v35 = (float *)(v13 + v33 + 12);
          *v35 = -v34;
          v35[1] = -v35[1];
          v35[2] = -v35[2];
          *(float *)(v13 + *(_DWORD *)(v32 + 40) + 24) = -*(float *)(v13 + *(_DWORD *)(v32 + 40) + 24);
        }
        v50 += v14;
        v13 += 36;
        v18 = v56-- == 1;
        v53 = &i[v14];
        if ( v18 )
          break;
        v11 = v53;
        v12 = v50;
      }
      v36 = v57;
      if ( v57 )
      {
        v37 = 0;
        do
        {
          v38 = (_DWORD *)this[1];
          v39 = v38[3];
          v40 = (float *)v38[4];
          *(float *)(v38[10] + v37 + 28) = 3.4028235e38;
          *(float *)(*(_DWORD *)(this[1] + 40) + v37 + 32) = -3.4028235e38;
          while ( v39 )
          {
            v41 = *(_DWORD *)(this[1] + 40);
            v42 = *(float *)(v41 + v37 + 20);
            v43 = (float *)(v37 + v41);
            v44 = v40;
            v45 = v42 * v40[2];
            --v39;
            v40 += 3;
            v46 = v45 + v43[4] * v44[1] + v43[3] * *v44;
            if ( v46 < v43[7] )
              *(float *)(*(_DWORD *)(this[1] + 40) + v37 + 28) = v46;
            v47 = (float *)(*(_DWORD *)(this[1] + 40) + v37 + 32);
            if ( v46 > *v47 )
              *v47 = v46;
          }
          v37 += 36;
          --v36;
        }
        while ( v36 );
      }
    }
    v48 = sub_100201A0(this);
    sub_10014B50(v60);
    sub_10014B50(v59);
    return v48;
  }
  else
  {
LABEL_9:
    sub_10014B50(v60);
    sub_10014B50(v59);
    return 0;
  }
}
