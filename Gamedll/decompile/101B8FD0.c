/*
 * func-name: ?SetCurrentPosition@SuspendVehicle@GameClient@@UAEXABVVector@@@Z_0
 * func-address: 0x101b8fd0
 * callers: 0x10006ad7
 * callees: none
 */

// attributes: thunk
void __thiscall GameClient::SuspendVehicle::SetCurrentPosition(
        GameClient::SuspendVehicle *this,
        const struct Vector *a2)
{
  GameClient::ControlledEstab::SetCurrentPosition(this, a2);
}
