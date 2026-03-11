/*
 * func-name: sub_100FAA40
 * func-address: 0x100faa40
 * callers: 0x100fd750
 * callees: 0x10076ef0, 0x100ec7b0, 0x100ec7e0, 0x100ed6f0, 0x100fa9e0, 0x100fe5f0, 0x100feca0, 0x100fed60, 0x100fee10, 0x101a2500
 */

unsigned int __thiscall sub_100FAA40(_DWORD *this, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // edi
  unsigned int result; // eax
  float v6; // eax
  int v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // esi
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // esi
  int v14; // eax
  double v15; // st6
  double v16; // st7
  float v17; // esi
  char **v18; // edi
  int v19; // ecx
  float v20; // esi
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // esi
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // esi
  int v28; // eax
  int v29; // ecx
  unsigned int v30; // esi
  int v31; // eax
  double v32; // st6
  double v33; // st7
  float v34; // esi
  char **v35; // edi
  unsigned int v36; // esi
  int v37; // ecx
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  unsigned int v41; // esi
  int v42; // [esp-10h] [ebp-10Ch]
  unsigned int v43; // [esp+Ch] [ebp-F0h]
  float v44; // [esp+Ch] [ebp-F0h]
  float v45; // [esp+Ch] [ebp-F0h]
  float v46; // [esp+Ch] [ebp-F0h]
  unsigned int v47; // [esp+Ch] [ebp-F0h]
  float v48; // [esp+10h] [ebp-ECh] BYREF
  float v49; // [esp+14h] [ebp-E8h]
  unsigned int v50; // [esp+18h] [ebp-E4h]
  unsigned int v51; // [esp+1Ch] [ebp-E0h]
  char v52[4]; // [esp+20h] [ebp-DCh] BYREF
  void *v53; // [esp+24h] [ebp-D8h]
  int v54; // [esp+28h] [ebp-D4h]
  float v55; // [esp+2Ch] [ebp-D0h]
  float v56; // [esp+30h] [ebp-CCh]
  _DWORD *v57; // [esp+34h] [ebp-C8h]
  unsigned int v58; // [esp+38h] [ebp-C4h]
  unsigned int v59; // [esp+3Ch] [ebp-C0h]
  char *v60; // [esp+44h] [ebp-B8h]
  char *v61; // [esp+4Ch] [ebp-B0h]
  char v62[8]; // [esp+50h] [ebp-ACh] BYREF
  char v63[8]; // [esp+58h] [ebp-A4h] BYREF
  char v64[8]; // [esp+60h] [ebp-9Ch] BYREF
  char v65[12]; // [esp+68h] [ebp-94h] BYREF
  char v66[12]; // [esp+74h] [ebp-88h] BYREF
  float v67[14]; // [esp+80h] [ebp-7Ch] BYREF
  float v68[14]; // [esp+B8h] [ebp-44h] BYREF
  int v69; // [esp+F8h] [ebp-4h]

  v57 = this;
  v4 = 0;
  v50 = 0;
  result = std::vector<Model *>::size(a3);
  if ( result )
  {
    while ( 1 )
    {
      v53 = (void *)sub_100FE5F0(v52);
      *((_BYTE *)v53 + 17) = 1;
      *((_DWORD *)v53 + 1) = v53;
      *(_DWORD *)v53 = v53;
      *((_DWORD *)v53 + 2) = v53;
      v54 = 0;
      v6 = 0.0;
      v69 = 0;
      v56 = 0.0;
      while ( 1 )
      {
        v59 = LODWORD(v6) + 1;
        LODWORD(v55) = LODWORD(v6) + 1;
        if ( LODWORD(v6) == 2 )
          v55 = 0.0;
        v7 = a3[1];
        v8 = LODWORD(v6) + v4;
        v51 = LODWORD(v6) + v4;
        if ( !v7 || v8 >= (a3[2] - v7) >> 2 )
          invalid_parameter_noinfo();
        v9 = *(_DWORD *)(a3[1] + 4 * v8);
        v10 = a2[1];
        if ( !v10 || v9 >= (a2[2] - v10) / 56 )
          invalid_parameter_noinfo();
        v11 = a3[1];
        v12 = LODWORD(v55) + v4;
        v49 = *(float *)(a2[1] + 56 * v9 + 24);
        v58 = v12;
        if ( !v11 || v12 >= (a3[2] - v11) >> 2 )
          invalid_parameter_noinfo();
        v13 = *(_DWORD *)(a3[1] + 4 * v12);
        v14 = a2[1];
        if ( !v14 || v13 >= (a2[2] - v14) / 56 )
          invalid_parameter_noinfo();
        v48 = *(float *)(a2[1] + 56 * v13 + 24);
        v15 = v49;
        if ( v49 <= 1.0 )
        {
          v16 = v48;
          if ( v48 <= 1.0 && v15 >= 0.0 && v16 >= 0.0 )
          {
            v49 = v15 - v16;
            v49 = fabs(v49);
            if ( v49 > 0.5 )
            {
              v17 = v56;
              v48 = v56;
              if ( v15 > v16 )
              {
                v17 = v55;
                v48 = v55;
              }
              v60 = (char *)v53;
              v18 = (char **)sub_100FED60(v64, &v48);
              if ( !*v18 || *v18 != v52 )
                invalid_parameter_noinfo();
              if ( v18[1] == v60 )
              {
                v19 = a3[1];
                LODWORD(v20) = v50 + LODWORD(v17);
                v49 = v20;
                if ( !v19 || LODWORD(v20) >= (a3[2] - v19) >> 2 )
                  invalid_parameter_noinfo();
                v43 = *(_DWORD *)(a3[1] + 4 * LODWORD(v20));
                qmemcpy(v67, (const void *)sub_100EC7E0(a2, v43), sizeof(v67));
                sub_100FECA0(v65, &v48);
                v21 = a3[1];
                v67[6] = v67[6] + 1.0;
                if ( !v21 || LODWORD(v49) >= (a3[2] - v21) >> 2 )
                  invalid_parameter_noinfo();
                v22 = sub_100EC7B0(a2);
                *(_DWORD *)(a3[1] + 4 * LODWORD(v49)) = v22;
                sub_100ED6F0(a2, v67);
                sub_100FA9E0(v43, v57[12], a4);
                v12 = v58;
              }
              else
              {
                v23 = v50 + LODWORD(v17);
                v24 = a3[1];
                if ( !v24 || v23 >= (a3[2] - v24) >> 2 )
                  invalid_parameter_noinfo();
                v25 = sub_100EC7E0(a2, *(_DWORD *)(a3[1] + 4 * v23));
                v12 = v58;
                *(float *)(v25 + 24) = *(float *)(v25 + 24) + 1.0;
              }
            }
          }
        }
        v26 = a3[1];
        if ( !v26 || v51 >= (a3[2] - v26) >> 2 )
          invalid_parameter_noinfo();
        v27 = *(_DWORD *)(a3[1] + 4 * v51);
        v28 = a2[1];
        if ( !v28 || v27 >= (a2[2] - v28) / 56 )
          invalid_parameter_noinfo();
        v29 = a3[1];
        v44 = *(float *)(a2[1] + 56 * v27 + 28);
        if ( !v29 || v12 >= (a3[2] - v29) >> 2 )
          invalid_parameter_noinfo();
        v30 = *(_DWORD *)(a3[1] + 4 * v12);
        v31 = a2[1];
        if ( !v31 || v30 >= (a2[2] - v31) / 56 )
          invalid_parameter_noinfo();
        v51 = *(unsigned int *)(a2[1] + 56 * v30 + 28);
        v32 = v44;
        if ( v44 <= 1.0 )
        {
          v33 = *(float *)&v51;
          if ( *(float *)&v51 <= 1.0 && v32 >= 0.0 && v33 >= 0.0 )
          {
            v45 = v32 - v33;
            v46 = fabs(v45);
            if ( v46 > 0.5 )
            {
              v34 = v56;
              v48 = v56;
              if ( v32 > v33 )
              {
                v34 = v55;
                v48 = v55;
              }
              v61 = (char *)v53;
              v35 = (char **)sub_100FED60(v63, &v48);
              if ( !*v35 || *v35 != v52 )
                invalid_parameter_noinfo();
              v36 = v50 + LODWORD(v34);
              v37 = a3[1];
              if ( v35[1] == v61 )
              {
                v51 = v36;
                if ( !v37 || v36 >= (a3[2] - v37) >> 2 )
                  invalid_parameter_noinfo();
                v47 = *(_DWORD *)(a3[1] + 4 * v36);
                qmemcpy(v68, (const void *)sub_100EC7E0(a2, v47), sizeof(v68));
                sub_100FECA0(v66, &v48);
                v38 = a3[1];
                v68[7] = v68[7] + 1.0;
                if ( !v38 || v51 >= (a3[2] - v38) >> 2 )
                  invalid_parameter_noinfo();
                v39 = sub_100EC7B0(a2);
                *(_DWORD *)(a3[1] + 4 * v51) = v39;
                sub_100ED6F0(a2, v68);
                sub_100FA9E0(v47, v57[12], a4);
              }
              else
              {
                if ( !v37 || v36 >= (a3[2] - v37) >> 2 )
                  invalid_parameter_noinfo();
                v40 = sub_100EC7E0(a2, *(_DWORD *)(a3[1] + 4 * v36));
                *(float *)(v40 + 28) = *(float *)(v40 + 28) + 1.0;
              }
            }
          }
        }
        v56 = *(float *)&v59;
        if ( v59 >= 3 )
          break;
        v6 = v56;
        v4 = v50;
      }
      v42 = *(_DWORD *)v53;
      v69 = -1;
      sub_100FEE10(v62, v52, v42, v52, v53);
      operator delete(v53);
      v53 = 0;
      v54 = 0;
      v50 += 3;
      v41 = v50;
      result = std::vector<Model *>::size(a3);
      if ( v41 >= result )
        break;
      v4 = v50;
    }
  }
  return result;
}
