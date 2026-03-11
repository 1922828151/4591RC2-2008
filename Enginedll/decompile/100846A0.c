/*
 * func-name: ?MergePrefabs@Editor@@QAEXXZ
 * func-address: 0x100846a0
 * callers: none
 * callees: 0x10011750, 0x10051b50, 0x1007ea50, 0x1009d930, 0x1009e990, 0x1009f580, 0x1009f940, 0x100eeba0, 0x100f2ca0, 0x101372f0, 0x101786e0, 0x10179590, 0x1017ad40, 0x101a251c, 0x101a2534
 */

void __thiscall Editor::MergePrefabs(struct World **this)
{
  Prefab *v2; // eax
  unsigned int v3; // esi
  int v4; // eax
  int v5; // edi
  _DWORD *v6; // ebp
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  Model *v10; // eax
  unsigned int v11; // esi
  Model *v12; // eax
  Prefab *v13; // edi
  Model *v14; // ecx
  void (__thiscall *v15)(Model *); // eax
  ModelFrame *v16; // eax
  ModelFrame *v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  double v22; // st7
  struct ModelFrame *v23; // ebx
  int v24; // eax
  bool v25; // zf
  int v26; // esi
  Prefab *v27; // eax
  StaticModel *v28; // ecx
  float v29; // ecx
  float v30; // edx
  int v31; // eax
  int v32; // ecx
  unsigned int i; // esi
  unsigned int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  int v40; // ecx
  char *v41; // edi
  char *v42; // esi
  int v43; // eax
  char *v44; // ebx
  int v45; // ebx
  int v46; // eax
  ModelFrame *v47; // ecx
  int v48; // edi
  unsigned int v49; // eax
  unsigned int v50; // edx
  int *v51; // eax
  char *v52; // esi
  _DWORD v53[11]; // [esp-18h] [ebp-100h] BYREF
  Prefab *v54; // [esp+14h] [ebp-D4h]
  float v55; // [esp+18h] [ebp-D0h]
  float v56; // [esp+1Ch] [ebp-CCh]
  float v57; // [esp+20h] [ebp-C8h]
  struct ModelFrame *v58; // [esp+24h] [ebp-C4h]
  int v59; // [esp+28h] [ebp-C0h] BYREF
  float v60[2]; // [esp+2Ch] [ebp-BCh] BYREF
  float v61; // [esp+34h] [ebp-B4h]
  float v62; // [esp+38h] [ebp-B0h]
  float v63; // [esp+3Ch] [ebp-ACh]
  float v64[16]; // [esp+40h] [ebp-A8h] BYREF
  float v65[16]; // [esp+80h] [ebp-68h] BYREF
  _BYTE v66[28]; // [esp+C0h] [ebp-28h] BYREF
  int v67; // [esp+E4h] [ebp-4h]

  v59 = (int)this;
  *(float *)&v2 = COERCE_FLOAT(operator new(0x494u));
  v60[0] = *(float *)&v2;
  v3 = 0;
  v67 = 0;
  if ( *(float *)&v2 == 0.0 )
    v54 = 0;
  else
    v54 = Prefab::Prefab(v2, this[512]);
  v60[0] = COERCE_FLOAT(v53);
  v67 = -1;
  std::string::string(v53, "MergedPrefabs");
  v4 = sub_1017AD40(v66, v53[0]);
  v67 = 1;
  std::string::operator=((char *)v54 + 444, v4);
  v67 = -1;
  std::string::~string(v66);
  v55 = 0.0;
  v5 = 0;
  v56 = 0.0;
  v6 = this + 561;
  v57 = 0.0;
  while ( 1 )
  {
    v7 = v6[1];
    if ( !v7 || v3 >= (v6[2] - v7) >> 2 )
      break;
    v8 = *(_DWORD *)(v6[1] + 4 * v3);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 716);
      if ( v9 )
      {
        if ( *(_DWORD *)(v9 + 308) )
        {
          ++v5;
          v55 = *(float *)(v8 + 856) + v55;
          v56 = *(float *)(v8 + 860) + v56;
          v57 = *(float *)(v8 + 864) + v57;
        }
      }
    }
    ++v3;
  }
  v58 = (struct ModelFrame *)v5;
  v60[0] = 1.0 / (double)v5;
  v55 = v55 * v60[0];
  v56 = v56 * v60[0];
  v57 = v60[0] * v57;
  *(float *)&v10 = COERCE_FLOAT(operator new(0x1C8u));
  v60[0] = *(float *)&v10;
  *(float *)&v11 = 0.0;
  v67 = 2;
  if ( *(float *)&v10 == 0.0 )
    v12 = 0;
  else
    v12 = Model::Model(v10);
  v13 = v54;
  *((_DWORD *)v54 + 179) = v12;
  v14 = v12;
  v15 = *(void (__thiscall **)(Model *))(*(_DWORD *)v12 + 8);
  v67 = -1;
  v15(v14);
  *(float *)&v16 = COERCE_FLOAT(operator new(0x1C8u));
  v60[0] = *(float *)&v16;
  v67 = 3;
  if ( *(float *)&v16 == 0.0 )
    v17 = 0;
  else
    v17 = ModelFrame::ModelFrame(v16, *((struct StaticModel **)v13 + 179));
  *(_DWORD *)(*((_DWORD *)v13 + 179) + 308) = v17;
  v18 = *(_DWORD *)(*((_DWORD *)v13 + 179) + 308);
  v67 = -1;
  std::string::operator=(v18 + 44, "RootFrame");
  *(_BYTE *)(*((_DWORD *)v13 + 179) + 312) = 1;
  v58 = 0;
  while ( 1 )
  {
    v19 = v6[1];
    v60[0] = *(float *)&v11;
    if ( !v19 || v11 >= (v6[2] - v19) >> 2 )
      break;
    v20 = *(_DWORD *)(v6[1] + 4 * v11);
    if ( v20 && (v21 = *(_DWORD *)(v20 + 716)) != 0 && *(_DWORD *)(v21 + 308) )
    {
      v22 = *(float *)(v20 + 856) - v55;
      v53[6] = 0;
      v61 = v22;
      v53[5] = 1;
      v62 = *(float *)(v20 + 860) - v56;
      v63 = *(float *)(v20 + 864) - v57;
      qmemcpy(v64, (const void *)(v20 + 868), sizeof(v64));
      v64[12] = v61;
      v64[13] = v62;
      v64[14] = v63;
      v23 = ModelFrame::Clone(*(ModelFrame **)(*(_DWORD *)(v20 + 716) + 308), *((struct StaticModel **)v54 + 179), 1, 0);
      memset(v65, 0, sizeof(v65));
      sub_101786E0(1.0);
      v65[15] = 1.0;
      sub_10179590(v64, (char *)v23 + 100, v65);
      v24 = (int)v58;
      v25 = v58 == 0;
      qmemcpy((char *)v23 + 100, v65, 0x40u);
      if ( v25 )
      {
        v27 = v54;
        v11 = LODWORD(v60[0]);
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v54 + 179) + 308) + 360) = v23;
        v58 = v23;
        v13 = v27;
        goto LABEL_29;
      }
      if ( *(_DWORD *)(v24 + 356) )
        v24 = sub_1007EA50(*(_DWORD *)(v24 + 356));
      v26 = LODWORD(v60[0]);
      v13 = v54;
      *(_DWORD *)(v24 + 356) = v23;
      v58 = v23;
      v11 = v26 + 1;
    }
    else
    {
LABEL_29:
      ++v11;
    }
  }
  v28 = (StaticModel *)*((_DWORD *)v13 + 179);
  *((_DWORD *)v13 + 183) = 2;
  StaticModel::UpdateWorldBBox(v28);
  v29 = v56;
  v30 = v57;
  *((float *)v13 + 214) = v55;
  v31 = *(_DWORD *)v13;
  *((float *)v13 + 215) = v29;
  v32 = *((_DWORD *)v13 + 179);
  *((float *)v13 + 216) = v30;
  (*(void (__thiscall **)(Prefab *, int))(v31 + 92))(v13, v32);
  *((_BYTE *)v13 + 440) = 1;
  for ( i = 0; ; ++i )
  {
    v34 = v6[1];
    if ( !v34 || i >= (int)(v6[2] - v34) >> 2 )
      break;
    v35 = v6[1];
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v35 + 4 * i) + 716) + 308) )
    {
      if ( !v35 || i >= (v6[2] - v35) >> 2 )
        invalid_parameter_noinfo();
      ModelFrame::FreeContents(*(ModelFrame **)(*(_DWORD *)(*(_DWORD *)(v6[1] + 4 * i) + 716) + 308), 0);
    }
    v36 = v6[1];
    if ( !v36 || i >= (v6[2] - v36) >> 2 )
      invalid_parameter_noinfo();
    *(_BYTE *)(*(_DWORD *)(v6[1] + 4 * i) + 441) = 0;
    v37 = v6[1];
    if ( !v37 || i >= (v6[2] - v37) >> 2 )
      invalid_parameter_noinfo();
    v38 = v6[1];
    if ( *(_DWORD *)(v38 + 4 * i) )
    {
      if ( !v38 || i >= (v6[2] - v38) >> 2 )
        invalid_parameter_noinfo();
      v39 = *(_DWORD *)(v6[1] + 4 * i);
      if ( v39 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v39 + 80))(v39, 1);
      v40 = v6[1];
      if ( !v40 || i >= (v6[2] - v40) >> 2 )
        invalid_parameter_noinfo();
      *(_DWORD *)(v6[1] + 4 * i) = 0;
    }
  }
  v41 = (char *)v6[2];
  if ( v34 > (unsigned int)v41 )
    invalid_parameter_noinfo();
  v42 = (char *)v6[1];
  if ( (unsigned int)v42 > v6[2] )
    invalid_parameter_noinfo();
  if ( v42 != v41 )
  {
    v43 = (v6[2] - (int)v41) >> 2;
    v44 = &v42[4 * v43];
    if ( v43 > 0 )
      memmove_s(v42, 4 * v43, v41, 4 * v43);
    v6[2] = v44;
  }
  v45 = (int)v54;
  v46 = *((_DWORD *)v54 + 179);
  if ( v46 && (v47 = *(ModelFrame **)(v46 + 308)) != 0 )
  {
    v48 = v59;
    ModelFrame::FixNames(v47, *(struct World **)(v59 + 2048), 0);
  }
  else
  {
    v48 = v59;
  }
  v25 = *(_BYTE *)(v45 + 442) == 0;
  v59 = v45;
  if ( !v25 )
  {
    if ( !*(_BYTE *)(v45 + 441) )
    {
      *(_BYTE *)(v48 + 2060) = 1;
      v49 = v6[1];
      if ( v49 )
        v50 = (int)(v6[2] - v49) >> 2;
      else
        v50 = 0;
      if ( v49 && v50 < (int)(v6[3] - v49) >> 2 )
      {
        v51 = (int *)v6[2];
        *v51 = v45;
        v6[2] = v51 + 1;
      }
      else
      {
        v52 = (char *)v6[2];
        if ( v49 > (unsigned int)v52 )
          invalid_parameter_noinfo();
        std::vector<Actor *>::insert(v6, v60, v6, v52, &v59);
      }
    }
    *(_BYTE *)(v45 + 441) = 1;
  }
  World::RegenerateOcclusionTree(*(World **)(v48 + 2048));
}
