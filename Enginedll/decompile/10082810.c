/*
 * func-name: ?MeshOpSelected@Editor@@QAEXW4Op@MeshOps@@@Z
 * func-address: 0x10082810
 * callers: 0x10085e90
 * callees: 0x10077b70, 0x10078420, 0x1009dd90, 0x1009ed40, 0x1009ee50, 0x101786e0, 0x101a2500, 0x101a251c
 */

void __thiscall Editor::MeshOpSelected(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  unsigned int i; // ebx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // ecx
  unsigned int j; // edi
  ModelFrame **v9; // ecx
  void (__thiscall **v10)(struct MeshOps *, struct Mesh *, int, float *); // esi
  struct Mesh *Mesh; // eax
  int v12; // ecx
  float *v13; // eax
  double v14; // st7
  char *v15; // eax
  int v16; // edx
  ModelFrame **v17; // ebx
  ModelFrame **v18; // esi
  struct Mesh *v19; // eax
  void (__cdecl *v20)(); // esi
  char *v21; // eax
  int v22; // edx
  ModelFrame **v23; // ebx
  char *v24; // esi
  struct Mesh *v25; // eax
  unsigned int v26; // [esp+14h] [ebp-64h]
  char v28[4]; // [esp+1Ch] [ebp-5Ch] BYREF
  void *v29; // [esp+20h] [ebp-58h]
  int v30; // [esp+24h] [ebp-54h]
  int v31; // [esp+28h] [ebp-50h]
  float v32[16]; // [esp+2Ch] [ebp-4Ch] BYREF
  int v33; // [esp+74h] [ebp-4h]

  v2 = this;
  for ( i = 0; ; ++i )
  {
    v4 = v2[562];
    v26 = i;
    if ( !v4 )
      break;
    if ( i >= (v2[563] - v4) >> 2 )
      break;
    v5 = *(_DWORD *)(v2[562] + 4 * i);
    if ( !v5 || !*(_DWORD *)(v5 + 716) )
      break;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v33 = 0;
    ModelFrame::EnumerateMeshes(v28);
    v6 = v30;
    v7 = v29;
    for ( j = 0; v7 && j < (v6 - (int)v7) >> 2; ++j )
    {
      memset(v32, 0, sizeof(v32));
      sub_101786E0(1.0);
      v9 = (ModelFrame **)v29;
      v32[15] = 1.0;
      if ( !v29 || j >= (v30 - (int)v29) >> 2 )
      {
        invalid_parameter_noinfo();
        v9 = (ModelFrame **)v29;
      }
      v10 = *(void (__thiscall ***)(struct MeshOps *, struct Mesh *, int, float *))MeshOps::Instance;
      Mesh = ModelFrame::GetMesh(v9[j], 0);
      (*v10)(MeshOps::Instance, Mesh, a2, v32);
      if ( a2 == 5 && !j )
      {
        v12 = this[562];
        if ( !v12 || v26 >= (this[563] - v12) >> 2 )
          invalid_parameter_noinfo();
        v13 = *(float **)(this[562] + 4 * v26);
        v14 = v13[214];
        v13 += 214;
        *v13 = v14 + v32[12];
        v13[1] = v13[1] + v32[13];
        v13[2] = v13[2] + v32[14];
      }
      v15 = (char *)v29;
      if ( !v29 || (v16 = v30, j >= (v30 - (int)v29) >> 2) )
      {
        invalid_parameter_noinfo();
        v16 = v30;
        v15 = (char *)v29;
      }
      v17 = (ModelFrame **)&v15[4 * j];
      if ( !v15 || j >= (v16 - (int)v15) >> 2 )
      {
        invalid_parameter_noinfo();
        v15 = (char *)v29;
      }
      v18 = (ModelFrame **)&v15[4 * j];
      v19 = ModelFrame::GetMesh(*v17, 0);
      ModelFrame::SetMesh(*v18, v19, 1);
      v7 = v29;
      if ( v29 && (v6 = v30, j < (v30 - (int)v29) >> 2) )
      {
        v20 = invalid_parameter_noinfo;
      }
      else
      {
        v20 = invalid_parameter_noinfo;
        invalid_parameter_noinfo();
        v6 = v30;
        v7 = v29;
      }
      if ( *(_DWORD *)(v7[j] + 452) )
      {
        if ( !v7 || j >= (v6 - (int)v7) >> 2 )
        {
          v20();
          v7 = v29;
        }
        sub_10077B70(*(_DWORD **)(v7[j] + 452));
        v21 = (char *)v29;
        if ( !v29 || (v22 = v30, j >= (v30 - (int)v29) >> 2) )
        {
          v20();
          v22 = v30;
          v21 = (char *)v29;
        }
        v23 = (ModelFrame **)&v21[4 * j];
        if ( !v21 || j >= (v22 - (int)v21) >> 2 )
        {
          v20();
          v21 = (char *)v29;
        }
        v24 = &v21[4 * j];
        v25 = ModelFrame::GetMesh(*v23, 0);
        sub_10078420(*(_DWORD *)(*(_DWORD *)v24 + 452), j, (int)v25);
        v6 = v30;
        v7 = v29;
      }
      v2 = this;
      i = v26;
    }
    v33 = -1;
    if ( v7 )
      operator delete(v7);
    v29 = 0;
    v30 = 0;
    v31 = 0;
  }
}
