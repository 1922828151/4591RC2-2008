/*
 * func-name: ?WriteSnapshot@NonControlledEstab@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101b0960
 * callers: 0x1001799a
 * callees: 0x1000df8f
 */

bool __thiscall GameClient::NonControlledEstab::WriteSnapshot(
        GameClient::NonControlledEstab *this,
        struct BinStream *a2)
{
  bool result; // al
  int v4; // eax

  result = GameClient::Establishment::WriteSnapshot(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v4 + 1) <= *((_DWORD *)a2 + 2) )
    {
      *((_BYTE *)this + 464) = *(_BYTE *)(v4 + *((_DWORD *)a2 + 1));
      ++*((_DWORD *)a2 + 3);
    }
    return 1;
  }
  return result;
}
