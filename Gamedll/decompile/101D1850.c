/*
 * func-name: ?WriteSnapshot@SAlarm@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101d1850
 * callers: 0x1000f6cd
 * callees: 0x10003233
 */

bool __thiscall GameClient::SAlarm::WriteSnapshot(GameClient::SAlarm *this, struct BinStream *a2)
{
  return GameClient::Skill::WriteSnapshot(this, a2);
}
