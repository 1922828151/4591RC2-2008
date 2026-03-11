/*
 * func-name: ?ForceComplete@Terrain@@QAEX_N@Z
 * func-address: 0x1015e8d0
 * callers: 0x101613e0, 0x10169640
 * callees: 0x1009dd90
 */

void __thiscall Terrain::ForceComplete(Terrain *this, bool a2)
{
  unsigned int i; // ebx
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  struct Mesh *Mesh; // ebx
  struct Mesh *v8; // ebp
  unsigned int v9; // [esp+14h] [ebp+4h]

  *((_BYTE *)this + 1476) = a2;
  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 299);
    v9 = i;
    if ( !v4 || i >= (*((_DWORD *)this + 300) - v4) >> 2 )
      break;
    v5 = *(_DWORD *)(*((_DWORD *)this + 299) + 4 * i);
    v6 = *(_DWORD *)(v5 + 716);
    if ( v6 )
    {
      Mesh = ModelFrame::GetMesh(*(ModelFrame **)(v6 + 308), 0);
      v8 = ModelFrame::GetMesh(*(ModelFrame **)(*(_DWORD *)(v5 + 716) + 308), 1u);
      ModelFrame::GetMesh(*(ModelFrame **)(*(_DWORD *)(v5 + 716) + 308), 2u);
      if ( *(_DWORD *)(v5 + 1180) != 1 && Mesh )
      {
        if ( v8 )
        {
          *(_DWORD *)(*(_DWORD *)(v5 + 716) + 100) = 0;
          *(_DWORD *)(v5 + 1180) = 1;
        }
      }
      i = v9;
    }
  }
}
