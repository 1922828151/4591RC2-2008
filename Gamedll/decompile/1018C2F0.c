/*
 * func-name: ?WriteSnapshot@RobotArmor@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x1018c2f0
 * callers: 0x100119fa
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::RobotArmor::WriteSnapshot(GameClient::RobotArmor *this, struct BinStream *a2)
{
  return GameClient::SystemPart::WriteSnapshot(this, a2);
}
