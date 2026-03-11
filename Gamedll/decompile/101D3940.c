/*
 * func-name: ?WriteSnapshot@SLock@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101d3940
 * callers: 0x100139fd
 * callees: 0x10003233
 */

bool __thiscall GameClient::SLock::WriteSnapshot(GameClient::SLock *this, struct BinStream *a2)
{
  return GameClient::Skill::WriteSnapshot(this, a2);
}
