/*
 * func-name: ?ConfirmBoard@WheelVehicle@GameClient@@UAE_NHPAVRobot@2@@Z_0
 * func-address: 0x101ba950
 * callers: 0x100075bd
 * callees: 0x10019aab
 */

bool __thiscall GameClient::WheelVehicle::ConfirmBoard(
        GameClient::WheelVehicle *this,
        int a2,
        struct GameClient::Robot *a3)
{
  return GameClient::ControlledEstab::ConfirmBoard(this, a2, a3);
}
