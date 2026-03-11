/*
 * func-name: ?ConfirmBoard@PedrailVehicle@GameClient@@UAE_NHPAVRobot@2@@Z_0
 * func-address: 0x101b74f0
 * callers: 0x10019b5a
 * callees: 0x10019aab
 */

bool __thiscall GameClient::PedrailVehicle::ConfirmBoard(
        GameClient::PedrailVehicle *this,
        int a2,
        struct GameClient::Robot *a3)
{
  return GameClient::ControlledEstab::ConfirmBoard(this, a2, a3);
}
