/*
 * func-name: ?AddCloth@ClothSimulator@@QAEXPAVMesh@@@Z
 * func-address: 0x100769d0
 * callers: 0x10076e80
 * callees: 0x10077010, 0x100779c0, 0x100956d0, 0x100e8cd0, 0x101189f0, 0x10135650, 0x10178098, 0x101a2534
 */

void __thiscall ClothSimulator::AddCloth(ClothSimulator *this, struct Mesh *a2)
{
  void *v2; // eax
  int v3; // ebp
  _DWORD *v4; // ebx
  bool v5; // zf
  struct VertexManager *v6; // esi
  struct RenderDevice *v7; // eax
  int v8; // eax
  float *v9; // ebx
  float v10; // edi
  double v11; // st5
  double v12; // st2
  double v13; // rt1
  int v14; // edx
  float *v15; // ecx
  float v16; // esi
  double v17; // st1
  double v18; // st5
  double v19; // st1
  double v20; // rtt
  double v21; // st1
  double v22; // rt0
  double v23; // rt2
  double v24; // st2
  double v25; // st5
  double v26; // st1
  double v27; // st2
  int v28; // esi
  double v29; // st7
  int v30; // ecx
  double v31; // st4
  double v32; // rtt
  int v33; // edi
  double v34; // rt0
  double v35; // st4
  double v36; // st7
  double v37; // st4
  double v38; // st3
  unsigned int v39; // ecx
  double v40; // st2
  double v41; // rt1
  int v42; // esi
  double v43; // st0
  __int16 v44; // dx
  double v45; // st1
  double v46; // st3
  double v47; // st2
  double v48; // st4
  _DWORD *v49; // ebp
  double v50; // st7
  unsigned int i; // edi
  int v52; // esi
  int v53; // ecx
  float v54; // edx
  int v55; // eax
  float v56; // ecx
  int j; // edi
  int v58; // esi
  int v59; // ecx
  unsigned int v60; // ebx
  int v61; // esi
  bool v62; // dl
  unsigned int v63; // ecx
  unsigned int v64; // edx
  _DWORD *v65; // eax
  void *v66; // edi
  int v67; // [esp+18h] [ebp-40h]
  int v68; // [esp+1Ch] [ebp-3Ch]
  float v69; // [esp+28h] [ebp-30h] BYREF
  _DWORD *v70; // [esp+2Ch] [ebp-2Ch]
  int v71; // [esp+30h] [ebp-28h]
  int v72; // [esp+34h] [ebp-24h] BYREF
  int v73; // [esp+3Ch] [ebp-1Ch] BYREF
  float v74; // [esp+40h] [ebp-18h]
  float v75; // [esp+44h] [ebp-14h]
  float v76; // [esp+48h] [ebp-10h]
  float v77; // [esp+4Ch] [ebp-Ch]
  float v78; // [esp+54h] [ebp-4h]
  float v79; // [esp+5Ch] [ebp+4h]
  struct Mesh *v80; // [esp+5Ch] [ebp+4h]

  v72 = (int)this;
  v2 = operator new(0x88C8u);
  v3 = 0;
  if ( v2 )
  {
    v4 = (_DWORD *)sub_10077010(v2);
    v70 = v4;
  }
  else
  {
    v70 = 0;
    v4 = 0;
  }
  v5 = (dword_10284F28 & 1) == 0;
  v4[2] = a2;
  *v4 = 25;
  v73 = (int)v4;
  v4[1] = 25;
  if ( v5 )
  {
    dword_10284F28 |= 1u;
    dword_10284F1C = 24;
    dword_10284F20 = 624;
    dword_10284F24 = 600;
  }
  v6 = VertexManager::Instance();
  v7 = RenderDevice::Instance();
  v8 = (*(int (__thiscall **)(struct VertexManager *, int, _DWORD, _DWORD *))(*(_DWORD *)v6 + 20))(
         v6,
         56,
         *((_DWORD *)v7 + 427),
         v4 + 3);
  if ( D3DXCreateMesh(3456, 625, 3264, *(_DWORD *)(v8 + 4), v67, v68) < 0 )
    Error("D3DXCreateMesh failed");
  v9 = (float *)(v4 + 16);
  v75 = 12.0 + 0.0;
  v10 = v75;
  v11 = 0.0;
  v12 = 25.0;
  while ( 1 )
  {
    v14 = 0;
    v15 = v9;
    v78 = (12.0 - v11) * 0.1599999964237213;
    v76 = v78 + 0.0;
    v16 = v76;
    v17 = v11;
    v18 = 0.0;
    v79 = v17 / 24.0;
    v19 = v79;
    while ( 1 )
    {
      ++v14;
      v15 += 350;
      v77 = (v18 - 12.0) * 0.1599999964237213;
      v74 = v77 + 0.0;
      *(v15 - 362) = v74;
      *(v15 - 361) = v10;
      *(v15 - 360) = v16;
      *(v15 - 350) = v18 / 24.0;
      v23 = v12;
      v24 = v19;
      v25 = v23;
      *(v15 - 349) = v19;
      v26 = (double)v14;
      if ( v26 >= v23 )
        break;
      v20 = v26;
      v21 = v25;
      v18 = v20;
      v22 = v21;
      v19 = v24;
      v12 = v22;
    }
    v27 = (double)++v3;
    v9 += 14;
    if ( v27 >= v25 )
      break;
    v13 = v27;
    v12 = v25;
    v11 = v13;
  }
  v28 = 0;
  (*(void (__stdcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v70[3] + 68))(v70[3], 0, &v69);
  v29 = 0.0;
  v30 = 0;
  v31 = 24.0;
  while ( 1 )
  {
    v33 = v30 + 1;
    v34 = v31;
    v35 = v29;
    v36 = v34;
    v37 = v35 * 25.0;
    v80 = (struct Mesh *)(v30 + 1);
    v38 = 0.0;
    v39 = 1;
    v40 = (double)(int)v80 * 25.0;
    while ( 1 )
    {
      v42 = v28 + 2;
      v43 = v38 + v37;
      *(_WORD *)(LODWORD(v69) + 2 * v42 - 4) = (int)v43;
      v44 = (int)(v38 + v40);
      *(_WORD *)(LODWORD(v69) + 2 * v42 - 2) = v44;
      v45 = (double)v39++;
      v28 = v42 + 4;
      *(_WORD *)(LODWORD(v69) + 2 * v28 - 8) = (int)(v45 + v37);
      *(_WORD *)(LODWORD(v69) + 2 * v28 - 6) = (int)(v43 + 1.0);
      *(_WORD *)(LODWORD(v69) + 2 * v28 - 4) = v44;
      v46 = v40;
      v71 = (int)(v45 + v40);
      *(_WORD *)(LODWORD(v69) + 2 * v28 - 2) = v71;
      v47 = (double)(v39 - 1);
      if ( v47 >= v36 )
        break;
      v41 = v47;
      v40 = v46;
      v38 = v41;
    }
    v30 = v33;
    v48 = (double)v33;
    if ( v48 >= v36 )
      break;
    v32 = v48;
    v31 = v36;
    v29 = v32;
  }
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v70[3] + 72))(v70[3]);
  v49 = (_DWORD *)v72;
  sub_10135650(25, 25, v70 + 4, v70 + 7, 56);
  v50 = 0.0;
  for ( i = 0; ; ++i )
  {
    v52 = v49[8];
    v53 = *(_DWORD *)(v52 + 16);
    if ( !v53 || i >= (*(_DWORD *)(v52 + 20) - v53) >> 2 )
      break;
    v74 = v50;
    v75 = v50;
    v76 = v50;
    if ( i >= (*(_DWORD *)(v52 + 20) - v53) >> 2 )
    {
      invalid_parameter_noinfo();
      v50 = 0.0;
    }
    v54 = v75;
    v55 = *(_DWORD *)(*(_DWORD *)(v52 + 16) + 4 * i) + 8;
    *(float *)v55 = v74;
    v56 = v76;
    *(float *)(v55 + 4) = v54;
    *(float *)(v55 + 8) = v56;
  }
  for ( j = 0; j < 4; ++j )
  {
    v58 = v49[8];
    v59 = *(_DWORD *)(v58 + 16);
    v60 = dword_10284F18[j];
    v61 = v58 + 12;
    if ( !v59 || v60 >= (*(_DWORD *)(v61 + 8) - v59) >> 2 )
      invalid_parameter_noinfo();
    v62 = j < 2;
    *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v61 + 4) + 4 * v60) + 40) = v62;
  }
  v63 = v49[5];
  if ( v63 )
    v64 = (int)(v49[6] - v63) >> 2;
  else
    v64 = 0;
  if ( v63 && v64 < (int)(v49[7] - v63) >> 2 )
  {
    v65 = (_DWORD *)v49[6];
    *v65 = v70;
    v49[6] = v65 + 1;
  }
  else
  {
    v66 = (void *)v49[6];
    if ( v63 > (unsigned int)v66 )
      invalid_parameter_noinfo();
    sub_100779C0((int)&v72, (int)(v49 + 4), v66, (int)&v73);
  }
}
