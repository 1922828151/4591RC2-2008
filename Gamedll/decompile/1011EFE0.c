/*
 * func-name: ?GetFwtCtlEstab@ControlledEstab@GameClient@@QBEPAVFControlledEstab@2@XZ_0
 * func-address: 0x1011efe0
 * callers: 0x10015f28
 * callees: none
 */

struct GameClient::FControlledEstab *__thiscall GameClient::ControlledEstab::GetFwtCtlEstab(
        GameClient::ControlledEstab *this)
{
  return (struct GameClient::FControlledEstab *)*((_DWORD *)this + 115);
}
