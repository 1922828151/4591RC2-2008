/*
 * func-name: ?WriteSnapshot@Function@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101cd820
 * callers: 0x10003d19
 * callees: none
 */

char __thiscall GameClient::Function::WriteSnapshot(GameClient::Function *this, struct BinStream *a2)
{
  int v2; // edx

  v2 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v2 + 1) <= *((_DWORD *)a2 + 2) )
  {
    *((_BYTE *)this + 20) = *(_BYTE *)(v2 + *((_DWORD *)a2 + 1));
    ++*((_DWORD *)a2 + 3);
  }
  return 1;
}
