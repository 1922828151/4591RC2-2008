/*
 * func-name: ?WriteSnapshot@SystemPart@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x10194830
 * callers: 0x1000c964
 * callees: 0x1000cee1
 */

bool __thiscall GameClient::SystemPart::WriteSnapshot(GameClient::SystemPart *this, struct BinStream *a2)
{
  return GameClient::WorldObject::WriteSnapshot(this, a2);
}
