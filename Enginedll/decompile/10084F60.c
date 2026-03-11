/*
 * func-name: ?AddPrefabInstance@Editor@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10084f60
 * callers: none
 * callees: 0x10001440, 0x10012a30, 0x1004d200, 0x100ee930, 0x10116820, 0x10116c70, 0x101786e0, 0x1017a0b0, 0x101a2500, 0x101a2516, 0x101a251c, 0x101a2534
 */

int __fastcall Editor::AddPrefabInstance(int a1, int a2, char a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  float v9; // edi
  unsigned int v10; // ebx
  PrefabInstance *v11; // eax
  PrefabInstance *v12; // esi
  bool v13; // zf
  unsigned int v14; // ebp
  _DWORD *v15; // esi
  int v16; // esi
  _DWORD *v17; // ecx
  float *WorldBBox; // eax
  unsigned int v19; // ebx
  double v20; // st7
  float v21; // edi
  _DWORD *v22; // edi
  float v23; // edx
  int v24; // eax
  float v25; // ecx
  char v27; // [esp-18h] [ebp-D4h] BYREF
  int v28; // [esp-14h] [ebp-D0h]
  int v29; // [esp-10h] [ebp-CCh]
  int v30; // [esp-Ch] [ebp-C8h]
  int v31; // [esp-8h] [ebp-C4h]
  int v32; // [esp-4h] [ebp-C0h]
  int *v33; // [esp+0h] [ebp-BCh]
  float v34; // [esp+14h] [ebp-A8h]
  int v35; // [esp+18h] [ebp-A4h] BYREF
  float v36; // [esp+1Ch] [ebp-A0h]
  float v37; // [esp+20h] [ebp-9Ch]
  float v38; // [esp+24h] [ebp-98h]
  float v39; // [esp+28h] [ebp-94h]
  int v40; // [esp+2Ch] [ebp-90h] BYREF
  void *v41; // [esp+30h] [ebp-8Ch]
  unsigned int v42; // [esp+34h] [ebp-88h]
  int v43; // [esp+38h] [ebp-84h]
  float v44; // [esp+3Ch] [ebp-80h]
  float v45; // [esp+40h] [ebp-7Ch]
  float v46; // [esp+44h] [ebp-78h]
  float v47[4]; // [esp+48h] [ebp-74h] BYREF
  float v48; // [esp+58h] [ebp-64h]
  float v49; // [esp+5Ch] [ebp-60h]
  float v50; // [esp+60h] [ebp-5Ch]
  float v51; // [esp+64h] [ebp-58h]
  float v52; // [esp+68h] [ebp-54h]
  float v53; // [esp+6Ch] [ebp-50h]
  float v54[16]; // [esp+70h] [ebp-4Ch] BYREF
  int v55; // [esp+B8h] [ebp-4h]

  v9 = *(float *)&a1;
  v34 = *(float *)&a1;
  v10 = 0;
  v55 = 1;
  *(float *)&v11 = COERCE_FLOAT(operator new(0x4B0u));
  v37 = *(float *)&v11;
  if ( *(float *)&v11 == 0.0 )
    *(float *)&v12 = 0.0;
  else
    *(float *)&v12 = COERCE_FLOAT(PrefabInstance::PrefabInstance(v11, *(struct World **)(LODWORD(v9) + 2048)));
  v37 = COERCE_FLOAT(&v27);
  LOBYTE(v55) = 0;
  std::string::string(&v27, &a3);
  PrefabInstance::LoadModel(v27, v28, v29, v30, v31, v32, v33);
  v13 = *((_BYTE *)v12 + 442) == 0;
  v35 = (int)v12;
  if ( !v13 )
  {
    if ( !*((_BYTE *)v12 + 441) )
    {
      v33 = &v35;
      *(_BYTE *)(LODWORD(v9) + 2060) = 1;
      std::vector<Actor *>::push_back((_DWORD *)(LODWORD(v9) + 2244), v33);
    }
    *((_BYTE *)v12 + 441) = 1;
  }
  v41 = 0;
  v42 = 0;
  v43 = 0;
  LOBYTE(v55) = 2;
  v35 = (int)v12;
  std::vector<Actor *>::push_back(&v40, &v35);
  sub_10001440(v47);
  v14 = v42;
  v37 = 0.0;
  v15 = v41;
  v38 = 0.0;
  v39 = 0.0;
  v48 = 0.0;
  v49 = 0.0;
  v50 = 0.0;
  LOBYTE(v55) = 3;
  v51 = 0.0;
  v52 = 0.0;
  v53 = 0.0;
  while ( *(float *)&v15 != 0.0 && v10 < (int)(v14 - (_DWORD)v15) >> 2 )
  {
    if ( *(_DWORD *)(v15[v10] + 716) )
    {
      if ( v10 >= (int)(v14 - (_DWORD)v15) >> 2 )
      {
        invalid_parameter_noinfo();
        v15 = v41;
      }
      v16 = *(_DWORD *)(v15[v10] + 716);
      memset(v54, 0, sizeof(v54));
      sub_101786E0(1.0);
      v54[15] = 1.0;
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v16 + 32))(v16, v54);
      v17 = v41;
      if ( !v41 || v10 >= (int)(v42 - (_DWORD)v41) >> 2 )
      {
        invalid_parameter_noinfo();
        v17 = v41;
      }
      WorldBBox = (float *)StaticModel::GetWorldBBox(*(_DWORD *)(v17[v10] + 716), v54);
      sub_1004D200(v47, WorldBBox);
      sub_1017A0B0(v54);
      v14 = v42;
      v15 = v41;
      v9 = v34;
      ++v10;
    }
    else
    {
      if ( v10 >= (int)(v14 - (_DWORD)v15) >> 2 )
      {
        invalid_parameter_noinfo();
        v14 = v42;
        v15 = v41;
      }
      sub_1004D200(v47, (float *)(v15[v10] + 768));
      v9 = v34;
      ++v10;
    }
  }
  v34 = v51 + v48;
  *(float *)&v35 = v49 + v52;
  v36 = v50 + v53;
  v34 = v34 * 0.5;
  *(float *)&v35 = *(float *)&v35 * 0.5;
  v36 = 0.5 * v36;
  v37 = v34 - v51;
  v34 = *(float *)&v35 - v52;
  v36 = v36 - v53;
  v37 = v34 * v34 + v37 * v37 + v36 * v36;
  v37 = sqrt(v37);
  *(float *)&v35 = v37;
  if ( 0.0 == v37 )
    *(float *)&v35 = 1.0;
  v19 = 0;
  v37 = *(float *)&v35 * 3.0;
  v20 = v37;
  v37 = *(float *)(LODWORD(v9) + 628) * v37;
  v36 = *(float *)(LODWORD(v9) + 632) * v20;
  v34 = v20 * *(float *)(LODWORD(v9) + 636);
  v37 = v37 + *(float *)(LODWORD(v9) + 604);
  v36 = *(float *)(LODWORD(v9) + 608) + v36;
  v34 = *(float *)(LODWORD(v9) + 612) + v34;
  v44 = v37;
  v45 = v36;
  v46 = v34;
  while ( *(float *)&v15 != 0.0 && (int)(v14 - (_DWORD)v15) >> 2 > v19 )
  {
    v21 = *(float *)&v15;
    if ( (unsigned int)v15 > v14 )
    {
      invalid_parameter_noinfo();
      v14 = v42;
      v15 = v41;
    }
    v38 = v21;
    v22 = (_DWORD *)(LODWORD(v21) + 4 * v19);
    v37 = COERCE_FLOAT(&v40);
    if ( (unsigned int)v22 > v14 || v22 < v15 )
      invalid_parameter_noinfo();
    if ( (unsigned int)v22 >= *(_DWORD *)(LODWORD(v37) + 8) )
      invalid_parameter_noinfo();
    v23 = v45;
    v24 = *v22 + 856;
    *(float *)v24 = v44;
    v25 = v46;
    *(float *)(v24 + 4) = v23;
    *(float *)(v24 + 8) = v25;
    v14 = v42;
    v15 = v41;
    ++v19;
  }
  LOBYTE(v55) = 2;
  sub_1017A0B0(v47);
  if ( v41 )
    operator delete(v41);
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v55 = -1;
  return std::string::~string(&a3);
}
