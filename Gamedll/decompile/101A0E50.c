/*
 * func-name: ?WriteSnapshot@EstabDoor@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101a0e50
 * callers: 0x1000955c
 * callees: 0x1001799a
 */

char __thiscall GameClient::EstabDoor::WriteSnapshot(GameClient::EstabDoor *this, struct BinStream *a2)
{
  int v3; // eax

  GameClient::NonControlledEstab::WriteSnapshot(this, a2);
  v3 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v3 + 4) <= *((_DWORD *)a2 + 2) )
  {
    *((_DWORD *)this + 119) = *(_DWORD *)(v3 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) += 4;
  }
  return 1;
}
