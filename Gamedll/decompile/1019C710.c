/*
 * func-name: ?GetNormalModel@ControlledEstab@GameClient@@QAEPAVModel@@XZ_0
 * func-address: 0x1019c710
 * callers: 0x10004dea
 * callees: none
 */

struct Model *__thiscall GameClient::ControlledEstab::GetNormalModel(GameClient::ControlledEstab *this)
{
  struct Model *result; // eax

  result = (struct Model *)*((_DWORD *)this + 75);
  if ( result )
    return (struct Model *)*((_DWORD *)result + 179);
  return result;
}
