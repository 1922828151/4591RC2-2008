/*
 * func-name: ?WriteSnapshotToAvatar@Equip@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x10159cd0
 * callers: 0x10012940
 * callees: 0x1000c450
 */

bool __thiscall GameClient::Equip::WriteSnapshotToAvatar(GameClient::Equip *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  result = GameClient::WorldObject::WriteSnapshotToAvatar(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v4 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((float *)this + 47) = *(float *)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v5 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v5 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((float *)this + 48) = *(float *)(v5 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v6 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v6 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 50) = *(_DWORD *)(v6 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v7 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v7 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 65) = *(_DWORD *)(v7 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v8 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v8 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 66) = *(_DWORD *)(v8 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v9 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v9 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *(_DWORD *)(*((_DWORD *)this + 2) + 336) = *(_DWORD *)(v9 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    return 1;
  }
  return result;
}
