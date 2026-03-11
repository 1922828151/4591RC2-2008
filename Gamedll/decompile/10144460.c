/*
 * func-name: ?WriteSnapshot@Booty@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x10144460
 * callers: 0x10009a6b
 * callees: 0x1000cee1
 */

bool __thiscall GameClient::Booty::WriteSnapshot(GameClient::Booty *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  int v5; // eax

  result = GameClient::WorldObject::WriteSnapshot(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v4 + 1) <= *((_DWORD *)a2 + 2) )
    {
      *((_BYTE *)this + 172) = *(_BYTE *)(v4 + *((_DWORD *)a2 + 1));
      ++*((_DWORD *)a2 + 3);
    }
    v5 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v5 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 44) = *(_DWORD *)(v5 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    return 1;
  }
  return result;
}
