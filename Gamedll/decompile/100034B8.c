/*
 * func-name: ?NewWorldObject@FlyweightManager@GameClient@@QAEPAVWorldObject@2@KKKAAVBinStream@@@Z
 * func-address: 0x100034b8
 * callers: 0x10167070, 0x1017ff50, 0x1018f740, 0x101901b0, 0x10194b00, 0x101b1a70
 * callees: none
 */

// attributes: thunk
struct GameClient::WorldObject *__thiscall GameClient::FlyweightManager::NewWorldObject(
        GameClient::FlyweightManager *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct BinStream *a5)
{
  return ?NewWorldObject@FlyweightManager@GameClient@@QAEPAVWorldObject@2@KKKAAVBinStream@@@Z_0(this, a2, a3, a4, a5);
}
