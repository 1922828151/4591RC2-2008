/*
 * func-name: ?CalculatePRTSum@World@@IAEXQAY0CE@MKAAV?$vector@PAVLight@@V?$allocator@PAVLight@@@std@@@std@@AAVMatrix@@@Z
 * func-address: 0x10116ff0
 * callers: 0x101177c0, 0x10117a10
 * callees: 0x10019470, 0x1004c240, 0x10076ef0, 0x101780fe, 0x1017818e, 0x10178194, 0x1017819a, 0x101781a0, 0x101781a6, 0x101781ac, 0x10178c20, 0x10178c30, 0x10179840, 0x101a251c, 0x101a2780
 */

unsigned int __thiscall World::CalculatePRTSum(int this, char *a2, int a3, _DWORD *a4, const void *a5)
{
  int v6; // ebx
  unsigned int v7; // edi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  float *v12; // eax
  float v13; // edx
  int v14; // eax
  int v15; // ebx
  int v16; // ecx
  float *v17; // eax
  double v18; // st7
  double v19; // st5
  int v20; // ecx
  int v21; // eax
  float *v22; // ecx
  double v23; // st7
  double v24; // st7
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  _BYTE *v28; // esi
  unsigned int result; // eax
  unsigned int i; // edi
  int v31; // ecx
  int v32; // ecx
  int v33; // esi
  int v34; // ebx
  int v35; // ecx
  int v36; // ecx
  int v37; // ebx
  int v38; // ecx
  int v39; // ecx
  int v40; // ebx
  float v42; // [esp+94h] [ebp-2650h]
  float v43; // [esp+94h] [ebp-2650h]
  int v44; // [esp+94h] [ebp-2650h]
  int v45; // [esp+98h] [ebp-264Ch]
  _BYTE *v46; // [esp+9Ch] [ebp-2648h]
  _BYTE *v47; // [esp+A0h] [ebp-2644h]
  float v48; // [esp+A4h] [ebp-2640h]
  float v49; // [esp+A8h] [ebp-263Ch]
  float v50; // [esp+A8h] [ebp-263Ch]
  float v51; // [esp+ACh] [ebp-2638h]
  float v52; // [esp+ACh] [ebp-2638h]
  int v53; // [esp+B0h] [ebp-2634h]
  float v54; // [esp+B4h] [ebp-2630h] BYREF
  float v55; // [esp+B8h] [ebp-262Ch]
  float v56; // [esp+BCh] [ebp-2628h]
  int v57; // [esp+C0h] [ebp-2624h]
  float v58; // [esp+C4h] [ebp-2620h] BYREF
  float v59; // [esp+C8h] [ebp-261Ch]
  float v60; // [esp+CCh] [ebp-2618h]
  float v61; // [esp+D0h] [ebp-2614h] BYREF
  float v62; // [esp+D4h] [ebp-2610h]
  float v63; // [esp+D8h] [ebp-260Ch]
  float v64; // [esp+DCh] [ebp-2608h]
  float v65; // [esp+E0h] [ebp-2604h]
  float v66; // [esp+E4h] [ebp-2600h]
  float v67; // [esp+ECh] [ebp-25F8h]
  float v68; // [esp+F0h] [ebp-25F4h]
  float v69; // [esp+F4h] [ebp-25F0h]
  float v70; // [esp+F8h] [ebp-25ECh]
  float v71; // [esp+FCh] [ebp-25E8h]
  float v72; // [esp+100h] [ebp-25E4h]
  float v73[16]; // [esp+104h] [ebp-25E0h] BYREF
  _BYTE v74[64]; // [esp+144h] [ebp-25A0h] BYREF
  char v75[64]; // [esp+184h] [ebp-2560h] BYREF
  _BYTE v76[144]; // [esp+1C4h] [ebp-2520h] BYREF
  _BYTE v77[144]; // [esp+254h] [ebp-2490h] BYREF
  _BYTE v78[144]; // [esp+2E4h] [ebp-2400h] BYREF
  _BYTE v79[144]; // [esp+374h] [ebp-2370h] BYREF
  _BYTE v80[144]; // [esp+404h] [ebp-22E0h] BYREF
  _BYTE v81[288]; // [esp+494h] [ebp-2250h] BYREF
  _BYTE v82[8496]; // [esp+5B4h] [ebp-2130h] BYREF

  memset(a2, 0, 0x1B0u);
  qmemcpy(v74, a5, sizeof(v74));
  sub_10178C20(v74);
  v6 = 0;
  v45 = 0;
  v7 = 0;
  if ( std::vector<Model *>::size(a4) )
  {
    v47 = v82;
    v46 = v82;
    do
    {
      if ( v6 >= 20 )
        break;
      v8 = a4[1];
      if ( !v8 || v7 >= (a4[2] - v8) >> 2 )
        invalid_parameter_noinfo();
      v9 = a4[1];
      if ( *(_DWORD *)(v9 + 4 * v7) )
      {
        if ( !v9 || v7 >= (a4[2] - v9) >> 2 )
          invalid_parameter_noinfo();
        v10 = a4[1];
        if ( *(_DWORD *)(*(_DWORD *)(v10 + 4 * v7) + 1432) )
        {
          if ( !v10 || v7 >= (a4[2] - v10) >> 2 )
            invalid_parameter_noinfo();
          v11 = a4[1];
          v12 = *(float **)(v11 + 4 * v7);
          v13 = v12[214];
          v12 += 214;
          v58 = v13;
          v59 = v12[1];
          v60 = v12[2];
          if ( !v11 || v7 >= (a4[2] - v11) >> 2 )
            invalid_parameter_noinfo();
          v14 = a4[1];
          v15 = *(_DWORD *)(v14 + 4 * v7) + 1076;
          if ( !v14 || v7 >= (a4[2] - v14) >> 2 )
            invalid_parameter_noinfo();
          v16 = a4[1];
          v17 = *(float **)(v16 + 4 * v7);
          v18 = v17[269];
          v17 += 269;
          v19 = *(float *)(v15 + 16);
          v64 = v18 * v19;
          v65 = v17[1] * v19;
          v66 = v19 * v17[2];
          if ( !v16 || v7 >= (a4[2] - v16) >> 2 )
            invalid_parameter_noinfo();
          v20 = a4[1];
          v42 = *(float *)(*(_DWORD *)(v20 + 4 * v7) + 1136);
          if ( !v20 || v7 >= (a4[2] - v20) >> 2 )
            invalid_parameter_noinfo();
          v21 = a4[1];
          if ( *(_DWORD *)(*(_DWORD *)(v21 + 4 * v7) + 1428) == 4 )
            goto LABEL_33;
          if ( !v21 || v7 >= (a4[2] - v21) >> 2 )
            invalid_parameter_noinfo();
          v21 = a4[1];
          if ( *(_DWORD *)(*(_DWORD *)(v21 + 4 * v7) + 1428) == 2 )
          {
LABEL_33:
            if ( !v21 || v7 >= (a4[2] - v21) >> 2 )
              invalid_parameter_noinfo();
            v21 = a4[1];
            v22 = *(float **)(v21 + 4 * v7);
            v23 = v22[281];
            v22 += 281;
            v67 = -v23;
            v68 = -v22[1];
            v24 = -v22[2];
            v58 = v67;
            v69 = v24;
            v59 = v68;
            v60 = v69;
          }
          if ( !v21 || v7 >= (a4[2] - v21) >> 2 )
            invalid_parameter_noinfo();
          v25 = a4[1];
          if ( *(_DWORD *)(*(_DWORD *)(v25 + 4 * v7) + 1428) == 1 )
          {
            D3DXVec3Transform(&v54, &v58, v74);
            v49 = v55;
            v62 = v55;
            v51 = v56;
            v61 = v54;
            v63 = v56;
            sub_1004C240(&v61);
            v70 = v61 * v42;
            v71 = v62 * v42;
            v72 = v63 * v42;
            v48 = v54 + v70;
            v54 = v48;
            v57 = v53;
            v50 = v49 + v71;
            v55 = v50;
            v52 = v51 + v72;
            v56 = v52;
            D3DXSHEvalSphericalLight(
              a3,
              &v54,
              LODWORD(v42),
              LODWORD(v64),
              LODWORD(v65),
              LODWORD(v66),
              v46 - 144,
              v46,
              v46 + 144);
          }
          else
          {
            if ( !v25 || v7 >= (a4[2] - v25) >> 2 )
              invalid_parameter_noinfo();
            v26 = a4[1];
            if ( *(_DWORD *)(*(_DWORD *)(v26 + 4 * v7) + 1428) == 4 )
              goto LABEL_49;
            if ( !v26 || v7 >= (a4[2] - v26) >> 2 )
              invalid_parameter_noinfo();
            if ( *(_DWORD *)(*(_DWORD *)(a4[1] + 4 * v7) + 1428) == 2 )
            {
LABEL_49:
              D3DXVec3TransformNormal(&v54, &v58, v74);
              v27 = a4[1];
              v43 = *(float *)(this + 524) * 0.01745329300562541;
              if ( !v27 || v7 >= (a4[2] - v27) >> 2 )
                invalid_parameter_noinfo();
              if ( *(_DWORD *)(*(_DWORD *)(a4[1] + 4 * v7) + 1428) == 2 )
                v43 = *(float *)(*(_DWORD *)std::vector<Model *>::operator[](a4, v7) + 1140);
              D3DXSHEvalConeLight(
                a3,
                &v54,
                LODWORD(v43),
                LODWORD(v64),
                LODWORD(v65),
                LODWORD(v66),
                v47 - 144,
                v47,
                v47 + 144);
            }
          }
          ++v45;
          v46 += 432;
          v6 = v45;
        }
      }
      v47 += 432;
      ++v7;
    }
    while ( v7 < std::vector<Model *>::size(a4) );
  }
  if ( v6 > 0 )
  {
    v28 = v82;
    v44 = v45;
    do
    {
      D3DXSHAdd(a2, a3, a2, v28 - 144);
      D3DXSHAdd(a2 + 144, a3, a2 + 144, v28);
      D3DXSHAdd(a2 + 288, a3, a2 + 288, v28 + 144);
      v28 += 432;
      --v44;
    }
    while ( v44 );
  }
  qmemcpy(v73, (const void *)sub_10179840(v75), sizeof(v73));
  result = sub_10178C30(v73);
  for ( i = 0; ; ++i )
  {
    v31 = *(_DWORD *)(this + 3272);
    if ( !v31 )
      break;
    result = (*(_DWORD *)(this + 3276) - v31) >> 2;
    if ( i >= result )
      break;
    v32 = *(_DWORD *)(this + 3272);
    v33 = 4 * i;
    v34 = 4 * i + v32;
    if ( !v32 || i >= (*(_DWORD *)(this + 3276) - v32) >> 2 )
      invalid_parameter_noinfo();
    D3DXSHScale(v76, a3, *(_DWORD *)(*(_DWORD *)(this + 3272) + 4 * i), *(float *)(*(_DWORD *)v34 + 460));
    v35 = *(_DWORD *)(this + 3272);
    if ( !v35 || i >= (*(_DWORD *)(this + 3276) - v35) >> 2 )
      invalid_parameter_noinfo();
    v36 = *(_DWORD *)(this + 3272);
    v37 = v33 + v36;
    if ( !v36 || i >= (*(_DWORD *)(this + 3276) - v36) >> 2 )
      invalid_parameter_noinfo();
    D3DXSHScale(v77, a3, *(_DWORD *)(*(_DWORD *)(this + 3272) + 4 * i) + 144, *(float *)(*(_DWORD *)v37 + 460));
    v38 = *(_DWORD *)(this + 3272);
    if ( !v38 || i >= (*(_DWORD *)(this + 3276) - v38) >> 2 )
      invalid_parameter_noinfo();
    v39 = *(_DWORD *)(this + 3272);
    v40 = v33 + v39;
    if ( !v39 || i >= (*(_DWORD *)(this + 3276) - v39) >> 2 )
      invalid_parameter_noinfo();
    D3DXSHScale(v78, a3, *(_DWORD *)(v33 + *(_DWORD *)(this + 3272)) + 288, *(float *)(*(_DWORD *)v40 + 460));
    D3DXSHRotate(v79, a3, v73, v76);
    D3DXSHRotate(v80, a3, v73, v77);
    D3DXSHRotate(v81, a3, v73, v78);
    D3DXSHAdd(a2, a3, a2, v79);
    D3DXSHAdd(a2 + 144, a3, a2 + 144, v80);
    result = D3DXSHAdd(a2 + 288, a3, a2 + 288, v81);
  }
  return result;
}
