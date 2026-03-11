/*
 * func-name: ?WriteSnapshot@DamageEquip@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x1014e2f0
 * callers: 0x1000f065
 * callees: 0x10004fca, 0x1000e1f6
 */

char __thiscall GameClient::DamageEquip::WriteSnapshot(GameClient::DamageEquip *this, struct BinStream *a2)
{
  int v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // eax

  if ( !GameClient::Item::WriteSnapshot(this, a2)
    || !GameClient::DamageUnit::WriteArmorInfo((GameClient::DamageEquip *)((char *)this + 780), a2) )
  {
    return 0;
  }
  v4 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v4 + 4) <= *((_DWORD *)a2 + 2) )
  {
    *((_DWORD *)this + 201) = *(_DWORD *)(v4 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) += 4;
  }
  v5 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v5 + 12) <= *((_DWORD *)a2 + 2) )
  {
    v6 = (_DWORD *)(v5 + *((_DWORD *)a2 + 1));
    *((_DWORD *)this + 202) = *v6;
    *((_DWORD *)this + 203) = v6[1];
    *((_DWORD *)this + 204) = v6[2];
    *((_DWORD *)a2 + 3) += 12;
  }
  v7 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v7 + 1) <= *((_DWORD *)a2 + 2) )
  {
    *((_BYTE *)this + 820) = *(_BYTE *)(v7 + *((_DWORD *)a2 + 1));
    ++*((_DWORD *)a2 + 3);
  }
  return 1;
}
