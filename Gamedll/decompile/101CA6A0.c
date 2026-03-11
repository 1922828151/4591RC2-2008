/*
 * func-name: ?WriteSnapshot@Func_VehicleReceive@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101ca6a0
 * callers: 0x10001965
 * callees: 0x10011202
 */

bool __thiscall GameClient::Func_VehicleReceive::WriteSnapshot(
        GameClient::Func_VehicleReceive *this,
        struct BinStream *a2)
{
  return GameClient::Func_Receive::WriteSnapshot(this, a2);
}
