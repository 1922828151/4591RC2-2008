/*
 * func-name: sub_1002E590
 * func-address: 0x1002e590
 * callers: 0x1002f4a0
 * callees: 0x10001160, 0x1000e540, 0x1000e560, 0x1000ee20, 0x1000f900, 0x1000f970, 0x10012f90, 0x10014950, 0x10014b50, 0x100154d0, 0x1002b890, 0x1002bbe0, 0x1002ceb0, 0x1002cf30, 0x1002db30, 0x10034f10, 0x10035300
 */

char __usercall sub_1002E590@<al>(int **a1@<ecx>, int a2@<ebp>)
{
  int v3; // ebx
  int *v4; // eax
  int *v6; // eax
  unsigned int v7; // edi
  int v8; // edx
  int v9; // eax
  int v10; // edi
  unsigned int i; // eax
  int *v12; // edx
  unsigned int v13; // edi
  int v14; // ecx
  int v15; // eax
  int *v16; // ecx
  unsigned int v17; // edx
  int v18; // eax
  int *v19; // eax
  int *v20; // eax
  unsigned int v21; // edi
  int v22; // ebp
  int v23; // ebp
  float v24; // edx
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // ebp
  int v28; // edi
  int v29; // ecx
  float *v30; // eax
  float *v31; // eax
  _DWORD *v32; // eax
  _DWORD *v33; // edi
  int v34; // eax
  int v35; // [esp+20h] [ebp-244h]
  int v36; // [esp+24h] [ebp-240h]
  int v37; // [esp+24h] [ebp-240h]
  int v38; // [esp+28h] [ebp-23Ch]
  int v39; // [esp+2Ch] [ebp-238h]
  int v40; // [esp+30h] [ebp-234h]
  float v41; // [esp+34h] [ebp-230h] BYREF
  float v42; // [esp+38h] [ebp-22Ch]
  float v43; // [esp+3Ch] [ebp-228h]
  float v44; // [esp+40h] [ebp-224h] BYREF
  float v45; // [esp+44h] [ebp-220h]
  float v46; // [esp+48h] [ebp-21Ch]
  int v47; // [esp+4Ch] [ebp-218h] BYREF
  int v48; // [esp+50h] [ebp-214h]
  int v49; // [esp+54h] [ebp-210h]
  int v50; // [esp+58h] [ebp-20Ch]
  int v51; // [esp+5Ch] [ebp-208h]
  int v52; // [esp+60h] [ebp-204h]
  int v53; // [esp+64h] [ebp-200h]
  int v54; // [esp+68h] [ebp-1FCh]
  int v55; // [esp+6Ch] [ebp-1F8h]
  int v56; // [esp+70h] [ebp-1F4h]
  int v57; // [esp+74h] [ebp-1F0h]
  float v58; // [esp+78h] [ebp-1ECh]
  unsigned int v59; // [esp+7Ch] [ebp-1E8h]
  int v60; // [esp+80h] [ebp-1E4h]
  int v61; // [esp+84h] [ebp-1E0h] BYREF
  int v62; // [esp+88h] [ebp-1DCh]
  int v63; // [esp+8Ch] [ebp-1D8h]
  int v64; // [esp+90h] [ebp-1D4h]
  int v65; // [esp+94h] [ebp-1D0h]
  float v66; // [esp+98h] [ebp-1CCh]
  unsigned int v67; // [esp+9Ch] [ebp-1C8h] BYREF
  int v68; // [esp+A0h] [ebp-1C4h]
  int v69; // [esp+ACh] [ebp-1B8h]
  int v70; // [esp+B0h] [ebp-1B4h]
  float v71[4]; // [esp+B4h] [ebp-1B0h] BYREF
  _DWORD v72[3]; // [esp+C4h] [ebp-1A0h] BYREF
  int v73; // [esp+D0h] [ebp-194h]
  int v74; // [esp+D4h] [ebp-190h]
  int v75; // [esp+D8h] [ebp-18Ch]
  char v76; // [esp+DCh] [ebp-188h]
  int v77[3]; // [esp+E0h] [ebp-184h] BYREF
  int v78; // [esp+ECh] [ebp-178h]
  int v79; // [esp+F0h] [ebp-174h]
  int v80; // [esp+F4h] [ebp-170h]
  int v81; // [esp+F8h] [ebp-16Ch]
  void *Src; // [esp+FCh] [ebp-168h]
  int v83[16]; // [esp+100h] [ebp-164h] BYREF
  float v84[73]; // [esp+140h] [ebp-124h] BYREF

  v3 = 0;
  if ( !*a1
    && !byte_1005B47E
    && (!dword_100580A4
     || sub_10001160(
          (_DWORD *)dword_100580A4,
          107,
          (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\InternalTriangleMeshBuilder.cpp",
          173,
          &byte_1005B47E,
          "mesh",
          0)) )
  {
    __debugbreak();
  }
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v4 = *a1;
  v47 = **a1;
  v48 = v4[1];
  v49 = 0;
  v50 = 0;
  v51 = v4[2];
  v52 = 0;
  v53 = 0;
  LOBYTE(v54) = 1;
  *(_WORD *)((char *)&v55 + 1) = 257;
  HIBYTE(v55) = 1;
  LOBYTE(v56) = 1;
  BYTE2(v56) = 1;
  sub_1002B890((int)v84);
  if ( !sub_1002CF30((int)v84, (int)&v47) )
    goto LABEL_7;
  v6 = *a1;
  v7 = 0;
  if ( (*a1)[1] )
  {
    a2 = 0;
    do
    {
      v73 = 0;
      v74 = 0;
      v75 = 0;
      v76 = 0;
      v72[0] = v7;
      v72[1] = -1;
      v72[2] = 1;
      v73 = a2 + v6[3];
      v74 = 0;
      v75 = 0;
      v76 = 0;
      sub_1002BBE0((int)v84, (int)v72);
      v6 = *a1;
      ++v7;
      a2 += 12;
    }
    while ( v7 < (*a1)[1] );
  }
  memset(v77, 0, sizeof(v77));
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  Src = 0;
  memset(v83, 0, sizeof(v83));
  if ( !sub_1002DB30((int)v84, (int)v77) )
    goto LABEL_7;
  if ( (*a1)[3] )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, (*a1)[3]);
    (*a1)[3] = 0;
  }
  if ( (*a1)[2] )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, (*a1)[2]);
    (*a1)[2] = 0;
  }
  if ( (*a1)[20] )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, (*a1)[20]);
    (*a1)[20] = 0;
  }
  v8 = v77[0];
  if ( Src )
  {
    v9 = 0;
    if ( v77[0] )
    {
      while ( *((_DWORD *)Src + v9) == v9 )
      {
        if ( (unsigned int)++v9 >= v77[0] )
          goto LABEL_24;
      }
      (*a1)[20] = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(
                    dword_100580A0,
                    4 * v77[0],
                    276);
      memcpy_0((void *)(*a1)[20], Src, 4 * v77[0]);
      v8 = v77[0];
    }
  }
LABEL_24:
  if ( (*a1)[19] && (*a1)[20] )
  {
    v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 2 * v8, 270);
    for ( i = 0; i < v77[0]; ++i )
      *(_WORD *)(v10 + 2 * i) = *(_WORD *)((*a1)[19] + 2 * *(_DWORD *)((*a1)[20] + 4 * i));
    if ( (*a1)[19] )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, (*a1)[19]);
      (*a1)[19] = 0;
    }
    (*a1)[19] = v10;
  }
  sub_1000F900(*a1, v83[3]);
  sub_1000F970(*a1, v77[0]);
  v12 = *a1;
  v13 = 0;
  if ( **a1 )
  {
    v14 = 0;
    do
    {
      v15 = 12 * *(_DWORD *)(v83[4] + 4 * v13++);
      *(float *)(v14 + v12[2]) = *(float *)(v15 + v83[7]);
      *(float *)((*a1)[2] + v14 + 4) = *(float *)(v15 + v83[7] + 4);
      a2 = v83[7];
      *(float *)((*a1)[2] + v14 + 8) = *(float *)(v15 + v83[7] + 8);
      v12 = *a1;
      v14 += 12;
    }
    while ( v13 < **a1 );
  }
  v16 = *a1;
  v17 = 0;
  if ( (*a1)[1] )
  {
    v18 = 0;
    do
    {
      *(_DWORD *)(v18 + v16[3]) = *(_DWORD *)(v18 + v78);
      *(_DWORD *)((*a1)[3] + v18 + 4) = *(_DWORD *)(v18 + v78 + 4);
      *(_DWORD *)((*a1)[3] + v18 + 8) = *(_DWORD *)(v18 + v78 + 8);
      v16 = *a1;
      ++v17;
      v18 += 12;
    }
    while ( v17 < (*a1)[1] );
  }
  v19 = *a1;
  v61 = 0;
  v66 = 0.1;
  v62 = 0;
  v63 = 0;
  LOWORD(v64) = 0;
  v65 = 0;
  v61 = v19[1];
  v62 = v19[3];
  BYTE1(v64) = 1;
  sub_1000E540(&v67);
  if ( !sub_1000EE20(&v67, a2, (int)&v61) )
  {
    sub_1000E560(&v67);
LABEL_7:
    sub_1002CEB0(v84);
    return 0;
  }
  sub_10014950(v71);
  v20 = *a1;
  v21 = 0;
  if ( **a1 )
  {
    v22 = 0;
    do
    {
      sub_10012F90(v71, (float *)(v22 + v20[2]));
      v20 = *a1;
      ++v21;
      v22 += 12;
    }
    while ( v21 < **a1 );
  }
  v23 = **a1;
  v24 = 0.0;
  v39 = v23;
  v58 = 0.0;
  if ( v67 )
  {
    v25 = v68;
    do
    {
      v26 = *(unsigned __int16 *)(v69 + 8 * LODWORD(v24) + 2);
      if ( v26 > 2 )
      {
        v27 = *(_DWORD *)(v25 + 8 * LODWORD(v24));
        v36 = *(_DWORD *)(v69 + 8 * LODWORD(v24) + 4);
        v60 = *(_DWORD *)(v25 + 8 * LODWORD(v24) + 4);
        v28 = 1;
        v59 = v26 - 2;
        v35 = 0;
        v57 = 1;
        v37 = 4 * v36;
        while ( 1 )
        {
          if ( (v3 & 1) == 0 )
          {
            if ( ++v35 == 8 )
            {
              ++v28;
              v35 = 1;
              v57 = v28;
            }
            v29 = (*a1)[2];
            v30 = (float *)(v29 + 12 * v27);
            v41 = *v30;
            v42 = v30[1];
            v43 = v30[2];
            if ( (v35 & 1) != 0 )
              LODWORD(v41) ^= v28;
            if ( (v35 & 2) != 0 )
              LODWORD(v42) ^= v28;
            if ( (v35 & 4) != 0 )
              LODWORD(v43) ^= v28;
            v31 = (float *)(v29 + 12 * v60);
            v44 = *v31;
            v45 = v31[1];
            v46 = v31[2];
            if ( (v35 & 1) != 0 )
              LODWORD(v44) ^= v28;
            if ( (v35 & 2) != 0 )
              LODWORD(v45) ^= v28;
            if ( (v35 & 4) != 0 )
              LODWORD(v46) ^= v28;
            v32 = sub_10012F90(v71, &v41);
            sub_10012F90(v32, &v44);
            v38 = v39;
            v40 = v39 + 1;
            v39 += 2;
          }
          v33 = (_DWORD *)((*a1)[3] + 12 * *(_DWORD *)(v70 + v37));
          sub_100154D0(v33, v27, v38);
          sub_100154D0(v33, v60, v40);
          v37 += 4;
          if ( ++v3 >= v59 )
            break;
          v28 = v57;
        }
        v25 = v68;
        v24 = v58;
        v3 = 0;
      }
      ++LODWORD(v24);
      v58 = v24;
    }
    while ( LODWORD(v24) < v67 );
    v23 = v39;
  }
  if ( **a1 != v23 )
  {
    v34 = (*a1)[2];
    if ( v34 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v34);
      (*a1)[2] = 0;
    }
    (*a1)[2] = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 12 * v23, 268);
    memcpy_0((void *)(*a1)[2], (const void *)LODWORD(v71[2]), 12 * v23);
    **a1 = v23;
  }
  sub_10014B50(v71);
  sub_1000E560(&v67);
  sub_1002CEB0(v84);
  return 1;
}
