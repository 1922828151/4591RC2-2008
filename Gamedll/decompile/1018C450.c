/*
 * func-name: ?WriteSnapshotToAvatar@RobotArmor@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x1018c450
 * callers: 0x10017b16
 * callees: 0x1000c450
 */

bool __thiscall GameClient::RobotArmor::WriteSnapshotToAvatar(GameClient::RobotArmor *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  result = GameClient::WorldObject::WriteSnapshotToAvatar(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    v5 = *((_DWORD *)this + 2);
    if ( (unsigned int)(v4 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *(_DWORD *)(v5 + 356) = *(_DWORD *)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v6 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v6 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *(_DWORD *)(v5 + 360) = *(_DWORD *)(v6 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    return 1;
  }
  return result;
}
