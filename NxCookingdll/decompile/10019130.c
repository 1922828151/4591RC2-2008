/*
 * func-name: sub_10019130
 * func-address: 0x10019130
 * callers: none
 * callees: 0x10014910
 */

char __thiscall sub_10019130(_DWORD *this, char a2, int a3)
{
  int v4; // eax
  int v5; // edi
  int (__stdcall ***v6)(size_t, int); // eax
  unsigned int v7; // ebp
  int (__stdcall ***v8)(size_t, int); // eax
  int v9; // ecx
  unsigned int *v10; // eax
  _DWORD *v11; // eax
  unsigned int v13; // edi
  int v14; // ecx
  int v15; // eax
  char v16; // dl
  char v17; // bl
  char v18; // dl
  int v19; // edx
  char v20; // bl
  _BYTE *v21; // eax
  char v22; // bl
  int v23; // eax
  char v24; // bl
  int v25; // edx
  char v26; // bl
  _BYTE *v27; // eax
  char v28; // bl
  int v29; // eax
  char v30; // bl
  int v31; // edx
  char v32; // bl
  _BYTE *v33; // eax
  char v34; // bl
  int v35; // eax
  char v36; // bl
  _BYTE *v37; // eax
  char v38; // bl
  int v39; // edx
  char v40; // bl
  _BYTE *v41; // eax
  char v42; // bl
  int v43; // eax
  char v44; // bl
  _BYTE *v45; // eax
  char v46; // bl
  int v47; // [esp+10h] [ebp-4h]
  int v48; // [esp+10h] [ebp-4h]

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  if ( a2 )
  {
    HIBYTE(v47) = v4;
    LOBYTE(v47) = HIBYTE(v4);
    BYTE1(v47) = BYTE2(v4);
    BYTE2(v47) = BYTE1(v4);
    v4 = v47;
  }
  v5 = this[2];
  this[1] = v4;
  v48 = 36 * v4;
  if ( v5 )
  {
    v6 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v6)[3])(v6, v5 - 4);
    this[2] = 0;
  }
  v7 = this[1];
  v8 = sub_10014910();
  v9 = (36 * (unsigned __int64)v7) >> 32 != 0 ? -1 : 36 * v7;
  v10 = (unsigned int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v8)(
                          v8,
                          __CFADD__(v9, 4) ? -1 : v9 + 4,
                          30);
  if ( v10 )
  {
    *v10 = v7;
    v11 = v10 + 1;
  }
  else
  {
    v11 = 0;
  }
  this[2] = v11;
  if ( !v11 )
    return 0;
  (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a3 + 24))(a3, v11, v48);
  if ( a2 )
  {
    v13 = 0;
    if ( this[1] )
    {
      v14 = 0;
      do
      {
        v15 = this[2];
        v16 = *(_BYTE *)(v15 + v14);
        *(_BYTE *)(v15 + v14) = *(_BYTE *)(v15 + v14 + 3);
        v17 = *(_BYTE *)(v15 + v14 + 2);
        *(_BYTE *)(v15 + v14 + 3) = v16;
        v18 = *(_BYTE *)(v15 + v14 + 1);
        *(_BYTE *)(v15 + v14 + 1) = v17;
        *(_BYTE *)(v15 + v14 + 2) = v18;
        v19 = this[2];
        v20 = *(_BYTE *)(v14 + v19 + 7);
        v21 = (_BYTE *)(v14 + v19 + 4);
        LOBYTE(v19) = *v21;
        *v21 = v20;
        v22 = v21[2];
        v21[3] = v19;
        LOBYTE(v19) = v21[1];
        v21[1] = v22;
        v21[2] = v19;
        v23 = this[2];
        LOBYTE(v19) = *(_BYTE *)(v14 + v23 + 8);
        *(_BYTE *)(v14 + v23 + 8) = *(_BYTE *)(v14 + v23 + 11);
        v24 = *(_BYTE *)(v14 + v23 + 10);
        *(_BYTE *)(v14 + v23 + 11) = v19;
        LOBYTE(v19) = *(_BYTE *)(v14 + v23 + 9);
        *(_BYTE *)(v14 + v23 + 9) = v24;
        *(_BYTE *)(v14 + v23 + 10) = v19;
        v25 = this[2];
        v26 = *(_BYTE *)(v14 + v25 + 15);
        v27 = (_BYTE *)(v14 + v25 + 12);
        LOBYTE(v25) = *v27;
        *v27 = v26;
        v28 = v27[2];
        v27[3] = v25;
        LOBYTE(v25) = v27[1];
        v27[1] = v28;
        v27[2] = v25;
        v29 = this[2];
        LOBYTE(v25) = *(_BYTE *)(v14 + v29 + 16);
        *(_BYTE *)(v14 + v29 + 16) = *(_BYTE *)(v14 + v29 + 19);
        v30 = *(_BYTE *)(v14 + v29 + 18);
        *(_BYTE *)(v14 + v29 + 19) = v25;
        LOBYTE(v25) = *(_BYTE *)(v14 + v29 + 17);
        *(_BYTE *)(v14 + v29 + 17) = v30;
        *(_BYTE *)(v14 + v29 + 18) = v25;
        v31 = this[2];
        v32 = *(_BYTE *)(v14 + v31 + 23);
        v33 = (_BYTE *)(v14 + v31 + 20);
        LOBYTE(v31) = *v33;
        *v33 = v32;
        v34 = v33[2];
        v33[3] = v31;
        LOBYTE(v31) = v33[1];
        v33[1] = v34;
        v33[2] = v31;
        v35 = this[2];
        v36 = *(_BYTE *)(v14 + v35 + 27);
        LOBYTE(v31) = *(_BYTE *)(v14 + v35 + 24);
        v37 = (_BYTE *)(v14 + v35 + 24);
        *v37 = v36;
        v38 = v37[2];
        v37[3] = v31;
        LOBYTE(v31) = v37[1];
        v37[1] = v38;
        v37[2] = v31;
        v39 = this[2];
        v40 = *(_BYTE *)(v14 + v39 + 31);
        v41 = (_BYTE *)(v14 + v39 + 28);
        LOBYTE(v39) = *v41;
        *v41 = v40;
        v42 = v41[2];
        v41[3] = v39;
        LOBYTE(v39) = v41[1];
        v41[1] = v42;
        v41[2] = v39;
        v43 = this[2];
        v44 = *(_BYTE *)(v14 + v43 + 35);
        LOBYTE(v39) = *(_BYTE *)(v14 + v43 + 32);
        v45 = (_BYTE *)(v14 + v43 + 32);
        *v45 = v44;
        v46 = v45[2];
        v45[3] = v39;
        LOBYTE(v39) = v45[1];
        ++v13;
        v45[1] = v46;
        v45[2] = v39;
        v14 += 36;
      }
      while ( v13 < this[1] );
    }
  }
  return 1;
}
