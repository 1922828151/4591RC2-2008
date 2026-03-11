/*
 * func-name: ?WriteSnapshotToAvatar@WorldObject@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x1019ad20
 * callers: 0x1000c450
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::WorldObject::WriteSnapshotToAvatar(GameClient::WorldObject *this, struct BinStream *a2)
{
  return GameClient::DataObject::WriteSnapshotToAvatar(this, a2);
}
