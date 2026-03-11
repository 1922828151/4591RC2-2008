/*
 * func-name: ?GatherRenderingPolys@World@@QAEXPAVActor@@AAV?$vector@UVertex@@V?$allocator@UVertex@@@std@@@std@@ABVVector@@ABVBBox@@M@Z
 * func-address: 0x1013fac0
 * callers: 0x10128c50
 * callees: 0x10001440, 0x10100ca0, 0x10140370, 0x10143fd0, 0x1017a0b0, 0x101a2516, 0x101a252e
 */

struct NxPhysics *__stdcall World::GatherRenderingPolys(int a1, int a2, float *a3, float *a4, int a5)
{
  struct NxPhysics *result; // eax
  int v6; // ebx
  double v7; // st7
  float *v8; // ecx
  float *v9; // edi
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st4
  float *v14; // esi
  double v15; // st1
  bool v16; // c0
  bool v17; // c3
  double v18; // st5
  double v19; // st2
  float *v20; // ebp
  bool v21; // c0
  bool v22; // c3
  double v23; // st6
  double v24; // st3
  bool v25; // c0
  bool v26; // c3
  double v27; // st7
  double v28; // st4
  float *v29; // ecx
  float *v30; // edx
  int v31; // edi
  int *v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // ebx
  int v36; // esi
  unsigned int v37; // ebp
  float *v38; // esi
  int v39; // edi
  double v40; // st4
  float *v41; // eax
  int v42; // ecx
  int v43; // edx
  int v44; // eax
  float *v45; // eax
  int v46; // ecx
  int v47; // edx
  int v48; // eax
  float v49; // [esp+4Ch] [ebp-118h]
  float v50; // [esp+4Ch] [ebp-118h]
  float v51; // [esp+4Ch] [ebp-118h]
  float v52; // [esp+4Ch] [ebp-118h]
  float v53; // [esp+4Ch] [ebp-118h]
  float v54; // [esp+4Ch] [ebp-118h]
  float v55; // [esp+50h] [ebp-114h]
  float v56; // [esp+50h] [ebp-114h]
  float v57; // [esp+50h] [ebp-114h]
  float v58; // [esp+50h] [ebp-114h]
  float v59; // [esp+50h] [ebp-114h]
  float v60; // [esp+50h] [ebp-114h]
  float v61; // [esp+54h] [ebp-110h]
  float v62; // [esp+54h] [ebp-110h]
  float v63; // [esp+54h] [ebp-110h]
  int v64; // [esp+54h] [ebp-110h]
  float v65; // [esp+58h] [ebp-10Ch]
  float v66; // [esp+58h] [ebp-10Ch]
  float v67; // [esp+58h] [ebp-10Ch]
  float v68; // [esp+58h] [ebp-10Ch]
  float v69; // [esp+5Ch] [ebp-108h] BYREF
  float v70; // [esp+60h] [ebp-104h]
  float v71; // [esp+64h] [ebp-100h]
  float v72; // [esp+68h] [ebp-FCh]
  unsigned int v73; // [esp+6Ch] [ebp-F8h] BYREF
  int v74; // [esp+70h] [ebp-F4h]
  void *Src; // [esp+74h] [ebp-F0h] BYREF
  float v76; // [esp+78h] [ebp-ECh]
  float v77; // [esp+7Ch] [ebp-E8h]
  float v78[4]; // [esp+80h] [ebp-E4h] BYREF
  float v79; // [esp+90h] [ebp-D4h] BYREF
  float v80; // [esp+94h] [ebp-D0h] BYREF
  float v81; // [esp+98h] [ebp-CCh] BYREF
  float v82; // [esp+9Ch] [ebp-C8h] BYREF
  float v83; // [esp+A0h] [ebp-C4h] BYREF
  float v84; // [esp+A4h] [ebp-C0h] BYREF
  float v85[6]; // [esp+A8h] [ebp-BCh] BYREF
  float v86; // [esp+C0h] [ebp-A4h] BYREF
  float v87; // [esp+C4h] [ebp-A0h]
  float v88; // [esp+C8h] [ebp-9Ch]
  float v89; // [esp+CCh] [ebp-98h]
  float v90; // [esp+D0h] [ebp-94h]
  float v91; // [esp+D4h] [ebp-90h]
  float v92; // [esp+D8h] [ebp-8Ch]
  float v93; // [esp+DCh] [ebp-88h]
  float v94; // [esp+E0h] [ebp-84h]
  _DWORD v95[14]; // [esp+E4h] [ebp-80h] BYREF
  char v96[4]; // [esp+11Ch] [ebp-48h] BYREF
  _DWORD v97[8]; // [esp+120h] [ebp-44h] BYREF
  float v98[3]; // [esp+140h] [ebp-24h] BYREF
  float v99[3]; // [esp+14Ch] [ebp-18h] BYREF
  int v100; // [esp+160h] [ebp-4h]

  result = NxPhysics::Instance();
  v6 = *((_DWORD *)result + 3);
  if ( v6 )
  {
    sub_10001440(v78);
    v7 = *a3 + a4[4];
    v8 = a4 + 4;
    v9 = a4 + 6;
    v100 = 0;
    v61 = v7;
    v49 = a4[5] + a3[1];
    v55 = a4[6] + a3[2];
    v10 = v61;
    v69 = v61;
    v11 = v49;
    v79 = v61;
    v70 = v49;
    v12 = v55;
    v80 = v49;
    v71 = v55;
    v13 = *a3;
    v81 = v55;
    v14 = a4 + 7;
    v62 = v13 + a4[7];
    v50 = a4[8] + a3[1];
    v56 = a4[9] + a3[2];
    v69 = v62;
    v82 = v62;
    v70 = v50;
    v83 = v50;
    v71 = v56;
    v15 = a4[6];
    v84 = v56;
    v16 = v15 < v12;
    v17 = v15 == v12;
    v18 = v56;
    if ( !v16 && !v17 )
      v9 = &v81;
    v19 = a4[5];
    v20 = a4 + 5;
    v21 = v19 < v11;
    v22 = v19 == v11;
    v23 = v50;
    if ( !v21 && !v22 )
      v20 = &v80;
    v24 = *v8;
    v25 = v24 < v10;
    v26 = v24 == v10;
    v27 = v62;
    if ( !v25 && !v26 )
      v8 = &v79;
    v28 = *v8;
    v29 = a4 + 9;
    v63 = v28;
    v51 = *v20;
    v57 = *v9;
    v85[0] = v63;
    v85[1] = v51;
    v85[2] = v57;
    if ( a4[9] < v18 )
      v29 = &v84;
    v30 = a4 + 8;
    if ( a4[8] < v23 )
      v30 = &v83;
    if ( *v14 < v27 )
      v14 = &v82;
    v52 = *v30;
    v58 = *v29;
    v85[3] = *v14;
    v85[4] = v52;
    v85[5] = v58;
    v31 = 0;
    v74 = (*(int (__thiscall **)(int, float *, int, int, _DWORD *, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v6 + 456))(
            v6,
            v85,
            1,
            8,
            v97,
            0,
            -1,
            0,
            0);
    v64 = 0;
    if ( v74 > 0 )
    {
      do
      {
        v32 = *(int **)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v97[v31] + 4))(v97[v31]) + 4);
        if ( v32 )
        {
          v33 = *v32;
          if ( v33 )
          {
            if ( v33 != a1 )
            {
              v34 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)v97[v31] + 108))(v97[v31], 6);
              v35 = v34;
              if ( v34 )
              {
                (*(void (__thiscall **)(int, float *, int, unsigned int *, void **))(*(_DWORD *)v34 + 176))(
                  v34,
                  v85,
                  1,
                  &v73,
                  &Src);
                v36 = v73;
                if ( v73 > 0x40 )
                {
                  v36 = 64;
                  v73 = 64;
                }
                memcpy(dword_11241B10, Src, 4 * v36);
                v37 = 0;
                if ( v36 )
                {
                  do
                  {
                    (*(void (__thiscall **)(int, float *, _DWORD, char *, int, int, int))(*(_DWORD *)v35 + 168))(
                      v35,
                      &v86,
                      0,
                      v96,
                      dword_11241B10[v37],
                      1,
                      1);
                    v38 = &v86;
                    v39 = 3;
                    do
                    {
                      v77 = v92 - v86;
                      v76 = v93 - v87;
                      v59 = v94 - v88;
                      v65 = v89 - v86;
                      v53 = v90 - v87;
                      v72 = v91 - v88;
                      v40 = v72;
                      v72 = v53 * v59 - v72 * v76;
                      v60 = v40 * v77 - v59 * v65;
                      v54 = v76 * v65 - v53 * v77;
                      v69 = v72;
                      v70 = v60;
                      v71 = v54;
                      v66 = v54 * v54 + v60 * v60 + v72 * v72;
                      v67 = sqrt(v66);
                      if ( v67 != 0.0 )
                      {
                        v68 = 1.0 / v67;
                        v69 = v72 * v68;
                        v70 = v60 * v68;
                        v71 = v68 * v54;
                      }
                      *(float *)&v95[6] = 0.0;
                      *(float *)&v95[7] = 0.0;
                      *(float *)&v95[8] = 0.0;
                      *(float *)&v95[9] = 0.0;
                      *(float *)&v95[10] = 0.0;
                      *(float *)&v95[11] = 0.0;
                      *(float *)&v95[12] = 0.0;
                      *(float *)&v95[13] = 0.0;
                      v41 = NxHelper::ToVector(v99, v38);
                      v42 = *(_DWORD *)v41;
                      v43 = *((_DWORD *)v41 + 1);
                      v44 = *((_DWORD *)v41 + 2);
                      v95[0] = v42;
                      v95[1] = v43;
                      v95[2] = v44;
                      v45 = NxHelper::ToVector(v98, &v69);
                      v46 = *(_DWORD *)v45;
                      v47 = *((_DWORD *)v45 + 1);
                      v48 = *((_DWORD *)v45 + 2);
                      v95[3] = v46;
                      v95[4] = v47;
                      v95[5] = v48;
                      sub_10140370(a2, v95);
                      v38 += 3;
                      --v39;
                    }
                    while ( v39 );
                    ++v37;
                  }
                  while ( v37 < v73 );
                  v31 = v64;
                }
              }
            }
          }
        }
        v64 = ++v31;
      }
      while ( v31 < v74 );
    }
    v100 = -1;
    return (struct NxPhysics *)sub_1017A0B0(v78);
  }
  return result;
}
