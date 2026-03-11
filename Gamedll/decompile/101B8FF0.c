/*
 * func-name: ?ConfirmBoard@SuspendVehicle@GameClient@@UAE_NHPAVRobot@2@@Z_0
 * func-address: 0x101b8ff0
 * callers: 0x1000132f
 * callees: 0x10019aab
 */

bool __thiscall GameClient::SuspendVehicle::ConfirmBoard(
        GameClient::SuspendVehicle *this,
        int a2,
        struct GameClient::Robot *a3)
{
  return GameClient::ControlledEstab::ConfirmBoard(this, a2, a3);
}
