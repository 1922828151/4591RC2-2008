/*
 * func-name: sub_100126B0
 * func-address: 0x100126b0
 * callers: 0x10013f60, 0x1002f3a0
 * callees: 0x10001050, 0x1000d700, 0x10011260, 0x10011680, 0x100118f0, 0x10012140, 0x100122c0, 0x10012490, 0x10014d60, 0x10014d80, 0x10017390, 0x10018310, 0x100183a0, 0x100184f0, 0x10018570, 0x10018590, 0x1001ab00, 0x1001ab10, 0x1001ab20, 0x10034f10, 0x10035730, 0x10035a20
 */

char __thiscall sub_100126B0(
        int this,
        int a2,
        int a3,
        char *FileName,
        _BYTE *FileName_4,
        char a6,
        void (__thiscall ***a7)(_DWORD, int, const char *, const char *, int))
{
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  unsigned int v13; // ebx
  char v14; // al
  double v15; // st7
  double v16; // st6
  double v17; // st5
  int v18; // edi
  int v19; // eax
  double v20; // st7
  int v21; // ecx
  signed int v22; // edx
  signed int v23; // eax
  int v24; // ecx
  signed int v25; // edi
  double v26; // st6
  signed int v27; // edi
  double v28; // st5
  double v29; // st4
  signed int v30; // ebx
  int v31; // eax
  unsigned int v32; // edi
  char *v33; // ecx
  double v34; // st3
  double v35; // st2
  double v36; // st1
  double v37; // st3
  double v38; // st2
  double v39; // st1
  double v40; // st3
  double v41; // st2
  double v42; // st1
  double v43; // st3
  double v44; // st2
  double v45; // st1
  char *v46; // ecx
  double v47; // st3
  double v48; // st2
  double v49; // st1
  bool v50; // cc
  int v51; // [esp+10h] [ebp-100h]
  bool v52; // [esp+1Fh] [ebp-F1h]
  signed int v53; // [esp+24h] [ebp-ECh]
  float v54; // [esp+28h] [ebp-E8h]
  int v55; // [esp+28h] [ebp-E8h]
  signed int v56; // [esp+2Ch] [ebp-E4h]
  int v57; // [esp+30h] [ebp-E0h]
  signed int v58; // [esp+30h] [ebp-E0h]
  signed int j; // [esp+34h] [ebp-DCh]
  signed int i; // [esp+38h] [ebp-D8h]
  char *v61; // [esp+3Ch] [ebp-D4h]
  int v62; // [esp+40h] [ebp-D0h]
  int v63; // [esp+40h] [ebp-D0h]
  int v64; // [esp+48h] [ebp-C8h]
  int v65; // [esp+4Ch] [ebp-C4h]
  int v66; // [esp+50h] [ebp-C0h]
  signed int v67; // [esp+54h] [ebp-BCh]
  float v68; // [esp+58h] [ebp-B8h]
  float v69; // [esp+5Ch] [ebp-B4h]
  float v70; // [esp+60h] [ebp-B0h]
  float v71; // [esp+64h] [ebp-ACh]
  int v72; // [esp+68h] [ebp-A8h] BYREF
  int v73; // [esp+6Ch] [ebp-A4h]
  float v74; // [esp+70h] [ebp-A0h]
  int v75[3]; // [esp+74h] [ebp-9Ch] BYREF
  float v76[3]; // [esp+80h] [ebp-90h] BYREF
  _DWORD v77[6]; // [esp+8Ch] [ebp-84h] BYREF
  char v78; // [esp+A4h] [ebp-6Ch]
  char v79; // [esp+A5h] [ebp-6Bh]
  char v80; // [esp+A6h] [ebp-6Ah]
  char v81; // [esp+A7h] [ebp-69h]
  _BYTE v82[20]; // [esp+A8h] [ebp-68h] BYREF
  _BYTE v83[8]; // [esp+BCh] [ebp-54h] BYREF
  int v84; // [esp+C4h] [ebp-4Ch]
  int v85; // [esp+C8h] [ebp-48h]
  _BYTE v86[44]; // [esp+D4h] [ebp-3Ch] BYREF
  float v87; // [esp+100h] [ebp-10h]
  int v88; // [esp+10Ch] [ebp-4h]

  if ( !a2 )
  {
    if ( a7 )
      (**a7)(
        a7,
        1,
        "PenetrationMap::Create: no triangle mesh",
        "g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\PenetrationMap.cpp",
        997);
    return 0;
  }
  if ( !FileName_4 || !a6 )
  {
LABEL_16:
    sub_10012140(this, a3, (float *)(a2 + 128));
    *(_DWORD *)(this + 112) = a2;
    if ( a6 && sub_100122C0((unsigned int *)this, FileName, (int)FileName_4) )
    {
      sub_10012490((_DWORD *)this);
      return 1;
    }
    else
    {
      v9 = 0;
      v66 = 0;
      v72 = -1;
      sub_10018310(v83);
      v10 = *(_DWORD *)(a2 + 8);
      v11 = *(_DWORD *)(a2 + 12);
      v85 = *(_DWORD *)(a2 + 4);
      v12 = *(_DWORD *)(a2 + 16);
      v84 = v10;
      sub_100183A0(v12, v11);
      sub_10017390(v77);
      v77[0] = v83;
      v78 = 1;
      v79 = 0;
      v77[1] = 1;
      v77[2] = 34;
      v80 = 0;
      v81 = 0;
      sub_100184F0(v82);
      if ( (unsigned __int8)sub_10018590(v77) )
      {
        sub_1001AB00(v86);
        v61 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(
                        dword_100580A0,
                        a3 * a3 * a3,
                        1);
        memset(v61, 0, a3 * a3 * a3);
        for ( i = 0; i < a3; ++i )
        {
          for ( j = 0; j < a3; ++j )
          {
            v13 = 0;
            v64 = 0;
            v74 = (float)(unsigned int)j;
            do
            {
              v14 = v61[v9];
              v15 = (double)v13 * *(float *)(this + 76) - *(float *)(this + 40) + *(float *)(this + 28);
              v68 = v15;
              v16 = *(float *)(this + 80) * v74 - *(float *)(this + 44) + *(float *)(this + 32);
              v69 = v16;
              v71 = (float)(unsigned int)i;
              v17 = *(float *)(this + 84) * v71 - *(float *)(this + 48) + *(float *)(this + 36);
              v70 = v17;
              if ( v14 )
              {
                v52 = v14 != 1;
              }
              else
              {
                *(float *)v75 = v15;
                *(float *)&v75[1] = v16;
                *(float *)&v75[2] = v17;
                v15 = v68;
                v16 = v69;
                v52 = sub_10011680(3, a2, v75);
                v17 = v70;
                v61[v9] = v52 + 1;
              }
              v76[0] = v15;
              v76[1] = v16;
              v76[2] = v17;
              sub_1001AB20(v76, v82, 0, &v72);
              if ( v52 )
                *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v9) = v88;
              v54 = v87;
              v18 = (int)ceil(v87 * *(float *)(this + 64));
              v57 = (int)ceil(*(float *)(this + 68) * v54);
              v19 = (int)ceil(*(float *)(this + 72) * v54);
              v20 = v54 * v54;
              v21 = v19;
              v22 = v13 - v18;
              v62 = v19;
              v56 = v13 - v18;
              if ( (int)(v13 - v18) < 0 )
              {
                v56 = 0;
                v22 = 0;
              }
              v23 = j - v57;
              v65 = j - v57;
              if ( j - v57 < 0 )
              {
                v65 = 0;
                v23 = 0;
              }
              v53 = i - v21;
              if ( i - v21 < 0 )
                v53 = 0;
              v24 = a3 - 1;
              v55 = v64 + v18;
              if ( v64 + v18 > a3 - 1 )
                v55 = a3 - 1;
              v67 = j + v57;
              if ( j + v57 > v24 )
                v67 = a3 - 1;
              v25 = i + v62;
              v58 = i + v62;
              if ( i + v62 > v24 )
              {
                v58 = a3 - 1;
                v25 = a3 - 1;
              }
              if ( v53 <= v25 )
              {
                v26 = v68;
                v27 = v55;
                v28 = v69;
                v29 = v70;
                do
                {
                  v63 = v53 * *(_DWORD *)(this + 92);
                  v30 = v23;
                  if ( v23 <= v67 )
                  {
                    v73 = v27 - v22 + 1;
                    do
                    {
                      v31 = v30 * *(_DWORD *)(this + 88);
                      if ( v73 >= 4 )
                      {
                        v32 = v56 + 2;
                        v33 = &v61[v56 + 1 + v63 + v31];
                        do
                        {
                          if ( !*(v33 - 1) )
                          {
                            v34 = (double)(unsigned int)v22 * *(float *)(this + 76)
                                - *(float *)(this + 40)
                                + *(float *)(this + 28);
                            v35 = (double)(unsigned int)v30 * *(float *)(this + 80)
                                - *(float *)(this + 44)
                                + *(float *)(this + 32);
                            v36 = (double)(unsigned int)v53 * *(float *)(this + 84)
                                - *(float *)(this + 48)
                                + *(float *)(this + 36)
                                - v29;
                            if ( v36 * v36 + (v34 - v26) * (v34 - v26) + (v35 - v28) * (v35 - v28) < v20 )
                              *(v33 - 1) = v52 + 1;
                          }
                          if ( !*v33 )
                          {
                            v37 = (double)(v32 - 1) * *(float *)(this + 76)
                                - *(float *)(this + 40)
                                + *(float *)(this + 28);
                            v38 = (double)(unsigned int)v30 * *(float *)(this + 80)
                                - *(float *)(this + 44)
                                + *(float *)(this + 32);
                            v39 = (double)(unsigned int)v53 * *(float *)(this + 84)
                                - *(float *)(this + 48)
                                + *(float *)(this + 36)
                                - v29;
                            if ( v39 * v39 + (v37 - v26) * (v37 - v26) + (v38 - v28) * (v38 - v28) < v20 )
                              *v33 = v52 + 1;
                          }
                          if ( !v33[1] )
                          {
                            v40 = (double)v32 * *(float *)(this + 76) - *(float *)(this + 40) + *(float *)(this + 28);
                            v41 = (double)(unsigned int)v30 * *(float *)(this + 80)
                                - *(float *)(this + 44)
                                + *(float *)(this + 32);
                            v42 = (double)(unsigned int)v53 * *(float *)(this + 84)
                                - *(float *)(this + 48)
                                + *(float *)(this + 36)
                                - v29;
                            if ( v42 * v42 + (v40 - v26) * (v40 - v26) + (v41 - v28) * (v41 - v28) < v20 )
                              v33[1] = v52 + 1;
                          }
                          if ( !v33[2] )
                          {
                            v43 = (double)(v32 + 1) * *(float *)(this + 76)
                                - *(float *)(this + 40)
                                + *(float *)(this + 28);
                            v44 = (double)(unsigned int)v30 * *(float *)(this + 80)
                                - *(float *)(this + 44)
                                + *(float *)(this + 32);
                            v45 = (double)(unsigned int)v53 * *(float *)(this + 84)
                                - *(float *)(this + 48)
                                + *(float *)(this + 36)
                                - v29;
                            if ( v45 * v45 + (v43 - v26) * (v43 - v26) + (v44 - v28) * (v44 - v28) < v20 )
                              v33[2] = v52 + 1;
                          }
                          v22 += 4;
                          v33 += 4;
                          v32 += 4;
                        }
                        while ( v22 <= v55 - 3 );
                        v27 = v55;
                      }
                      if ( v22 <= v27 )
                      {
                        v46 = &v61[v63 + v22 + v31];
                        do
                        {
                          if ( !*v46 )
                          {
                            v47 = (double)(unsigned int)v22 * *(float *)(this + 76)
                                - *(float *)(this + 40)
                                + *(float *)(this + 28);
                            v48 = (double)(unsigned int)v30 * *(float *)(this + 80)
                                - *(float *)(this + 44)
                                + *(float *)(this + 32);
                            v49 = (double)(unsigned int)v53 * *(float *)(this + 84)
                                - *(float *)(this + 48)
                                + *(float *)(this + 36)
                                - v29;
                            if ( v49 * v49 + (v47 - v26) * (v47 - v26) + (v48 - v28) * (v48 - v28) < v20 )
                            {
                              v27 = v55;
                              *v46 = v52 + 1;
                            }
                          }
                          ++v22;
                          ++v46;
                        }
                        while ( v22 <= v27 );
                      }
                      v22 = v56;
                      ++v30;
                    }
                    while ( v30 <= v67 );
                    v23 = v65;
                  }
                  ++v53;
                }
                while ( v53 <= v58 );
              }
              v13 = v64 + 1;
              v9 = v66 + 1;
              v50 = v64 + 1 < a3;
              ++v66;
              ++v64;
            }
            while ( v50 );
          }
        }
        if ( v61 )
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v61);
        sub_100118F0(this, (int)v82);
        sub_10011260((unsigned int *)this, FileName, FileName_4);
        sub_10012490((_DWORD *)this);
        sub_1001AB10(v86);
        sub_10018570(v82);
        NxReportCooking();
        return 1;
      }
      else
      {
        if ( a7 )
          (**a7)(
            a7,
            4,
            "PenetrationMap::Create: Opcode tree creation failed",
            "g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\PenetrationMap.cpp",
            1093);
        sub_10018570(v82);
        NxReportCooking();
        return 0;
      }
    }
  }
  if ( (unsigned __int8)sub_10014D60(FileName_4) == 80
    && (unsigned __int8)sub_10014D60(FileName_4) == 77
    && (unsigned __int8)sub_10014D60(FileName_4) == 65
    && (unsigned __int8)sub_10014D60(FileName_4) == 80 )
  {
    if ( sub_10014D80(FileName_4) != 4 )
    {
      if ( a7 )
        (**a7)(
          a7,
          4,
          "PenetrationMap::Create: the pmap file is invalid (bad version number)",
          "g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\PenetrationMap.cpp",
          1015);
      return 0;
    }
    sub_1000D700(
      206,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\PenetrationMap.cpp",
      1019,
      0,
      "NxCreatePMap: PMaps are legacy objects and should not be used.",
      v51);
    a3 = sub_10014D80(FileName_4);
    goto LABEL_16;
  }
  if ( a7 )
    (**a7)(
      a7,
      4,
      "PenetrationMap::Create: the pmap file is invalid (bad header)",
      "g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\PenetrationMap.cpp",
      1008);
  return 0;
}
