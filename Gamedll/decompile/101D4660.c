/*
 * func-name: ?WriteSnapshot@SOccupy@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101d4660
 * callers: 0x10001eec
 * callees: 0x10003233
 */

bool __thiscall GameClient::SOccupy::WriteSnapshot(GameClient::SOccupy *this, struct BinStream *a2)
{
  return GameClient::Skill::WriteSnapshot(this, a2);
}
