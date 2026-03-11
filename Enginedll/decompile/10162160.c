/*
 * func-name: ?UpdateIndex@TerrainNode@@QAE_NXZ
 * func-address: 0x10162160
 * callers: 0x1008e470, 0x10164f30, 0x101658e0
 * callees: 0x10057850, 0x10057890, 0x1009dd90, 0x1015d490, 0x1015dbd0, 0x1015f2a0, 0x1016a500, 0x1016a550, 0x1016b870, 0x101a2500
 */

char __thiscall TerrainNode::UpdateIndex(TerrainNode *this)
{
  TerrainNode *v1; // ebp
  bool v2; // zf
  struct Mesh *Mesh; // eax
  ModelFrame *v5; // ecx
  struct Mesh *v6; // eax
  ModelFrame *v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // esi
  int v12; // edi
  int i; // esi
  int v14; // eax
  int v15; // ecx
  _DWORD *v16; // ecx
  int VertexCodeComplete; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  _DWORD *v21; // ecx
  int v22; // eax
  int v23; // ecx
  __int16 v24; // dx
  _WORD *v25; // ebp
  __int16 v26; // ax
  _WORD *v27; // edi
  _WORD *v28; // esi
  _WORD *j; // eax
  _WORD *v30; // ebp
  _WORD *v31; // edi
  _WORD *v32; // esi
  _WORD *k; // eax
  _WORD *v34; // ebp
  _WORD *v35; // edi
  _WORD *v36; // esi
  _WORD *m; // eax
  _DWORD *v38; // edi
  _DWORD *v39; // esi
  _DWORD *v40; // eax
  _DWORD *v41; // ebp
  int v42; // edi
  _DWORD *v43; // ebp
  _WORD *v44; // ebp
  _WORD *v45; // edi
  _WORD *v46; // esi
  _WORD *n; // eax
  _WORD *v48; // ebp
  _WORD *v49; // edi
  _WORD *v50; // esi
  _WORD *ii; // eax
  _WORD *v52; // ebp
  _WORD *v53; // edi
  _WORD *v54; // esi
  _WORD *jj; // eax
  struct Mesh *v56; // ecx
  __int16 v57; // dx
  _WORD *v58; // ebp
  __int16 v59; // ax
  _WORD *v60; // edi
  _WORD *v61; // esi
  _WORD *kk; // eax
  _WORD *v63; // ebp
  _WORD *v64; // edi
  _WORD *v65; // esi
  _WORD *mm; // eax
  _WORD *v67; // ebp
  _WORD *v68; // edi
  _WORD *v69; // esi
  _WORD *nn; // eax
  _DWORD *v71; // edi
  _DWORD *v72; // esi
  _DWORD *v73; // eax
  _DWORD *v74; // ebp
  int v75; // edi
  _DWORD *v76; // ebp
  _WORD *v77; // ebp
  _WORD *v78; // edi
  _WORD *v79; // esi
  _WORD *i1; // eax
  _WORD *v81; // ebp
  _WORD *v82; // edi
  _WORD *v83; // esi
  _WORD *i2; // eax
  _WORD *v85; // ebp
  _WORD *v86; // edi
  _WORD *v87; // esi
  _WORD *i3; // eax
  char *v89; // esi
  __int16 *v90; // edi
  __int16 v91; // ax
  char *v92; // ebp
  __int16 v93; // cx
  char **v94; // eax
  char *v95; // ebx
  char *v96; // esi
  __int16 *v97; // edi
  __int16 v98; // ax
  char *v99; // ebp
  __int16 v100; // cx
  char **v101; // eax
  char *v102; // ebx
  int v103; // [esp+10h] [ebp-78h] BYREF
  struct Mesh *v104; // [esp+14h] [ebp-74h] BYREF
  TerrainNode *v105; // [esp+18h] [ebp-70h]
  struct Mesh *v106; // [esp+1Ch] [ebp-6Ch] BYREF
  int v107; // [esp+20h] [ebp-68h] BYREF
  struct Mesh *v108; // [esp+24h] [ebp-64h] BYREF
  __int16 v109; // [esp+28h] [ebp-60h] BYREF
  __int16 v110; // [esp+2Ah] [ebp-5Eh]
  int v111; // [esp+2Ch] [ebp-5Ch]
  int v112[2]; // [esp+30h] [ebp-58h] BYREF
  int v113; // [esp+38h] [ebp-50h] BYREF
  void *v114; // [esp+3Ch] [ebp-4Ch]
  unsigned int v115; // [esp+40h] [ebp-48h]
  int v116; // [esp+44h] [ebp-44h]
  int v117; // [esp+48h] [ebp-40h] BYREF
  void *v118; // [esp+4Ch] [ebp-3Ch]
  unsigned int v119; // [esp+50h] [ebp-38h]
  int v120; // [esp+54h] [ebp-34h]
  int v121; // [esp+58h] [ebp-30h] BYREF
  void *v122; // [esp+5Ch] [ebp-2Ch]
  unsigned int v123; // [esp+60h] [ebp-28h]
  int v124; // [esp+64h] [ebp-24h]
  int v125; // [esp+68h] [ebp-20h] BYREF
  void *v126; // [esp+6Ch] [ebp-1Ch]
  unsigned int v127; // [esp+70h] [ebp-18h]
  int v128; // [esp+74h] [ebp-14h]
  int v129; // [esp+84h] [ebp-4h]

  v1 = this;
  v2 = *((_DWORD *)this + 316) == 0;
  v105 = this;
  if ( v2 )
    return 0;
  Mesh = ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 0);
  v5 = *(ModelFrame **)(*((_DWORD *)v1 + 179) + 308);
  v104 = Mesh;
  v6 = ModelFrame::GetMesh(v5, 1u);
  v7 = *(ModelFrame **)(*((_DWORD *)v1 + 179) + 308);
  v106 = v6;
  v108 = ModelFrame::GetMesh(v7, 2u);
  TerrainNode::FillIndex(v1, &v104, &v106, &v108);
  v8 = 0;
  v126 = 0;
  v127 = 0;
  v128 = 0;
  v9 = 0;
  v129 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  v10 = 0;
  v122 = 0;
  v123 = 0;
  v124 = 0;
  v11 = 0;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v2 = *(_BYTE *)(*((_DWORD *)v1 + 178) + 80) == 0;
  LOBYTE(v129) = 3;
  if ( v2 )
  {
    v12 = 0;
    while ( 1 )
    {
      for ( i = 0; i < 65; ++i )
      {
        v14 = *((_DWORD *)v1 + 298);
        if ( i < v14 && v12 < *((_DWORD *)v1 + 299) && i >= 0 && v12 >= 0 )
        {
          v15 = *((_DWORD *)v1 + 301);
          if ( v15 )
          {
            v103 = *(int *)(v15 + 4 * (i + v12 * v14));
          }
          else
          {
            if ( !*((_DWORD *)v1 + 303) )
              goto LABEL_23;
            v16 = (_DWORD *)*((_DWORD *)v1 + 303);
            if ( !v16 )
              goto LABEL_23;
            sub_1015DBD0(v16, i + *((_DWORD *)v1 + 296), v12 + *((_DWORD *)v1 + 297), (float *)&v103);
          }
          if ( *(float *)&v103 < -100000.0 )
          {
            VertexCodeComplete = TerrainNode::GetVertexCodeComplete(i, v12);
            if ( VertexCodeComplete != -1 )
            {
              v108 = (struct Mesh *)(unsigned __int16)VertexCodeComplete;
              sub_1016B870((int)&v125, (int)&v108);
            }
            if ( (i & 0x80000001) == 0 && (v12 & 0x80000001) == 0 )
            {
              v18 = i / 2 + 33 * (v12 / 2);
              if ( v18 != -1 )
              {
                v108 = (struct Mesh *)(unsigned __int16)v18;
                sub_1016B870((int)&v113, (int)&v108);
              }
            }
          }
        }
LABEL_23:
        v19 = *((_DWORD *)v1 + 298);
        if ( i < v19 && v12 < *((_DWORD *)v1 + 299) && i >= 0 && v12 >= 0 )
        {
          v20 = *((_DWORD *)v1 + 301);
          if ( v20 )
          {
            v103 = *(int *)(v20 + 4 * (i + v12 * v19));
          }
          else
          {
            if ( !*((_DWORD *)v1 + 303) )
              continue;
            v21 = (_DWORD *)*((_DWORD *)v1 + 303);
            if ( !v21 )
              continue;
            sub_1015DBD0(v21, i + *((_DWORD *)v1 + 296), v12 + *((_DWORD *)v1 + 297), (float *)&v103);
          }
          if ( *(float *)&v103 > 100000.0 )
          {
            v22 = TerrainNode::GetVertexCodeComplete(i, v12);
            if ( v22 != -1 )
            {
              v108 = (struct Mesh *)(unsigned __int16)v22;
              sub_1016B870((int)&v121, (int)&v108);
            }
            if ( (i & 0x80000001) == 0 && (v12 & 0x80000001) == 0 )
            {
              v23 = i / 2 + 33 * (v12 / 2);
              if ( v23 != -1 )
              {
                v108 = (struct Mesh *)(unsigned __int16)v23;
                sub_1016B870((int)&v117, (int)&v108);
              }
            }
          }
        }
      }
      if ( ++v12 >= 65 )
      {
        v8 = v127;
        v9 = v115;
        v10 = v123;
        v11 = v119;
        break;
      }
    }
  }
  if ( v104 && (v126 && (int)(v8 - (_DWORD)v126) >> 1 || v122 && (int)(v10 - (_DWORD)v122) >> 1) )
  {
    v103 = (*(int (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)v104 + 136))(v104, &v107) + 4;
    v108 = (struct Mesh *)8064;
    do
    {
      v24 = *(_WORD *)(v103 - 2);
      v25 = (_WORD *)v127;
      v26 = *(_WORD *)v103;
      v109 = *(_WORD *)(v103 - 4);
      v110 = v24;
      LOWORD(v111) = v26;
      if ( (unsigned int)v126 > v127 )
        invalid_parameter_noinfo();
      v27 = (_WORD *)v127;
      if ( (unsigned int)v126 > v127 )
        invalid_parameter_noinfo();
      v28 = v126;
      if ( (unsigned int)v126 > v127 )
        invalid_parameter_noinfo();
      for ( j = v28; j != v27; ++j )
      {
        if ( *j == *(_WORD *)(v103 - 4) )
          break;
      }
      if ( j != v25 )
      {
        v30 = (_WORD *)v127;
        if ( (unsigned int)v126 > v127 )
          invalid_parameter_noinfo();
        v31 = (_WORD *)v127;
        if ( (unsigned int)v126 > v127 )
          invalid_parameter_noinfo();
        v32 = v126;
        if ( (unsigned int)v126 > v127 )
          invalid_parameter_noinfo();
        for ( k = v32; k != v31; ++k )
        {
          if ( *k == *(_WORD *)(v103 - 2) )
            break;
        }
        if ( k != v30 )
        {
          v34 = (_WORD *)v127;
          if ( (unsigned int)v126 > v127 )
            invalid_parameter_noinfo();
          v35 = (_WORD *)v127;
          if ( (unsigned int)v126 > v127 )
            invalid_parameter_noinfo();
          v36 = v126;
          if ( (unsigned int)v126 > v127 )
            invalid_parameter_noinfo();
          for ( m = v36; m != v35; ++m )
          {
            if ( *m == *(_WORD *)v103 )
              break;
          }
          if ( m != v34 )
          {
            v38 = (_DWORD *)*((_DWORD *)v105 + 309);
            v39 = (_DWORD *)((char *)v105 + 1232);
            v40 = (_DWORD *)sub_1016A500(v112, (char *)v105 + 1232, *v38, (char *)v105 + 1232, v38, &v109);
            v41 = (_DWORD *)v40[1];
            if ( v39 != (_DWORD *)*v40 )
              invalid_parameter_noinfo();
            if ( v41 == v38 )
            {
              v42 = v39[1];
              v43 = sub_10057850(v42, *(_DWORD *)(v42 + 4), (int)&v109);
              sub_10057890(v39, 1u);
              *(_DWORD *)(v42 + 4) = v43;
              *(_DWORD *)v43[1] = v43;
            }
          }
        }
      }
      v44 = (_WORD *)v123;
      if ( (unsigned int)v122 > v123 )
        invalid_parameter_noinfo();
      v45 = (_WORD *)v123;
      if ( (unsigned int)v122 > v123 )
        invalid_parameter_noinfo();
      v46 = v122;
      if ( (unsigned int)v122 > v123 )
        invalid_parameter_noinfo();
      for ( n = v46; n != v45; ++n )
      {
        if ( *n == *(_WORD *)(v103 - 4) )
          break;
      }
      if ( n != v44 )
      {
        v48 = (_WORD *)v123;
        if ( (unsigned int)v122 > v123 )
          invalid_parameter_noinfo();
        v49 = (_WORD *)v123;
        if ( (unsigned int)v122 > v123 )
          invalid_parameter_noinfo();
        v50 = v122;
        if ( (unsigned int)v122 > v123 )
          invalid_parameter_noinfo();
        for ( ii = v50; ii != v49; ++ii )
        {
          if ( *ii == *(_WORD *)(v103 - 2) )
            break;
        }
        if ( ii != v48 )
        {
          v52 = (_WORD *)v123;
          if ( (unsigned int)v122 > v123 )
            invalid_parameter_noinfo();
          v53 = (_WORD *)v123;
          if ( (unsigned int)v122 > v123 )
            invalid_parameter_noinfo();
          v54 = v122;
          if ( (unsigned int)v122 > v123 )
            invalid_parameter_noinfo();
          for ( jj = v54; jj != v53; ++jj )
          {
            if ( *jj == *(_WORD *)v103 )
              break;
          }
          if ( jj != v52 )
            sub_1016A550(&v109);
        }
      }
      v103 += 6;
      v108 = (struct Mesh *)((char *)v108 - 1);
    }
    while ( v108 );
    (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v104 + 140))(v104);
    v9 = v115;
    v11 = v119;
    v1 = v105;
  }
  v56 = v106;
  if ( v106 && (v114 && (int)(v9 - (_DWORD)v114) >> 1 || v118 && (int)(v11 - (_DWORD)v118) >> 1) )
  {
    v103 = (*(int (__stdcall **)(int *))(*(_DWORD *)v106 + 136))(&v107) + 4;
    v108 = (struct Mesh *)2560;
    do
    {
      v57 = *(_WORD *)(v103 - 2);
      v58 = (_WORD *)v115;
      v59 = *(_WORD *)v103;
      v109 = *(_WORD *)(v103 - 4);
      v110 = v57;
      LOWORD(v111) = v59;
      if ( (unsigned int)v114 > v115 )
        invalid_parameter_noinfo();
      v60 = (_WORD *)v115;
      if ( (unsigned int)v114 > v115 )
        invalid_parameter_noinfo();
      v61 = v114;
      if ( (unsigned int)v114 > v115 )
        invalid_parameter_noinfo();
      for ( kk = v61; kk != v60; ++kk )
      {
        if ( *kk == *(_WORD *)(v103 - 4) )
          break;
      }
      if ( kk != v58 )
      {
        v63 = (_WORD *)v115;
        if ( (unsigned int)v114 > v115 )
          invalid_parameter_noinfo();
        v64 = (_WORD *)v115;
        if ( (unsigned int)v114 > v115 )
          invalid_parameter_noinfo();
        v65 = v114;
        if ( (unsigned int)v114 > v115 )
          invalid_parameter_noinfo();
        for ( mm = v65; mm != v64; ++mm )
        {
          if ( *mm == *(_WORD *)(v103 - 2) )
            break;
        }
        if ( mm != v63 )
        {
          v67 = (_WORD *)v115;
          if ( (unsigned int)v114 > v115 )
            invalid_parameter_noinfo();
          v68 = (_WORD *)v115;
          if ( (unsigned int)v114 > v115 )
            invalid_parameter_noinfo();
          v69 = v114;
          if ( (unsigned int)v114 > v115 )
            invalid_parameter_noinfo();
          for ( nn = v69; nn != v68; ++nn )
          {
            if ( *nn == *(_WORD *)v103 )
              break;
          }
          if ( nn != v67 )
          {
            v71 = (_DWORD *)*((_DWORD *)v105 + 312);
            v72 = (_DWORD *)((char *)v105 + 1244);
            v73 = (_DWORD *)sub_1016A500(v112, (char *)v105 + 1244, *v71, (char *)v105 + 1244, v71, &v109);
            v74 = (_DWORD *)v73[1];
            if ( v72 != (_DWORD *)*v73 )
              invalid_parameter_noinfo();
            if ( v74 == v71 )
            {
              v75 = v72[1];
              v76 = sub_10057850(v75, *(_DWORD *)(v75 + 4), (int)&v109);
              sub_10057890(v72, 1u);
              *(_DWORD *)(v75 + 4) = v76;
              *(_DWORD *)v76[1] = v76;
            }
          }
        }
      }
      v77 = (_WORD *)v119;
      if ( (unsigned int)v118 > v119 )
        invalid_parameter_noinfo();
      v78 = (_WORD *)v119;
      if ( (unsigned int)v118 > v119 )
        invalid_parameter_noinfo();
      v79 = v118;
      if ( (unsigned int)v118 > v119 )
        invalid_parameter_noinfo();
      for ( i1 = v79; i1 != v78; ++i1 )
      {
        if ( *i1 == *(_WORD *)(v103 - 4) )
          break;
      }
      if ( i1 != v77 )
      {
        v81 = (_WORD *)v119;
        if ( (unsigned int)v118 > v119 )
          invalid_parameter_noinfo();
        v82 = (_WORD *)v119;
        if ( (unsigned int)v118 > v119 )
          invalid_parameter_noinfo();
        v83 = v118;
        if ( (unsigned int)v118 > v119 )
          invalid_parameter_noinfo();
        for ( i2 = v83; i2 != v82; ++i2 )
        {
          if ( *i2 == *(_WORD *)(v103 - 2) )
            break;
        }
        if ( i2 != v81 )
        {
          v85 = (_WORD *)v119;
          if ( (unsigned int)v118 > v119 )
            invalid_parameter_noinfo();
          v86 = (_WORD *)v119;
          if ( (unsigned int)v118 > v119 )
            invalid_parameter_noinfo();
          v87 = v118;
          if ( (unsigned int)v118 > v119 )
            invalid_parameter_noinfo();
          for ( i3 = v87; i3 != v86; ++i3 )
          {
            if ( *i3 == *(_WORD *)v103 )
              break;
          }
          if ( i3 != v85 )
            sub_1016A550(&v109);
        }
      }
      v103 += 6;
      v108 = (struct Mesh *)((char *)v108 - 1);
    }
    while ( v108 );
    (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v106 + 140))(v106);
    v1 = v105;
    v56 = v106;
  }
  if ( v104 && *((_DWORD *)v1 + 310) )
  {
    v89 = (char *)v1 + 1232;
    v90 = (__int16 *)(*(int (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)v104 + 136))(v104, &v107);
    v108 = (struct Mesh *)8064;
    do
    {
      v91 = v90[2];
      v92 = (char *)*((_DWORD *)v89 + 1);
      v93 = *v90;
      v110 = v90[1];
      LOWORD(v111) = v91;
      v109 = v93;
      v94 = (char **)sub_1016A500(v112, v89, *(_DWORD *)v92, v89, v92, &v109);
      v95 = v94[1];
      if ( v89 != *v94 )
        invalid_parameter_noinfo();
      if ( v95 != v92 )
      {
        *(_DWORD *)v90 = 0;
        v90[2] = 0;
      }
      v90 += 3;
      v108 = (struct Mesh *)((char *)v108 - 1);
    }
    while ( v108 );
    (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v104 + 140))(v104);
    v1 = v105;
    v56 = v106;
  }
  if ( v56 && *((_DWORD *)v1 + 313) )
  {
    v96 = (char *)v1 + 1244;
    v97 = (__int16 *)(*(int (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)v106 + 136))(v106, &v107);
    v108 = (struct Mesh *)2560;
    do
    {
      v98 = *v97;
      v99 = (char *)*((_DWORD *)v96 + 1);
      v100 = v97[1];
      LOWORD(v111) = v97[2];
      v109 = v98;
      v110 = v100;
      v101 = (char **)sub_1016A500(v112, v96, *(_DWORD *)v99, v96, v99, &v109);
      v102 = v101[1];
      if ( v96 != *v101 )
        invalid_parameter_noinfo();
      if ( v102 != v99 )
      {
        *(_DWORD *)v97 = 0;
        v97[2] = 0;
      }
      v97 += 3;
      v108 = (struct Mesh *)((char *)v108 - 1);
    }
    while ( v108 );
    (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v106 + 140))(v106);
  }
  if ( v118 )
    operator delete(v118);
  v118 = 0;
  v119 = 0;
  v120 = 0;
  if ( v122 )
    operator delete(v122);
  v122 = 0;
  v123 = 0;
  v124 = 0;
  if ( v114 )
    operator delete(v114);
  v114 = 0;
  v115 = 0;
  v116 = 0;
  if ( v126 )
    operator delete(v126);
  return 1;
}
