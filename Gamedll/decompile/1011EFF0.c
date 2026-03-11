/*
 * func-name: ?GetCurrrentTransState@ControlledEstab@GameClient@@QAEPAVCtlEstabTransState@2@XZ_0
 * func-address: 0x1011eff0
 * callers: 0x1001690a
 * callees: 0x10007040
 */

struct GameClient::CtlEstabTransState *__thiscall GameClient::ControlledEstab::GetCurrrentTransState(
        GameClient::ControlledEstab *this)
{
  return (struct GameClient::CtlEstabTransState *)GameClient::ControlledEstab::GetTransState(*((_DWORD *)this + 116));
}
