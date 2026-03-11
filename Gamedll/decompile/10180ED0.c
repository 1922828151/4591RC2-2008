/*
 * func-name: ?WriteSnapshot@Robot@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x10180ed0
 * callers: 0x1001603b
 * callees: 0x10001573, 0x10002abd, 0x1000cee1
 */

bool __thiscall GameClient::Robot::WriteSnapshot(GameClient::Robot *this, struct BinStream *a2)
{
  bool result; // al

  result = GameClient::WorldObject::WriteSnapshot(this, a2);
  if ( result )
  {
    GameClient::Robot::WriteSystemPartSnapshot(this, a2, 1);
    GameClient::Robot::SetCurEquip(this, *((_DWORD *)this + 58), -1);
    return 1;
  }
  return result;
}
