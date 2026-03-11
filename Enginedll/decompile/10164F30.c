/*
 * func-name: ?EditTerrain@Terrain@@QAEXAAVVector@@@Z
 * func-address: 0x10164f30
 * callers: 0x10169d00
 * callees: 0x100dad30, 0x100db0e0, 0x1015dbd0, 0x1015dc40, 0x1015eca0, 0x1015edf0, 0x10162160, 0x101a26c0
 */

void __thiscall Terrain::EditTerrain(Terrain *this, struct Vector *a2)
{
  Input *v3; // eax
  bool v4; // al
  Input *v5; // eax
  bool v6; // al
  Input *v7; // eax
  bool v8; // al
  int v9; // esi
  double v10; // st7
  int v11; // ebx
  int v12; // eax
  double v13; // st7
  int v14; // edi
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // esi
  double v19; // st7
  Terrain *v20; // ebp
  int *v21; // esi
  double v22; // st6
  int v23; // edi
  int v24; // eax
  int v25; // ecx
  int v26; // esi
  unsigned __int8 v27; // bl
  _DWORD *v28; // esi
  double v29; // st6
  double v30; // st6
  int v31; // ebp
  int v32; // ebx
  int v33; // edi
  int v34; // edx
  int v35; // eax
  _DWORD *v36; // ecx
  double v37; // st7
  int v38; // eax
  int v39; // ecx
  _DWORD *v40; // ecx
  int v41; // eax
  int v42; // esi
  int v43; // kr10_4
  int v44; // kr14_4
  int v45; // eax
  int v46; // ebp
  int v47; // edi
  int v48; // ebx
  int i; // esi
  TerrainNode *Node; // eax
  int v51; // ebx
  int v52; // esi
  Terrain *v53; // ebp
  struct TerrainNode *v54; // eax
  int v55; // [esp-4h] [ebp-68h]
  int v56; // [esp-4h] [ebp-68h]
  int v57; // [esp-4h] [ebp-68h]
  bool v58; // [esp+15h] [ebp-4Fh]
  bool v59; // [esp+16h] [ebp-4Eh]
  bool v60; // [esp+17h] [ebp-4Dh]
  float v61; // [esp+18h] [ebp-4Ch] BYREF
  int v62; // [esp+1Ch] [ebp-48h]
  int v63; // [esp+20h] [ebp-44h]
  Terrain *v64; // [esp+24h] [ebp-40h]
  int v65; // [esp+28h] [ebp-3Ch]
  float v66; // [esp+2Ch] [ebp-38h] BYREF
  int v67; // [esp+30h] [ebp-34h]
  int v68; // [esp+34h] [ebp-30h]
  int v69; // [esp+38h] [ebp-2Ch]
  int v70; // [esp+3Ch] [ebp-28h]
  float v71; // [esp+40h] [ebp-24h]
  int v72; // [esp+44h] [ebp-20h]
  float v73; // [esp+48h] [ebp-1Ch]
  float v74; // [esp+4Ch] [ebp-18h]
  float v75; // [esp+50h] [ebp-14h]
  int v76; // [esp+54h] [ebp-10h]
  int v77; // [esp+5Ch] [ebp-8h]
  int v78; // [esp+60h] [ebp-4h]
  unsigned __int8 v79; // [esp+68h] [ebp+4h]
  struct Vector *v80; // [esp+68h] [ebp+4h]

  v55 = *((_DWORD *)this + 385);
  v64 = this;
  v3 = Input::Instance();
  v4 = Input::ControlDown(v3, v55, 0);
  v56 = *((_DWORD *)this + 386);
  v60 = v4;
  v5 = Input::Instance();
  v6 = Input::ControlDown(v5, v56, 0);
  v57 = *((_DWORD *)this + 384);
  v58 = v6;
  v7 = Input::Instance();
  v8 = Input::ControlDown(v7, v57, 0);
  v9 = *((_DWORD *)this + 340);
  v59 = v8;
  v10 = *((float *)a2 + 2) - *((float *)this + 216);
  v11 = *((_DWORD *)this + 341);
  v70 = (int)((*(float *)a2 - *((float *)this + 214)) / *((float *)this + 361) + (double)((v9 - 1) / 2));
  v12 = (int)(v10 / *((float *)this + 361) + (double)((v11 - 1) / 2));
  v13 = *((float *)this + 378);
  v14 = v12;
  v74 = *(float *)&v12;
  v77 = (int)v13 + v70;
  v15 = v12 - (int)v13;
  v76 = v70 - (int)v13;
  v78 = v12 + (int)v13;
  if ( v76 < 0 )
    v76 = 0;
  if ( v15 < 0 )
    v15 = 0;
  v16 = v77;
  if ( v77 > v9 )
  {
    v16 = v9;
    v77 = v9;
  }
  v17 = v78;
  if ( v78 > v11 )
  {
    v17 = v11;
    v78 = v11;
  }
  if ( v15 < *((_DWORD *)this + 303) )
    *((_DWORD *)this + 303) = v15;
  v18 = v76;
  if ( v76 < *((_DWORD *)this + 302) )
    *((_DWORD *)this + 302) = v76;
  if ( v16 > *((_DWORD *)this + 304) )
    *((_DWORD *)this + 304) = v16;
  if ( v17 > *((_DWORD *)this + 305) )
    *((_DWORD *)this + 305) = v17;
  v19 = 0.0;
  v63 = v15;
  if ( v15 < v17 )
  {
    v69 = v15 - v14;
    while ( 1 )
    {
      v62 = v18;
      if ( v18 < v16 )
        break;
LABEL_73:
      ++v69;
      if ( ++v63 >= v78 )
        goto LABEL_74;
      v16 = v77;
      v18 = v76;
    }
    v20 = v64;
    v71 = (float)v69;
    v68 = v76 - v70;
    while ( 1 )
    {
      v21 = (int *)*((_DWORD *)v20 + 293);
      v22 = *((float *)v20 + 378) + *((float *)v20 + 378);
      v23 = (int)((v71 + *((float *)v20 + 378)) / v22 * (double)v21[9]);
      v24 = (int)(((double)v68 + *((float *)v20 + 378)) / v22 * (double)v21[8]);
      v25 = v21[8];
      if ( v24 < v25 && v23 < v21[9] )
      {
        v26 = v21[10];
        if ( v26 )
          break;
      }
LABEL_72:
      v19 = 0.0;
      ++v68;
      if ( ++v62 >= v77 )
        goto LABEL_73;
    }
    v61 = v19;
    v27 = *(_BYTE *)(v26 + v23 * v25 + v24);
    if ( v59 && v58 )
    {
      v28 = (_DWORD *)((char *)v20 + 1352);
      if ( sub_1015DBD0((_DWORD *)v20 + 338, v62, v63, &v61) && v61 > -100000.0 )
        v61 = v61 - 200000.0;
LABEL_62:
      v38 = v28[2];
      if ( v62 < v38 && v63 < v28[3] && v62 >= 0 && v63 >= 0 )
      {
        v39 = v28[5];
        if ( v39 )
        {
          *(float *)(v39 + 4 * (v62 + v63 * v38)) = v61;
        }
        else if ( v28[7] )
        {
          v40 = (_DWORD *)v28[7];
          if ( v40 )
            sub_1015DC40(v40, v62 + *v28, v63 + v28[1], v61);
        }
      }
      goto LABEL_72;
    }
    if ( v60 && v58 )
    {
      v28 = (_DWORD *)((char *)v20 + 1352);
      if ( sub_1015DBD0((_DWORD *)v20 + 338, v62, v63, &v61) )
        v61 = (double)v27 / 255.0 * *((float *)v20 + 379);
      goto LABEL_62;
    }
    if ( v59 )
    {
      v28 = (_DWORD *)((char *)v20 + 1352);
      if ( sub_1015DBD0((_DWORD *)v20 + 338, v62, v63, &v61) && v61 < 100000.0 )
        v61 = v61 + 200000.0;
      goto LABEL_62;
    }
    if ( !v58 )
    {
      v28 = (_DWORD *)((char *)v20 + 1352);
      sub_1015DBD0((_DWORD *)v20 + 338, v62, v63, &v61);
      if ( v60 )
        v61 = v61 - *((float *)v20 + 379) * (double)v27 * 0.001;
      else
        v61 = *((float *)v20 + 379) * (double)v27 * 0.001 + v61;
      goto LABEL_62;
    }
    v29 = *((float *)v64 + 379) * 0.009999999776482582;
    v65 = 0;
    v30 = v29 * (double)v27;
    v28 = (_DWORD *)((char *)v64 + 1352);
    v67 = (int)v30;
    v31 = *((_DWORD *)v64 + 340);
    v67 = -2;
    v79 = (int)v30;
    v66 = v19;
LABEL_40:
    v32 = -2;
    v33 = v67 + v63;
    while ( 1 )
    {
      v34 = v32 + v62;
      if ( v32 + v62 < v31 && v33 < v28[3] && v34 >= 0 && v33 >= 0 )
      {
        v35 = v28[5];
        if ( v35 )
        {
          v66 = *(float *)(v35 + 4 * (v34 + v33 * v31));
          goto LABEL_51;
        }
        if ( v28[7] )
        {
          v36 = (_DWORD *)v28[7];
          if ( v36 )
          {
            sub_1015DBD0(v36, v34 + *v28, v33 + v28[1], &v66);
LABEL_51:
            if ( v32 || v67 )
            {
              v65 += v79;
              v72 = v79;
              v37 = (double)v79;
            }
            else
            {
              v65 += 255 - v79;
              v72 = 255 - v79;
              v37 = (double)v72;
            }
            v61 = v37 * v66 + v61;
          }
        }
      }
      if ( ++v32 >= 2 )
      {
        if ( ++v67 >= 2 )
        {
          v20 = v64;
          v61 = v61 / (double)v65;
          goto LABEL_62;
        }
        goto LABEL_40;
      }
    }
  }
LABEL_74:
  v41 = (int)*((float *)v64 + 378);
  v42 = v70;
  v70 = (v70 - v41) / 64;
  v43 = LODWORD(v74) - v41;
  v44 = v41 + v42;
  v45 = (v41 + LODWORD(v74)) / 64;
  v46 = v43 / 64;
  v47 = v44 / 64;
  v80 = (struct Vector *)v45;
  if ( v59 )
  {
    v48 = v43 / 64;
    if ( v46 <= v45 )
    {
      do
      {
        for ( i = v70; i <= v47; ++i )
        {
          Node = Terrain::FindNode(v64, i, v48);
          if ( Node )
            TerrainNode::UpdateIndex(Node);
        }
        ++v48;
      }
      while ( v48 <= (int)v80 );
    }
  }
  v51 = v43 / 64;
  if ( v46 <= (int)v80 )
  {
    do
    {
      v52 = v70;
      if ( v70 <= v47 )
      {
        v53 = v64;
        do
        {
          v54 = Terrain::FindNode(v53, v52, v51);
          if ( v54 )
          {
            v74 = 0.0;
            v75 = 0.0;
            *(float *)&v72 = 0.0;
            v73 = 0.0;
            TerrainNode::UpdateVertex(v54, 1, 0, 0, 0, COERCE_FLOAT(1), COERCE_FLOAT(1), COERCE_INT(0.0), 0.0, 0.0, 0.0);
          }
          ++v52;
        }
        while ( v52 <= v47 );
      }
      ++v51;
    }
    while ( v51 <= (int)v80 );
  }
}
