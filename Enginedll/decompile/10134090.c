/*
 * func-name: ?SplitFacesByBox@FXManager@@SAXAAVBBox@@AAV?$vector@UFace@@V?$allocator@UFace@@@std@@@std@@1@Z_0
 * func-address: 0x10134090
 * callers: 0x1009fc50
 * callees: 0x1000b5c0, 0x1012aff0, 0x1012b010, 0x1012b3d0, 0x10132960, 0x10132b00, 0x101333a0, 0x10133ce0, 0x10134a40, 0x10134bb0, 0x10134cb0, 0x1017a0b0, 0x101a2500
 */

int __cdecl FXManager::SplitFacesByBox(float *a1, float *a2, int a3)
{
  float v3; // eax
  float v4; // ecx
  float v5; // edx
  int v6; // eax
  int v7; // ecx
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  float v11; // ecx
  float v12; // edx
  float v13; // eax
  float v14; // edx
  unsigned int v15; // edi
  int v16; // eax
  int v17; // esi
  int v18; // edi
  int v19; // ebx
  int v20; // esi
  int v21; // eax
  void (__cdecl *v22)(); // ebx
  void *v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // esi
  int v26; // eax
  int v27; // ebx
  void *v28; // edi
  unsigned int v29; // ebx
  unsigned int v30; // esi
  int v31; // eax
  int v32; // edi
  int v33; // eax
  unsigned int v34; // ebx
  int v35; // esi
  int v36; // esi
  int v37; // esi
  int v38; // eax
  int v39; // ecx
  float *v40; // eax
  void *v41; // eax
  float v42; // esi
  _DWORD *v43; // eax
  unsigned int v44; // esi
  unsigned int v45; // edi
  char *v46; // edx
  char *v47; // eax
  int v48; // edi
  char *v49; // edi
  const void *v50; // esi
  unsigned int v51; // esi
  unsigned int v52; // edi
  char *v53; // edx
  char *j; // eax
  char *v55; // edi
  const void *v56; // esi
  _QWORD *v58; // [esp+8h] [ebp-350h]
  _DWORD *i; // [esp+8h] [ebp-350h]
  _DWORD *v60; // [esp+8h] [ebp-350h]
  unsigned int v61; // [esp+Ch] [ebp-34Ch]
  float v62; // [esp+10h] [ebp-348h] BYREF
  float v63; // [esp+14h] [ebp-344h]
  float v64; // [esp+18h] [ebp-340h]
  int k; // [esp+1Ch] [ebp-33Ch]
  int v66; // [esp+20h] [ebp-338h]
  float v67; // [esp+24h] [ebp-334h] BYREF
  float v68; // [esp+28h] [ebp-330h]
  float v69; // [esp+2Ch] [ebp-32Ch]
  _DWORD v70[3]; // [esp+30h] [ebp-328h] BYREF
  float v71[4]; // [esp+3Ch] [ebp-31Ch] BYREF
  float v72; // [esp+4Ch] [ebp-30Ch]
  float v73; // [esp+50h] [ebp-308h]
  float v74; // [esp+54h] [ebp-304h]
  float v75; // [esp+58h] [ebp-300h]
  float v76; // [esp+5Ch] [ebp-2FCh]
  float v77; // [esp+60h] [ebp-2F8h]
  char v78[4]; // [esp+64h] [ebp-2F4h] BYREF
  void *v79; // [esp+68h] [ebp-2F0h]
  int v80; // [esp+6Ch] [ebp-2ECh]
  int v81; // [esp+70h] [ebp-2E8h]
  char v82[4]; // [esp+74h] [ebp-2E4h] BYREF
  void *v83; // [esp+78h] [ebp-2E0h]
  int v84; // [esp+7Ch] [ebp-2DCh]
  int v85; // [esp+80h] [ebp-2D8h]
  _DWORD v86[4]; // [esp+84h] [ebp-2D4h] BYREF
  float v87; // [esp+94h] [ebp-2C4h]
  float v88; // [esp+98h] [ebp-2C0h]
  float v89; // [esp+9Ch] [ebp-2BCh]
  float v90; // [esp+A0h] [ebp-2B8h]
  float v91; // [esp+A4h] [ebp-2B4h]
  float v92; // [esp+A8h] [ebp-2B0h]
  _QWORD v93[49]; // [esp+ACh] [ebp-2ACh] BYREF
  int v94; // [esp+354h] [ebp-4h]

  v62 = 0.0;
  v3 = a1[4];
  v63 = 1.0;
  v4 = a1[5];
  v5 = a1[6];
  v67 = v3;
  v6 = *((_DWORD *)a1 + 7);
  v64 = 0.0;
  v68 = v4;
  v7 = *((_DWORD *)a1 + 8);
  v70[0] = v6;
  v70[1] = v7;
  v69 = v5;
  *(float *)&v70[2] = a1[9];
  sub_10134A40(&v62, &v67);
  v62 = 1.0;
  v63 = 0.0;
  v64 = 0.0;
  sub_10134A40(&v62, &v67);
  v62 = 0.0;
  v63 = 0.0;
  v64 = 1.0;
  sub_10134A40(&v62, &v67);
  v62 = 0.0;
  v63 = -1.0;
  v64 = 0.0;
  sub_10134A40(&v62, v70);
  v62 = -1.0;
  v63 = 0.0;
  v64 = 0.0;
  sub_10134A40(&v62, v70);
  v62 = 0.0;
  v63 = 0.0;
  v64 = -1.0;
  sub_10134A40(&v62, v70);
  v62 = 0.0;
  v63 = -1.0;
  v64 = 0.0;
  sub_10134A40(&v62, &v67);
  v62 = -1.0;
  v63 = 0.0;
  v64 = 0.0;
  sub_10134A40(&v62, &v67);
  v62 = 0.0;
  v63 = 0.0;
  v64 = -1.0;
  sub_10134A40(&v62, &v67);
  v67 = 0.0;
  v68 = 1.0;
  v69 = 0.0;
  sub_10134A40(&v67, v70);
  v67 = 1.0;
  v68 = 0.0;
  v69 = 0.0;
  sub_10134A40(&v67, v70);
  v67 = 0.0;
  v68 = 0.0;
  v69 = 1.0;
  sub_10134A40(&v67, v70);
  v8 = a1[2];
  v9 = a1[3];
  v71[1] = a1[1];
  v10 = a1[4];
  v71[2] = v8;
  v11 = a1[5];
  v71[3] = v9;
  v12 = a1[6];
  v72 = v10;
  v13 = a1[7];
  LODWORD(v71[0]) = &BBox::`vftable';
  v73 = v11;
  v74 = v12;
  v14 = a1[9];
  v76 = a1[8];
  v15 = 0;
  v94 = 0;
  v72 = v72 - 0.009999999776482582;
  v61 = 0;
  v73 = v11 - 0.009999999776482582;
  v74 = v74 - 0.009999999776482582;
  v75 = v13 + 0.009999999776482582;
  v76 = v76 + 0.009999999776482582;
  v77 = v14 + 0.009999999776482582;
  if ( sub_1012AFF0(a2) )
  {
    while ( 1 )
    {
      v16 = *((_DWORD *)a2 + 1);
      if ( !v16 || v15 >= (*((_DWORD *)a2 + 2) - v16) / 176 )
        invalid_parameter_noinfo();
      v17 = *((_DWORD *)a2 + 1);
      v18 = 176 * v15;
      k = v18;
      if ( !sub_101333A0(v71, (float *)(v18 + v17)) )
        goto LABEL_101;
      v19 = 0;
      v58 = v93;
      while ( 1 )
      {
        if ( !v17 || v61 >= (*((_DWORD *)a2 + 2) - v17) / 176 )
          invalid_parameter_noinfo();
        v17 = *((_DWORD *)a2 + 1);
        if ( sub_10132B00((int)v58, (float *)(v18 + v17), 0) )
          break;
        v58 += 7;
        if ( ++v19 >= 6 )
          goto LABEL_48;
      }
      v66 = v19;
      if ( !v17 || v61 >= (*((_DWORD *)a2 + 2) - v17) / 176 )
        invalid_parameter_noinfo();
      v20 = 7 * v19;
      sub_10133CE0((int)v78, (int)&v93[7 * v19], v18 + *((_DWORD *)a2 + 1));
      v21 = *((_DWORD *)a2 + 1);
      LOBYTE(v94) = 1;
      if ( v21 && v61 < (*((_DWORD *)a2 + 2) - v21) / 176 )
      {
        v22 = invalid_parameter_noinfo;
      }
      else
      {
        v22 = invalid_parameter_noinfo;
        invalid_parameter_noinfo();
      }
      sub_10133CE0((int)v82, (int)&v93[v20 + 42], v18 + *((_DWORD *)a2 + 1));
      v23 = v79;
      LOBYTE(v94) = 2;
      v24 = 0;
      for ( i = v79; v23; i += 44 )
      {
        v25 = (v80 - (int)v23) / 176;
        if ( v24 >= v25 )
          break;
        *i = 1;
        v26 = *((_DWORD *)a2 + 1);
        if ( !v26 || v61 >= (*((_DWORD *)a2 + 2) - v26) / 176 )
          v22();
        v27 = k + *((_DWORD *)a2 + 1);
        if ( v24 >= v25 )
          invalid_parameter_noinfo();
        i[1] = *(_DWORD *)(v27 + 4);
        if ( v24 >= v25 )
          invalid_parameter_noinfo();
        sub_10134CB0((int)a2, i);
        v23 = v79;
        v22 = invalid_parameter_noinfo;
        ++v24;
      }
      v28 = v83;
      v29 = 0;
      v60 = v83;
      while ( v28 )
      {
        v30 = (v84 - (int)v28) / 176;
        if ( v29 >= v30 )
        {
          operator delete(v28);
          break;
        }
        *v60 = 2;
        v31 = *((_DWORD *)a2 + 1);
        if ( !v31 || v61 >= (*((_DWORD *)a2 + 2) - v31) / 176 )
          invalid_parameter_noinfo();
        v32 = k + *((_DWORD *)a2 + 1);
        if ( v29 >= v30 )
          invalid_parameter_noinfo();
        v60[1] = *(_DWORD *)(v32 + 4);
        if ( v29 >= v30 )
          invalid_parameter_noinfo();
        sub_10134CB0((int)a2, v60);
        v28 = v83;
        ++v29;
        v60 += 44;
      }
      v83 = 0;
      v84 = 0;
      v85 = 0;
      LOBYTE(v94) = 0;
      if ( v79 )
        operator delete(v79);
      v19 = v66;
      v18 = k;
      v79 = 0;
      v80 = 0;
      v81 = 0;
LABEL_48:
      if ( v19 != 6 )
      {
        v51 = *((_DWORD *)a2 + 1);
        if ( v51 > *((_DWORD *)a2 + 2) )
          invalid_parameter_noinfo();
        v52 = v51 + v18;
        if ( v52 > *((_DWORD *)a2 + 2) || v52 < *((_DWORD *)a2 + 1) )
          invalid_parameter_noinfo();
        v53 = (char *)*((_DWORD *)a2 + 2);
        for ( j = (char *)(v52 + 176); j != v53; j += 176 )
        {
          v55 = j - 176;
          v56 = j;
          qmemcpy(v55, v56, 0xB0u);
        }
        *((_DWORD *)a2 + 2) -= 176;
        --v61;
LABEL_101:
        v34 = v61;
        goto LABEL_102;
      }
      v33 = *((_DWORD *)a2 + 1);
      v34 = v61;
      if ( !v33 || v61 >= (*((_DWORD *)a2 + 2) - v33) / 176 )
        invalid_parameter_noinfo();
      v35 = *((_DWORD *)a2 + 1);
      k = sub_10132960(a1, (float *)(v18 + v35 + 8));
      if ( !v35 || v61 >= (*((_DWORD *)a2 + 2) - v35) / 176 )
        invalid_parameter_noinfo();
      v36 = *((_DWORD *)a2 + 1);
      v66 = sub_10132960(a1, (float *)(v18 + v36 + 64));
      if ( !v36 || v61 >= (*((_DWORD *)a2 + 2) - v36) / 176 )
        invalid_parameter_noinfo();
      v37 = *((_DWORD *)a2 + 1);
      v38 = sub_10132960(a1, (float *)(v18 + v37 + 120));
      if ( k == 1 || v66 == 1 || v38 == 1 )
      {
        v39 = k;
        if ( !k || !v66 || !v38 )
        {
          if ( !v37 || v61 >= (*((_DWORD *)a2 + 2) - v37) / 176 )
            invalid_parameter_noinfo();
          sub_10134CB0(a3, (void *)(v18 + *((_DWORD *)a2 + 1)));
          goto LABEL_102;
        }
      }
      else
      {
        v39 = k;
      }
      if ( v39 == 1 || v66 == 1 || v38 == 1 )
      {
        if ( !v37 || v61 >= (*((_DWORD *)a2 + 2) - v37) / 176 )
          invalid_parameter_noinfo();
        sub_10134CB0(a3, (void *)(v18 + *((_DWORD *)a2 + 1)));
        v44 = *((_DWORD *)a2 + 1);
        if ( v44 > *((_DWORD *)a2 + 2) )
          invalid_parameter_noinfo();
        v45 = v44 + v18;
        if ( v45 > *((_DWORD *)a2 + 2) || v45 < *((_DWORD *)a2 + 1) )
          invalid_parameter_noinfo();
        v46 = (char *)*((_DWORD *)a2 + 2);
        v47 = (char *)(v45 + 176);
        if ( (char *)(v45 + 176) != v46 )
        {
          v48 = -176;
          for ( k = -176; ; v48 = k )
          {
            v49 = &v47[v48];
            v50 = v47;
            v47 += 176;
            qmemcpy(v49, v50, 0xB0u);
            if ( v47 == v46 )
              break;
          }
        }
        *((_DWORD *)a2 + 2) -= 176;
        v34 = v61 - 1;
      }
      else if ( v39 && v66 && v38 )
      {
        sub_1000B5C0(v86, a1);
        LOBYTE(v94) = 3;
        v87 = v87 - 0.001000000047497451;
        v88 = v88 - 0.001000000047497451;
        v89 = v89 - 0.001000000047497451;
        v90 = v90 + 0.001000000047497451;
        v91 = v91 + 0.001000000047497451;
        v92 = v92 + 0.001000000047497451;
        v40 = (float *)sub_1012B010(a2, v61);
        if ( sub_101333A0(a1, v40) )
        {
          v41 = (void *)sub_1012B010(a2, v61);
          sub_10134CB0(a3, v41);
          v42 = a2[1];
          if ( LODWORD(v42) > *((_DWORD *)a2 + 2) )
            invalid_parameter_noinfo();
          v62 = *(float *)&a2;
          v63 = v42;
          v43 = sub_1012B3D0((int *)&v62, v70, v61);
          sub_10134BB0(&v67, *v43, v43[1]);
          v34 = v61 - 1;
        }
        LOBYTE(v94) = 0;
        sub_1017A0B0(v86);
      }
LABEL_102:
      v61 = v34 + 1;
      if ( v34 + 1 >= sub_1012AFF0(a2) )
        break;
      v15 = v34 + 1;
    }
  }
  v94 = -1;
  return sub_1017A0B0(v71);
}
