/*
 * func-name: sub_10019B40
 * func-address: 0x10019b40
 * callers: none
 * callees: 0x10014910
 */

char __thiscall sub_10019B40(int this, char a2, int a3)
{
  int v5; // eax
  int v6; // edi
  int (__stdcall ***v7)(size_t, int); // eax
  unsigned int v8; // ebx
  int (__stdcall ***v9)(size_t, int); // eax
  int v10; // ecx
  unsigned int *v11; // eax
  _DWORD *v12; // eax
  char v14; // bl
  unsigned int v15; // edi
  int v16; // eax
  int v17; // ecx
  char v18; // dl
  int v19; // ecx
  char v20; // dl
  int v21; // edx
  char v22; // bl
  _BYTE *v23; // ecx
  int v24; // ecx
  int v25; // edx
  char v26; // bl
  _BYTE *v27; // ecx
  int v28; // ecx
  int v29; // edx
  char v30; // bl
  _BYTE *v31; // ecx
  char v32; // bl
  int v33; // ecx
  char v34; // bl
  _BYTE *v35; // ecx
  char v36; // bl
  int v37; // edx
  char v38; // bl
  _BYTE *v39; // ecx
  char v40; // bl
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // [esp+14h] [ebp-4h]
  float v48; // [esp+1Ch] [ebp+4h]
  float v49; // [esp+1Ch] [ebp+4h]
  float v50; // [esp+1Ch] [ebp+4h]
  float v51; // [esp+1Ch] [ebp+4h]
  float v52; // [esp+1Ch] [ebp+4h]
  float v53; // [esp+1Ch] [ebp+4h]
  int v54; // [esp+20h] [ebp+8h]

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  if ( a2 )
  {
    HIBYTE(v54) = v5;
    LOBYTE(v54) = HIBYTE(v5);
    BYTE1(v54) = BYTE2(v5);
    BYTE2(v54) = BYTE1(v5);
    v5 = v54;
  }
  v6 = *(_DWORD *)(this + 8);
  *(_DWORD *)(this + 4) = v5;
  v47 = 24 * v5;
  if ( v6 )
  {
    v7 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v7)[3])(v7, v6 - 4);
    *(_DWORD *)(this + 8) = 0;
  }
  v8 = *(_DWORD *)(this + 4);
  v9 = sub_10014910();
  v10 = (24 * (unsigned __int64)v8) >> 32 != 0 ? -1 : 24 * v8;
  v11 = (unsigned int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v9)(
                          v9,
                          __CFADD__(v10, 4) ? -1 : v10 + 4,
                          30);
  if ( v11 )
  {
    *v11 = v8;
    v12 = v11 + 1;
  }
  else
  {
    v12 = 0;
  }
  *(_DWORD *)(this + 8) = v12;
  if ( !v12 )
    return 0;
  (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a3 + 24))(a3, v12, v47);
  v14 = a2;
  if ( a2 )
  {
    v15 = 0;
    if ( *(_DWORD *)(this + 4) )
    {
      v16 = 0;
      do
      {
        v17 = *(_DWORD *)(this + 8);
        v18 = *(_BYTE *)(v17 + v16);
        *(_BYTE *)(v17 + v16) = *(_BYTE *)(v17 + v16 + 1);
        *(_BYTE *)(v17 + v16 + 1) = v18;
        v19 = *(_DWORD *)(this + 8);
        v20 = *(_BYTE *)(v16 + v19 + 2);
        *(_BYTE *)(v16 + v19 + 2) = *(_BYTE *)(v16 + v19 + 3);
        *(_BYTE *)(v16 + v19 + 3) = v20;
        v21 = *(_DWORD *)(this + 8);
        v22 = *(_BYTE *)(v16 + v21 + 5);
        v23 = (_BYTE *)(v16 + v21 + 4);
        LOBYTE(v21) = *v23;
        *v23 = v22;
        v23[1] = v21;
        v24 = *(_DWORD *)(this + 8);
        LOBYTE(v21) = *(_BYTE *)(v16 + v24 + 6);
        *(_BYTE *)(v16 + v24 + 6) = *(_BYTE *)(v16 + v24 + 7);
        *(_BYTE *)(v16 + v24 + 7) = v21;
        v25 = *(_DWORD *)(this + 8);
        v26 = *(_BYTE *)(v16 + v25 + 9);
        v27 = (_BYTE *)(v16 + v25 + 8);
        LOBYTE(v25) = *v27;
        *v27 = v26;
        v27[1] = v25;
        v28 = *(_DWORD *)(this + 8);
        LOBYTE(v25) = *(_BYTE *)(v16 + v28 + 10);
        *(_BYTE *)(v16 + v28 + 10) = *(_BYTE *)(v16 + v28 + 11);
        *(_BYTE *)(v16 + v28 + 11) = v25;
        v29 = *(_DWORD *)(this + 8);
        v30 = *(_BYTE *)(v16 + v29 + 15);
        v31 = (_BYTE *)(v16 + v29 + 12);
        LOBYTE(v29) = *v31;
        *v31 = v30;
        v32 = v31[2];
        v31[3] = v29;
        LOBYTE(v29) = v31[1];
        v31[1] = v32;
        v31[2] = v29;
        v33 = *(_DWORD *)(this + 8);
        v34 = *(_BYTE *)(v16 + v33 + 19);
        LOBYTE(v29) = *(_BYTE *)(v16 + v33 + 16);
        v35 = (_BYTE *)(v16 + v33 + 16);
        *v35 = v34;
        v36 = v35[2];
        v35[3] = v29;
        LOBYTE(v29) = v35[1];
        v35[1] = v36;
        v35[2] = v29;
        v37 = *(_DWORD *)(this + 8);
        v38 = *(_BYTE *)(v16 + v37 + 23);
        v39 = (_BYTE *)(v16 + v37 + 20);
        LOBYTE(v37) = *v39;
        *v39 = v38;
        v40 = v39[2];
        v39[3] = v37;
        LOBYTE(v37) = v39[1];
        ++v15;
        v39[1] = v40;
        v39[2] = v37;
        v16 += 24;
      }
      while ( v15 < *(_DWORD *)(this + 4) );
      v14 = a2;
    }
  }
  v41 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  v48 = *(float *)&v41;
  if ( v14 )
  {
    HIBYTE(v48) = v41;
    LOBYTE(v48) = HIBYTE(v41);
    BYTE1(v48) = BYTE2(v41);
    BYTE2(v48) = BYTE1(v41);
  }
  *(float *)(this + 12) = v48;
  v42 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  v49 = *(float *)&v42;
  if ( v14 )
  {
    HIBYTE(v49) = v42;
    LOBYTE(v49) = HIBYTE(v42);
    BYTE1(v49) = BYTE2(v42);
    BYTE2(v49) = BYTE1(v42);
  }
  *(float *)(this + 16) = v49;
  v43 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  v50 = *(float *)&v43;
  if ( v14 )
  {
    HIBYTE(v50) = v43;
    LOBYTE(v50) = HIBYTE(v43);
    BYTE1(v50) = BYTE2(v43);
    BYTE2(v50) = BYTE1(v43);
  }
  *(float *)(this + 20) = v50;
  v44 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  v51 = *(float *)&v44;
  if ( v14 )
  {
    HIBYTE(v51) = v44;
    LOBYTE(v51) = HIBYTE(v44);
    BYTE1(v51) = BYTE2(v44);
    BYTE2(v51) = BYTE1(v44);
  }
  *(float *)(this + 24) = v51;
  v45 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  v52 = *(float *)&v45;
  if ( v14 )
  {
    HIBYTE(v52) = v45;
    LOBYTE(v52) = HIBYTE(v45);
    BYTE1(v52) = BYTE2(v45);
    BYTE2(v52) = BYTE1(v45);
  }
  *(float *)(this + 28) = v52;
  v46 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  v53 = *(float *)&v46;
  if ( v14 )
  {
    HIBYTE(v53) = v46;
    LOBYTE(v53) = HIBYTE(v46);
    BYTE1(v53) = BYTE2(v46);
    BYTE2(v53) = BYTE1(v46);
  }
  *(float *)(this + 32) = v53;
  return 1;
}
