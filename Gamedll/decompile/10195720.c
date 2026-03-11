/*
 * func-name: ?WriteSnapshot@Weapon@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x10195720
 * callers: 0x100132be
 * callees: 0x1000e9b2
 */

bool __thiscall GameClient::Weapon::WriteSnapshot(GameClient::Weapon *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  int v5; // eax

  result = GameClient::Equip::WriteSnapshot(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v4 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 185) = *(_DWORD *)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v5 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v5 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 186) = *(_DWORD *)(v5 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    return 1;
  }
  return result;
}
