/*
 * func-name: ?WriteSnapshot@RobotBody@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x1018c580
 * callers: 0x10015366
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::RobotBody::WriteSnapshot(GameClient::RobotBody *this, struct BinStream *a2)
{
  return GameClient::SystemPart::WriteSnapshot(this, a2);
}
