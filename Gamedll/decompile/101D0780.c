/*
 * func-name: ?WriteSynaData@ASearch@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101d0780
 * callers: 0x1000eeda
 * callees: 0x10008a62, 0x102c9ea8
 */

bool __thiscall GameClient::ASearch::WriteSynaData(GameClient::ASearch *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  struct BinStream *v5; // edi
  int v6; // eax

  result = GameClient::Aura::WriteSynaData(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v4 + 4) > *((_DWORD *)a2 + 2) )
    {
      v5 = a2;
    }
    else
    {
      v5 = *(struct BinStream **)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) = v4 + 4;
    }
    v6 = _RTDynamicCast(
           *((_DWORD *)this + 8),
           0,
           &GameClient::WorldObject `RTTI Type Descriptor',
           &GameClient::Robot `RTTI Type Descriptor',
           0);
    if ( v6 )
      *(_DWORD *)(*(_DWORD *)(v6 + 204) + 156) = v5;
    return 1;
  }
  return result;
}
