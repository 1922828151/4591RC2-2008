/*
 * func-name: ?WriteSnapshot@ASummon@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101d0a10
 * callers: 0x10010b36
 * callees: 0x1000edae
 */

bool __thiscall GameClient::ASummon::WriteSnapshot(GameClient::ASummon *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  int v5; // eax
  int v6; // eax

  result = GameClient::Aura::WriteSnapshot(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v4 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 39) = *(_DWORD *)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v5 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v5 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 40) = *(_DWORD *)(v5 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v6 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v6 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *(_DWORD *)(*((_DWORD *)this + 2) + 288) = *(_DWORD *)(v6 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    return 1;
  }
  return result;
}
