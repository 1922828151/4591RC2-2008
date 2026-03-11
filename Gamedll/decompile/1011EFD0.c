/*
 * func-name: ?GetVehicle@ControlledEstab@GameClient@@QAEPAVNxRaycastVehicle@2@XZ_0
 * func-address: 0x1011efd0
 * callers: 0x1000399a
 * callees: none
 */

struct GameClient::NxRaycastVehicle *__thiscall GameClient::ControlledEstab::GetVehicle(
        GameClient::ControlledEstab *this)
{
  return (struct GameClient::NxRaycastVehicle *)*((_DWORD *)this + 114);
}
