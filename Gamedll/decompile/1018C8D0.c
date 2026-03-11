/*
 * func-name: ?WriteSnapshot@RobotCore@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x1018c8d0
 * callers: 0x10005b91
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::RobotCore::WriteSnapshot(GameClient::RobotCore *this, struct BinStream *a2)
{
  return GameClient::SystemPart::WriteSnapshot(this, a2);
}
