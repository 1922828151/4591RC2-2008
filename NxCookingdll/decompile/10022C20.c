/*
 * func-name: sub_10022C20
 * func-address: 0x10022c20
 * callers: 0x1001e350
 * callees: 0x10013570, 0x10014910, 0x10016070, 0x100160e0, 0x10016160, 0x10016250, 0x100162c0, 0x10016480, 0x100164b0, 0x100166e0, 0x10020460, 0x100205f0, 0x10020e00, 0x10022410, 0x10024570
 */

char __userpurge sub_10022C20@<al>(int a1@<ecx>, int a2@<edi>, int a3)
{
  char v5; // si
  char result; // al
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  unsigned __int16 *v10; // ecx
  unsigned int v11; // edi
  int v12; // eax
  float *v13; // ecx
  float *v14; // edi
  int v15; // eax
  bool v16; // zf
  const void *v17; // esi
  int v18; // eax
  char v19; // cl
  char v20; // dl
  char v21; // cl
  char v22; // dl
  char v23; // cl
  char v24; // dl
  char v25; // cl
  char v26; // dl
  char v27; // cl
  char v28; // dl
  char v29; // cl
  char v30; // dl
  char v31; // cl
  char v32; // dl
  char v33; // cl
  char v34; // dl
  char v35; // cl
  char v36; // al
  unsigned int i; // edi
  unsigned __int16 v39; // di
  int v40; // eax
  unsigned int j; // edi
  int v42; // eax
  unsigned int v43; // edi
  int (__stdcall ***v44)(size_t, int); // eax
  int v45; // eax
  int v46; // ecx
  unsigned __int16 *v47; // edi
  unsigned int k; // eax
  int v49; // ecx
  unsigned int m; // eax
  int (__stdcall ***v51)(size_t, int); // eax
  int (__stdcall ***v52)(size_t, int); // eax
  int v53; // eax
  int v54; // ecx
  unsigned int *v55; // edi
  unsigned int n; // eax
  int (__stdcall ***v57)(size_t, int); // eax
  unsigned int v59; // [esp+3Ch] [ebp-40h]
  int v60; // [esp+3Ch] [ebp-40h]
  char v61; // [esp+40h] [ebp-3Ch]
  int v62; // [esp+44h] [ebp-38h] BYREF
  int v63; // [esp+48h] [ebp-34h] BYREF
  int v64; // [esp+4Ch] [ebp-30h] BYREF
  int v65; // [esp+50h] [ebp-2Ch] BYREF
  int v66; // [esp+54h] [ebp-28h]
  _DWORD v67[9]; // [esp+58h] [ebp-24h] BYREF
  unsigned int v68; // [esp+80h] [ebp+4h]
  int v69; // [esp+80h] [ebp+4h]
  int v70; // [esp+84h] [ebp+8h]
  int v71; // [esp+84h] [ebp+8h]
  unsigned int v72; // [esp+84h] [ebp+8h]

  v61 = NxPlatformMismatch();
  v5 = v61;
  result = sub_100162C0(67, 86, 72, 76, 5, v61, a3);
  if ( result )
  {
    if ( !*(_DWORD *)(*(_DWORD *)(a1 + 4) + 52) )
      sub_10022410((_DWORD *)a1);
    sub_100160E0(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 12), v61, a3);
    sub_100160E0(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4), v61, a3);
    sub_100160E0(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 52), v61, a3);
    if ( !*(_DWORD *)(*(_DWORD *)(a1 + 4) + 36) )
      sub_10020E00((_DWORD *)a1);
    sub_100160E0(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 36), v61, a3);
    v7 = *(_DWORD *)(a1 + 4);
    v8 = *(_DWORD *)(v7 + 36);
    v9 = 0;
    v68 = 0;
    if ( v8 )
    {
      v10 = *(unsigned __int16 **)(v7 + 40);
      do
      {
        v9 += *v10;
        v10 += 18;
        --v8;
      }
      while ( v8 );
      v68 = v9;
    }
    sub_100160E0(v9, v61, a3);
    v66 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 64) + 8 * *(_DWORD *)(*(_DWORD *)(a1 + 4) + 52) - 4)
        + *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 64) + 8 * *(_DWORD *)(*(_DWORD *)(a1 + 4) + 52) - 6);
    sub_100160E0(v66, v61, a3);
    sub_10016250(*(float **)(*(_DWORD *)(a1 + 4) + 16), 3 * *(_DWORD *)(*(_DWORD *)(a1 + 4) + 12), v61, a3);
    v11 = sub_10013570(*(unsigned int **)(*(_DWORD *)(a1 + 4) + 8), 3 * *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4));
    sub_100160E0(v11, v61, a3);
    sub_100166E0(v11, 3 * *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4), *(float **)(*(_DWORD *)(a1 + 4) + 8), a3, v61);
    sub_10016070(*(unsigned __int16 *)(a1 + 8), v61, a3);
    if ( !*(_DWORD *)(*(_DWORD *)(a1 + 4) + 20) )
      sub_100205F0((_DWORD *)a1);
    v12 = *(_DWORD *)(a1 + 4);
    v13 = *(float **)(v12 + 20);
    if ( v13 )
    {
      if ( *(_WORD *)(a1 + 8) )
      {
        sub_10016250(v13, 3 * *(_DWORD *)(v12 + 12), v61, a3);
      }
      else
      {
        v59 = 0;
        if ( *(_DWORD *)(v12 + 12) )
        {
          v14 = v13 + 1;
          do
          {
            sub_10020460(&v64, &v65, *(v14 - 1), *v14, v14[1], &v63, &v62, 5);
            sub_10016070(v65 | (8 * (v64 | (8 * (v63 | (32 * v62))))), v61, a3);
            v14 += 3;
            ++v59;
          }
          while ( v59 < *(_DWORD *)(*(_DWORD *)(a1 + 4) + 12) );
        }
      }
    }
    sub_10016160(*(float *)(*(_DWORD *)(a1 + 4) + 24), v61, a3);
    sub_10016160(*(float *)(*(_DWORD *)(a1 + 4) + 28), v61, a3);
    sub_10016160(*(float *)(*(_DWORD *)(a1 + 4) + 32), v61, a3);
    v15 = *(_DWORD *)(a1 + 4);
    v16 = *(_DWORD *)(v15 + 36) == 0;
    v62 = 0;
    if ( !v16 )
    {
      v60 = 0;
      do
      {
        v17 = (const void *)(v60 + *(_DWORD *)(v15 + 40));
        v18 = *(_DWORD *)(a1 + 4);
        qmemcpy(v67, v17, sizeof(v67));
        v67[2] -= *(_DWORD *)(v18 + 48);
        v67[1] -= *(_DWORD *)(v18 + 44);
        if ( v61 )
        {
          v19 = BYTE1(v67[0]);
          v20 = HIBYTE(v67[0]);
          BYTE1(v67[0]) = v67[0];
          HIBYTE(v67[0]) = BYTE2(v67[0]);
          LOBYTE(v67[0]) = v19;
          v21 = HIBYTE(v67[2]);
          HIBYTE(v67[2]) = v67[2];
          BYTE2(v67[0]) = v20;
          v22 = BYTE2(v67[2]);
          BYTE2(v67[2]) = BYTE1(v67[2]);
          LOBYTE(v67[2]) = v21;
          v23 = HIBYTE(v67[1]);
          HIBYTE(v67[1]) = v67[1];
          BYTE1(v67[2]) = v22;
          v24 = BYTE2(v67[1]);
          BYTE2(v67[1]) = BYTE1(v67[1]);
          LOBYTE(v67[1]) = v23;
          v25 = HIBYTE(v67[3]);
          HIBYTE(v67[3]) = v67[3];
          BYTE1(v67[1]) = v24;
          v26 = BYTE2(v67[3]);
          BYTE2(v67[3]) = BYTE1(v67[3]);
          LOBYTE(v67[3]) = v25;
          v27 = HIBYTE(v67[4]);
          HIBYTE(v67[4]) = v67[4];
          BYTE1(v67[3]) = v26;
          v28 = BYTE2(v67[4]);
          BYTE2(v67[4]) = BYTE1(v67[4]);
          LOBYTE(v67[4]) = v27;
          v29 = HIBYTE(v67[5]);
          HIBYTE(v67[5]) = v67[5];
          BYTE1(v67[4]) = v28;
          v30 = BYTE2(v67[5]);
          BYTE2(v67[5]) = BYTE1(v67[5]);
          LOBYTE(v67[5]) = v29;
          v31 = HIBYTE(v67[6]);
          HIBYTE(v67[6]) = v67[6];
          BYTE1(v67[5]) = v30;
          v32 = BYTE2(v67[6]);
          BYTE2(v67[6]) = BYTE1(v67[6]);
          LOBYTE(v67[6]) = v31;
          v33 = HIBYTE(v67[7]);
          BYTE1(v67[6]) = v32;
          v34 = BYTE2(v67[7]);
          BYTE2(v67[7]) = BYTE1(v67[7]);
          HIBYTE(v67[7]) = v67[7];
          LOBYTE(v67[7]) = v33;
          v35 = HIBYTE(v67[8]);
          BYTE1(v67[7]) = v34;
          v36 = BYTE1(v67[8]);
          HIBYTE(v67[8]) = v67[8];
          LOBYTE(v67[8]) = v35;
          BYTE1(v67[8]) = BYTE2(v67[8]);
          BYTE2(v67[8]) = v36;
        }
        (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a3 + 48))(a3, v67, 36);
        v15 = *(_DWORD *)(a1 + 4);
        v60 += 36;
      }
      while ( (unsigned int)++v62 < *(_DWORD *)(v15 + 36) );
      v5 = v61;
    }
    for ( i = 0; i < v68; ++i )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 28))(
        a3,
        *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 44) + i));
    v39 = sub_10016480(*(unsigned __int16 **)(*(_DWORD *)(a1 + 4) + 48), v68);
    sub_100160E0(v39, v5, a3);
    sub_100164B0(v39, v68, *(_DWORD *)(*(_DWORD *)(a1 + 4) + 48), a3, v5);
    sub_100160E0(0, v5, a3);
    sub_100160E0(0, v5, a3);
    v40 = *(_DWORD *)(a1 + 4);
    for ( j = 0; j < *(_DWORD *)(v40 + 52); ++j )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 28))(
        a3,
        *(unsigned __int8 *)(*(_DWORD *)(v40 + 56) + 2 * j));
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 28))(
        a3,
        *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 56) + 2 * j + 1));
      v40 = *(_DWORD *)(a1 + 4);
    }
    v42 = *(_DWORD *)(a1 + 4);
    v43 = 0;
    if ( *(_WORD *)(a1 + 8) )
    {
      sub_10016250(*(float **)(v42 + 60), 3 * *(_DWORD *)(v42 + 52), v5, a3);
    }
    else if ( *(_DWORD *)(v42 + 52) )
    {
      v69 = 0;
      do
      {
        sub_10020460(
          &v63,
          &v62,
          *(float *)(v69 + *(_DWORD *)(v42 + 60)),
          *(float *)(v69 + *(_DWORD *)(v42 + 60) + 4),
          *(float *)(v69 + *(_DWORD *)(v42 + 60) + 8),
          &v64,
          &v65,
          5);
        sub_10016070(v62 | (8 * (v63 | (8 * (v64 | (32 * v65))))), v5, a3);
        v42 = *(_DWORD *)(a1 + 4);
        v69 += 12;
        ++v43;
      }
      while ( v43 < *(_DWORD *)(v42 + 52) );
    }
    v44 = sub_10014910();
    v45 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int, int))**v44)(
            v44,
            2 * *(_DWORD *)(*(_DWORD *)(a1 + 4) + 52),
            1,
            a2);
    v46 = *(_DWORD *)(a1 + 4);
    v47 = (unsigned __int16 *)v45;
    for ( k = 0; k < *(_DWORD *)(v46 + 52); ++k )
    {
      v47[k] = *(_WORD *)(*(_DWORD *)(v46 + 64) + 8 * k);
      v46 = *(_DWORD *)(a1 + 4);
    }
    v70 = (unsigned __int16)sub_10016480(v47, *(_DWORD *)(*(_DWORD *)(a1 + 4) + 52));
    sub_100160E0(v70, v5, a3);
    sub_100164B0(v70, *(_DWORD *)(*(_DWORD *)(a1 + 4) + 52), (int)v47, a3, v5);
    v49 = *(_DWORD *)(a1 + 4);
    for ( m = 0; m < *(_DWORD *)(v49 + 52); ++m )
    {
      v47[m] = *(_WORD *)(*(_DWORD *)(v49 + 64) + 8 * m + 2);
      v49 = *(_DWORD *)(a1 + 4);
    }
    v71 = (unsigned __int16)sub_10016480(v47, *(_DWORD *)(*(_DWORD *)(a1 + 4) + 52));
    sub_100160E0(v71, v5, a3);
    sub_100164B0(v71, *(_DWORD *)(*(_DWORD *)(a1 + 4) + 52), (int)v47, a3, v5);
    if ( v47 )
    {
      v51 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned __int16 *))(*v51)[3])(v51, v47);
    }
    v52 = sub_10014910();
    v53 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v52)(
            v52,
            4 * *(_DWORD *)(*(_DWORD *)(a1 + 4) + 52),
            1);
    v54 = *(_DWORD *)(a1 + 4);
    v55 = (unsigned int *)v53;
    for ( n = 0; n < *(_DWORD *)(v54 + 52); ++n )
    {
      v55[n] = *(_DWORD *)(*(_DWORD *)(v54 + 64) + 8 * n + 4);
      v54 = *(_DWORD *)(a1 + 4);
    }
    v72 = sub_10013570(v55, *(_DWORD *)(*(_DWORD *)(a1 + 4) + 52));
    sub_100160E0(v72, v5, a3);
    sub_100166E0(v72, *(_DWORD *)(*(_DWORD *)(a1 + 4) + 52), (float *)v55, a3, v5);
    if ( v55 )
    {
      v57 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int *))(*v57)[3])(v57, v55);
    }
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 48))(a3, *(_DWORD *)(*(_DWORD *)(a1 + 4) + 68));
    return 1;
  }
  return result;
}
