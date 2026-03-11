/*
 * func-name: ?SetCurrentRotation@SuspendVehicle@GameClient@@UAEXABVMatrix@@@Z_0
 * func-address: 0x101b8fe0
 * callers: 0x1001941b
 * callees: none
 */

// attributes: thunk
void __thiscall GameClient::SuspendVehicle::SetCurrentRotation(
        GameClient::SuspendVehicle *this,
        const struct Matrix *a2)
{
  GameClient::ControlledEstab::SetCurrentRotation(this, a2);
}
