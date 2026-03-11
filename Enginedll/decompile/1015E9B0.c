/*
 * func-name: ?PreRender@Terrain@@UAEXPAVCamera@@@Z
 * func-address: 0x1015e9b0
 * callers: none
 * callees: 0x1004e610, 0x1009dd90, 0x1015d320, 0x101a26c0
 */

void __thiscall Terrain::PreRender(Terrain *this, struct Camera *a2)
{
  struct Camera *v2; // ebx
  double v4; // st7
  double v5; // st7
  unsigned int v6; // esi
  int v7; // ecx
  TerrainNode *v8; // esi
  signed int v9; // ecx
  signed int *v10; // eax
  signed int v11; // eax
  signed int v12; // ecx
  signed int v13; // ecx
  int v14; // eax
  struct Mesh *v15; // ebx
  struct Mesh *v16; // ebp
  bool v17; // zf
  int v18; // eax
  struct Mesh *Mesh; // ebx
  struct Mesh *v20; // ebp
  struct Mesh *v21; // ebx
  struct Mesh *v22; // ebp
  unsigned int v23; // [esp+10h] [ebp-14h]
  int v24; // [esp+14h] [ebp-10h]
  int v25; // [esp+18h] [ebp-Ch]
  signed int v26; // [esp+1Ch] [ebp-8h] BYREF
  signed int v27; // [esp+20h] [ebp-4h] BYREF

  v2 = a2;
  v4 = *((float *)this + 361);
  *((_DWORD *)this + 331) = *((_DWORD *)a2 + 88);
  v5 = v4 * 64.0;
  *((_DWORD *)this + 332) = *((_DWORD *)a2 + 89);
  *((_DWORD *)this + 333) = *((_DWORD *)a2 + 90);
  v25 = (int)((*((float *)a2 + 88) - *((float *)this + 214)) / v5 + (double)(*((_DWORD *)this + 324) / 2));
  v24 = (int)((*((float *)a2 + 90) - *((float *)this + 216)) / v5 + (double)(*((_DWORD *)this + 325) / 2));
  v6 = 0;
  while ( 1 )
  {
    v7 = *((_DWORD *)this + 299);
    v23 = v6;
    if ( !v7 || v6 >= (*((_DWORD *)this + 300) - v7) >> 2 )
      break;
    v8 = *(TerrainNode **)(*((_DWORD *)this + 299) + 4 * v6);
    v9 = abs32(*((_DWORD *)v8 + 294) - v24);
    v27 = abs32(*((_DWORD *)v8 + 293) - v25);
    v26 = v9;
    v10 = &v26;
    if ( v27 >= v9 )
      v10 = &v27;
    v11 = *v10;
    v12 = *((_DWORD *)this + 367);
    if ( v11 > v12 )
    {
      v13 = *((_DWORD *)this + 368) + v12;
      if ( v11 > v13 )
      {
        v17 = v11 == v13 + 1;
        v18 = *((_DWORD *)v8 + 179);
        if ( v17 )
        {
          if ( !v18 )
            goto LABEL_25;
          Mesh = ModelFrame::GetMesh(*(ModelFrame **)(v18 + 308), 0);
          v20 = ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)v8 + 179) + 308), 1u);
          ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)v8 + 179) + 308), 2u);
          if ( *((_DWORD *)v8 + 295) == 3 || !Mesh || !v20 )
            goto LABEL_25;
          v2 = a2;
          *(_DWORD *)(*((_DWORD *)v8 + 179) + 100) = 1;
          *((_DWORD *)v8 + 295) = 3;
          v6 = v23 + 1;
        }
        else
        {
          if ( v18 )
          {
            v21 = ModelFrame::GetMesh(*(ModelFrame **)(v18 + 308), 0);
            v22 = ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)v8 + 179) + 308), 1u);
            ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)v8 + 179) + 308), 2u);
            if ( *((_DWORD *)v8 + 295) != 4 && v21 && v22 )
            {
              *(_DWORD *)(*((_DWORD *)v8 + 179) + 100) = 1;
              *((_DWORD *)v8 + 295) = 3;
            }
          }
LABEL_25:
          v2 = a2;
          v6 = v23 + 1;
        }
      }
      else
      {
        v14 = *((_DWORD *)v8 + 179);
        if ( !v14 )
          goto LABEL_25;
        v15 = ModelFrame::GetMesh(*(ModelFrame **)(v14 + 308), 0);
        v16 = ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)v8 + 179) + 308), 1u);
        ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)v8 + 179) + 308), 2u);
        if ( *((_DWORD *)v8 + 295) == 2 || !v15 || !v16 )
          goto LABEL_25;
        v2 = a2;
        *(_DWORD *)(*((_DWORD *)v8 + 179) + 100) = 1;
        *((_DWORD *)v8 + 295) = 2;
        v6 = v23 + 1;
      }
    }
    else
    {
      TerrainNode::SetMeshState(v8, 1);
      v2 = a2;
      v6 = v23 + 1;
    }
  }
  Prefab::PreRender(this, v2);
}
