/*
 * func-name: sub_10018BE0
 * func-address: 0x10018be0
 * callers: none
 * callees: 0x10014910
 */

char __thiscall sub_10018BE0(int this, char a2, int a3)
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
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // [esp+14h] [ebp-4h]
  float v44; // [esp+1Ch] [ebp+4h]
  float v45; // [esp+1Ch] [ebp+4h]
  float v46; // [esp+1Ch] [ebp+4h]
  float v47; // [esp+1Ch] [ebp+4h]
  float v48; // [esp+1Ch] [ebp+4h]
  float v49; // [esp+1Ch] [ebp+4h]
  int v50; // [esp+20h] [ebp+8h]

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  if ( a2 )
  {
    HIBYTE(v50) = v5;
    LOBYTE(v50) = HIBYTE(v5);
    BYTE1(v50) = BYTE2(v5);
    BYTE2(v50) = BYTE1(v5);
    v5 = v50;
  }
  v6 = *(_DWORD *)(this + 8);
  *(_DWORD *)(this + 4) = v5;
  v43 = 20 * v5;
  if ( v6 )
  {
    v7 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v7)[3])(v7, v6 - 4);
    *(_DWORD *)(this + 8) = 0;
  }
  v8 = *(_DWORD *)(this + 4);
  v9 = sub_10014910();
  v10 = (20 * (unsigned __int64)v8) >> 32 != 0 ? -1 : 20 * v8;
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
  (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a3 + 24))(a3, v12, v43);
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
        ++v15;
        v35[1] = v36;
        v35[2] = v29;
        v16 += 20;
      }
      while ( v15 < *(_DWORD *)(this + 4) );
      v14 = a2;
    }
  }
  v37 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  v44 = *(float *)&v37;
  if ( v14 )
  {
    HIBYTE(v44) = v37;
    LOBYTE(v44) = HIBYTE(v37);
    BYTE1(v44) = BYTE2(v37);
    BYTE2(v44) = BYTE1(v37);
  }
  *(float *)(this + 12) = v44;
  v38 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  v45 = *(float *)&v38;
  if ( v14 )
  {
    HIBYTE(v45) = v38;
    LOBYTE(v45) = HIBYTE(v38);
    BYTE1(v45) = BYTE2(v38);
    BYTE2(v45) = BYTE1(v38);
  }
  *(float *)(this + 16) = v45;
  v39 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  v46 = *(float *)&v39;
  if ( v14 )
  {
    HIBYTE(v46) = v39;
    LOBYTE(v46) = HIBYTE(v39);
    BYTE1(v46) = BYTE2(v39);
    BYTE2(v46) = BYTE1(v39);
  }
  *(float *)(this + 20) = v46;
  v40 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  v47 = *(float *)&v40;
  if ( v14 )
  {
    HIBYTE(v47) = v40;
    LOBYTE(v47) = HIBYTE(v40);
    BYTE1(v47) = BYTE2(v40);
    BYTE2(v47) = BYTE1(v40);
  }
  *(float *)(this + 24) = v47;
  v41 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  v48 = *(float *)&v41;
  if ( v14 )
  {
    HIBYTE(v48) = v41;
    LOBYTE(v48) = HIBYTE(v41);
    BYTE1(v48) = BYTE2(v41);
    BYTE2(v48) = BYTE1(v41);
  }
  *(float *)(this + 28) = v48;
  v42 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  v49 = *(float *)&v42;
  if ( v14 )
  {
    HIBYTE(v49) = v42;
    LOBYTE(v49) = HIBYTE(v42);
    BYTE1(v49) = BYTE2(v42);
    BYTE2(v49) = BYTE1(v42);
  }
  *(float *)(this + 32) = v49;
  return 1;
}
