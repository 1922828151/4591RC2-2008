/*
 * func-name: ?WriteSynaData@ACapability@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101cf730
 * callers: 0x10007bbc
 * callees: 0x10008a62
 */

char __thiscall GameClient::ACapability::WriteSynaData(GameClient::ACapability *this, struct BinStream *a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( !GameClient::Aura::WriteSynaData(this, a2) || !*((_DWORD *)this + 8) )
    return 0;
  v4 = *((_DWORD *)a2 + 3);
  v5 = v4 + 4;
  if ( (unsigned int)(v4 + 4) > *((_DWORD *)a2 + 2) )
  {
    *(_DWORD *)(*((_DWORD *)this + 8) + 136) = a2;
  }
  else
  {
    v6 = *(_DWORD *)(v4 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) = v5;
    *(_DWORD *)(*((_DWORD *)this + 8) + 136) = v6;
  }
  return 1;
}
