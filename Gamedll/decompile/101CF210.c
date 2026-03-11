/*
 * func-name: ?WriteSynaData@AAlarm@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101cf210
 * callers: 0x100069e2
 * callees: 0x10008a62
 */

bool __thiscall GameClient::AAlarm::WriteSynaData(GameClient::AAlarm *this, struct BinStream *a2)
{
  int v2; // esi
  _DWORD *v3; // eax

  v2 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v2 + 12) <= *((_DWORD *)a2 + 2) )
  {
    v3 = (_DWORD *)(v2 + *((_DWORD *)a2 + 1));
    *((_DWORD *)this + 39) = *v3;
    *((_DWORD *)this + 40) = v3[1];
    *((_DWORD *)this + 41) = v3[2];
    *((_DWORD *)a2 + 3) += 12;
  }
  return GameClient::Aura::WriteSynaData(this, a2);
}
