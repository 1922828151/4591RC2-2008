/*
 * func-name: ?SetMeshState@TerrainNode@@QAEXH@Z
 * func-address: 0x1015d320
 * callers: 0x1015e9b0
 * callees: 0x1009dd90
 */

void __thiscall TerrainNode::SetMeshState(TerrainNode *this, int a2)
{
  int v3; // eax
  struct Mesh *Mesh; // edi
  struct Mesh *v5; // ebx

  v3 = *((_DWORD *)this + 179);
  if ( v3 )
  {
    Mesh = ModelFrame::GetMesh(*(ModelFrame **)(v3 + 308), 0);
    v5 = ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 1u);
    ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 2u);
    if ( *((_DWORD *)this + 295) != a2 && Mesh && v5 )
    {
      if ( a2 == 1 )
      {
        *(_DWORD *)(*((_DWORD *)this + 179) + 100) = 0;
        *((_DWORD *)this + 295) = 1;
      }
      else
      {
        *(_DWORD *)(*((_DWORD *)this + 179) + 100) = 1;
        if ( a2 == 2 )
          *((_DWORD *)this + 295) = 2;
        else
          *((_DWORD *)this + 295) = 3;
      }
    }
  }
}
