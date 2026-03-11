/*
 * func-name: ?Tick@TerrainNode@@UAEXXZ
 * func-address: 0x1015d3e0
 * callers: none
 * callees: 0x1007ec70
 */

void __usercall TerrainNode::Tick(TerrainNode *this@<ecx>, int *a2@<edi>)
{
  int v3; // eax

  if ( *((_BYTE *)Editor::Instance() + 2056) )
  {
    v3 = *((_DWORD *)this + 316);
    if ( v3 )
    {
      *((_DWORD *)this + 314) = *(_DWORD *)(v3 + 1304);
      *((_DWORD *)this + 315) = *(_DWORD *)(v3 + 1308);
    }
  }
  Prefab::Tick(this, a2, (char *)this);
}
