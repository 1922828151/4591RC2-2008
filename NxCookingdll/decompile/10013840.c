/*
 * func-name: sub_10013840
 * func-address: 0x10013840
 * callers: none
 * callees: 0x10001160, 0x1000d700, 0x1000f900, 0x1000f970, 0x1000f9e0, 0x1000fa50, 0x1000fb00, 0x1000fc40, 0x100130a0, 0x100130e0, 0x100131e0, 0x100134a0, 0x10013650, 0x100137c0, 0x100189f0, 0x10030400
 */

char __userpurge sub_10013840@<al>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  unsigned int *v4; // ebp
  char result; // al
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  void (__thiscall *v12)(int, int, unsigned int); // edx
  unsigned int v13; // ecx
  _BYTE *v14; // eax
  unsigned int v15; // ebx
  _DWORD *v16; // ebp
  bool v17; // zf
  _DWORD *v18; // ebp
  unsigned __int16 v19; // bx
  int v20; // ecx
  int (__thiscall *v21)(int); // eax
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // cx
  int v24; // edx
  unsigned int v25; // eax
  bool v26; // cf
  int v27; // ebp
  unsigned int v28; // ecx
  _BYTE *v29; // eax
  char v30; // bl
  int v31; // ebp
  unsigned int i; // eax
  int v33; // eax
  unsigned int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  unsigned int j; // ecx
  int v39; // eax
  char v40; // dl
  _WORD *v41; // eax
  unsigned int v42; // eax
  int v43; // edx
  int v44; // eax
  int v45; // eax
  int v46; // ecx
  int v47; // edx
  int v48; // eax
  int v49; // edx
  int v50; // eax
  double v51; // st7
  int v52; // eax
  int v53; // ebp
  int v54; // eax
  char v55; // [esp+14h] [ebp-40h]
  unsigned int v56; // [esp+14h] [ebp-40h]
  int v57; // [esp+18h] [ebp-3Ch]
  char v58; // [esp+20h] [ebp-34h]
  int v60; // [esp+28h] [ebp-2Ch]
  int v61; // [esp+34h] [ebp-20h]
  unsigned __int16 v62; // [esp+34h] [ebp-20h]
  int v63; // [esp+34h] [ebp-20h]
  int v64; // [esp+38h] [ebp-1Ch]
  unsigned __int16 v65; // [esp+38h] [ebp-1Ch]
  int v66; // [esp+38h] [ebp-1Ch]
  int v67; // [esp+3Ch] [ebp-18h] BYREF
  int v68; // [esp+40h] [ebp-14h]
  unsigned int v69; // [esp+44h] [ebp-10h] BYREF
  int v70; // [esp+48h] [ebp-Ch]
  _DWORD v71[2]; // [esp+4Ch] [ebp-8h] BYREF
  int v72; // [esp+58h] [ebp+4h]
  unsigned __int16 v73; // [esp+58h] [ebp+4h]
  int v74; // [esp+58h] [ebp+4h]
  __int16 v75; // [esp+58h] [ebp+4h]
  __int16 v76; // [esp+58h] [ebp+4h]

  v4 = (unsigned int *)(a1 + 4);
  sub_1000FC40((_DWORD *)(a1 + 4));
  if ( !sub_100134A0(77, 69, 83, 72, (int *)&v69, (char *)&v67, a3) )
    return 0;
  if ( v69 < dword_100563BC )
  {
    sub_1000D700(
      4,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\TriangleMesh.cpp",
      149,
      0,
      "Loading triangle mesh failed: Deprecated mesh cooking format. Please install and run the mesh converter tool to co"
      "nvert your mesh to the new cooking format.",
      v60);
    return 0;
  }
  v7 = sub_100130A0(v67, a3);
  v55 = v67;
  v70 = v7;
  *(_DWORD *)(a1 + 96) = 0;
  *(float *)(a1 + 100) = sub_100130E0(v55, a3);
  *(_DWORD *)(a1 + 176) = sub_100130A0(v67, a3);
  *(float *)(a1 + 180) = sub_100130E0(v67, a3);
  v8 = sub_100130A0(v67, a3);
  v9 = sub_1000F900(v4, v8);
  v10 = sub_100130A0(v67, a3);
  v11 = sub_1000F970(v4, v10);
  v12 = *(void (__thiscall **)(int, int, unsigned int))(*(_DWORD *)a3 + 24);
  v68 = v11;
  v12(a3, v9, 12 * *v4);
  if ( (_BYTE)v67 )
  {
    v13 = 0;
    if ( *v4 )
    {
      v14 = (_BYTE *)(v9 + 6);
      do
      {
        LOBYTE(v72) = *(v14 - 3);
        BYTE1(v72) = *(v14 - 4);
        BYTE2(v72) = *(v14 - 5);
        HIBYTE(v72) = *(v14 - 6);
        *(_DWORD *)(v14 - 6) = v72;
        LOBYTE(v64) = v14[1];
        BYTE1(v64) = *v14;
        BYTE2(v64) = *(v14 - 1);
        HIBYTE(v64) = *(v14 - 2);
        *(_DWORD *)(v14 - 2) = v64;
        LOBYTE(v61) = v14[5];
        BYTE1(v61) = v14[4];
        BYTE2(v61) = v14[3];
        HIBYTE(v61) = v14[2];
        *(_DWORD *)(v14 + 2) = v61;
        ++v13;
        v14 += 12;
      }
      while ( v13 < *v4 );
    }
  }
  if ( (v70 & 8) != 0 )
  {
    v15 = 0;
    if ( *(_DWORD *)(a1 + 8) )
    {
      v16 = (_DWORD *)(v68 + 8);
      do
      {
        *(v16 - 2) = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
        *(v16 - 1) = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
        *v16 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
        ++v15;
        v16 += 3;
      }
      while ( v15 < *(_DWORD *)(a1 + 8) );
    }
  }
  else if ( (v70 & 0x10) != 0 )
  {
    v17 = *(_DWORD *)(a1 + 8) == 0;
    v71[0] = 0;
    if ( !v17 )
    {
      v18 = (_DWORD *)(v68 + 8);
      do
      {
        v19 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
        v20 = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
        v21 = *(int (__thiscall **)(int))(*(_DWORD *)a3 + 8);
        v68 = v20;
        v22 = v21(a3);
        v23 = v68;
        if ( (_BYTE)v67 )
        {
          LOBYTE(v73) = HIBYTE(v19);
          HIBYTE(v73) = v19;
          v19 = v73;
          LOBYTE(v62) = BYTE1(v68);
          HIBYTE(v62) = v68;
          v23 = v62;
          LOBYTE(v65) = HIBYTE(v22);
          HIBYTE(v65) = v22;
          v22 = v65;
        }
        *(v18 - 2) = v19;
        v24 = v22;
        v25 = v71[0];
        *(v18 - 1) = v23;
        *v18 = v24;
        ++v25;
        v18 += 3;
        v26 = v25 < *(_DWORD *)(a1 + 8);
        v71[0] = v25;
      }
      while ( v26 );
    }
  }
  else
  {
    v27 = v68;
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a3 + 24))(a3, v68, 12 * *(_DWORD *)(a1 + 8));
    if ( (_BYTE)v67 )
    {
      v28 = 0;
      if ( *(_DWORD *)(a1 + 8) )
      {
        v29 = (_BYTE *)(v27 + 6);
        do
        {
          LOBYTE(v74) = *(v29 - 3);
          BYTE1(v74) = *(v29 - 4);
          BYTE2(v74) = *(v29 - 5);
          HIBYTE(v74) = *(v29 - 6);
          *(_DWORD *)(v29 - 6) = v74;
          LOBYTE(v66) = v29[1];
          BYTE1(v66) = *v29;
          BYTE2(v66) = *(v29 - 1);
          HIBYTE(v66) = *(v29 - 2);
          *(_DWORD *)(v29 - 2) = v66;
          LOBYTE(v63) = v29[5];
          BYTE1(v63) = v29[4];
          BYTE2(v63) = v29[3];
          HIBYTE(v63) = v29[2];
          *(_DWORD *)(v29 + 2) = v63;
          ++v28;
          v29 += 12;
        }
        while ( v28 < *(_DWORD *)(a1 + 8) );
      }
    }
  }
  v30 = v70;
  if ( (v70 & 1) != 0 )
  {
    v31 = sub_1000F9E0((_DWORD *)(a1 + 4));
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a3 + 24))(a3, v31, 2 * *(_DWORD *)(a1 + 8));
    if ( (_BYTE)v67 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
      {
        LOBYTE(v75) = *(_BYTE *)(v31 + 2 * i + 1);
        HIBYTE(v75) = *(_BYTE *)(v31 + 2 * i);
        *(_WORD *)(v31 + 2 * i) = v75;
      }
    }
  }
  if ( (v30 & 2) != 0 )
  {
    v33 = sub_1000FA50((_DWORD *)(a1 + 4));
    v58 = v67;
    v57 = v33;
    v56 = *(_DWORD *)(a1 + 8);
    v34 = sub_100130A0(v67, a3);
    sub_10013650(v34, v56, v57, a3, v58);
  }
  *(_DWORD *)(a1 + 28) = sub_100130A0(v67, a3);
  v35 = sub_100130A0(v67, a3);
  v17 = *(_DWORD *)(a1 + 28) == 0;
  *(_DWORD *)(a1 + 32) = v35;
  if ( !v17 )
  {
    v36 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(
            dword_100580A0,
            2 * *(_DWORD *)(a1 + 8),
            281);
    v37 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 36) = v36;
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a3 + 24))(a3, v36, 2 * v37);
    if ( (_BYTE)v67 )
    {
      for ( j = 0; j < *(_DWORD *)(a1 + 8); *v41 = v76 )
      {
        v39 = *(_DWORD *)(a1 + 36);
        v40 = *(_BYTE *)(v39 + 2 * j + 1);
        v41 = (_WORD *)(v39 + 2 * j);
        LOBYTE(v76) = v40;
        HIBYTE(v76) = *(_BYTE *)v41;
        ++j;
      }
    }
  }
  v42 = *(_DWORD *)(a1 + 32);
  if ( v42 )
  {
    v43 = *(_DWORD *)dword_100580A0;
    v26 = v42 < 0x100;
    v44 = *(_DWORD *)(a1 + 8);
    if ( v26 )
      v45 = (*(int (__stdcall **)(int, int, int))(v43 + 8))(v44, 282, a2);
    else
      v45 = (*(int (__stdcall **)(int, int, int))(v43 + 8))(2 * v44, 281, a2);
    *(_DWORD *)(a1 + 40) = v45;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 24))(a3, v45);
  }
  sub_100130A0(v67, a3);
  v71[0] = &StreamLoad::`vftable';
  v71[1] = a3;
  result = sub_1000FB00(v71);
  if ( result )
  {
    *(float *)(a1 + 168) = sub_100130E0(v67, a3);
    *(float *)(a1 + 152) = sub_100130E0(v67, a3);
    *(float *)(a1 + 156) = sub_100130E0(v67, a3);
    *(float *)(a1 + 160) = sub_100130E0(v67, a3);
    *(float *)(a1 + 164) = sub_100130E0(v67, a3);
    *(float *)(a1 + 128) = sub_100130E0(v67, a3);
    *(float *)(a1 + 132) = sub_100130E0(v67, a3);
    *(float *)(a1 + 136) = sub_100130E0(v67, a3);
    *(float *)(a1 + 140) = sub_100130E0(v67, a3);
    *(float *)(a1 + 144) = sub_100130E0(v67, a3);
    *(float *)(a1 + 148) = sub_100130E0(v67, a3);
    sub_100137C0(a1);
    v46 = *(_DWORD *)(a1 + 140);
    *(float *)(a1 + 52) = *(float *)(a1 + 168);
    v47 = *(_DWORD *)(a1 + 144);
    v48 = *(_DWORD *)(a1 + 148);
    *(_DWORD *)(a1 + 68) = v46;
    *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 128);
    LOBYTE(v46) = v67;
    *(_DWORD *)(a1 + 72) = v47;
    v49 = *(_DWORD *)(a1 + 132);
    *(_DWORD *)(a1 + 76) = v48;
    v50 = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 60) = v49;
    *(_DWORD *)(a1 + 64) = v50;
    v51 = sub_100130E0(v46, a3);
    *(float *)(a1 + 208) = v51;
    if ( -1.0 != v51 )
    {
      sub_100131E0(a1 + 212, 9, v67, a3);
      sub_100131E0(a1 + 248, 3, v67, a3);
    }
    v52 = sub_100130A0(v67, a3);
    v53 = v52;
    if ( v52 )
    {
      if ( v52 != *(_DWORD *)(a1 + 8)
        && !byte_1005B1B9
        && (!dword_100580A4
         || sub_10001160(
              (_DWORD *)dword_100580A4,
              107,
              (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\TriangleMesh.cpp",
              324,
              &byte_1005B1B9,
              "nb==mesh.getNumTriangles()",
              0)) )
      {
        __debugbreak();
      }
      v54 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, v53, 27);
      *(_DWORD *)(a1 + 44) = v54;
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a3 + 24))(a3, v54, v53);
    }
    if ( (v70 & 4) != 0 )
    {
      *(_DWORD *)(a1 + 96) |= 4u;
      sub_10030400(a3);
    }
    return sub_100189F0(0);
  }
  return result;
}
