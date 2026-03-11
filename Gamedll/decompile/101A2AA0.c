/*
 * func-name: ?UseEstabEnergy@Establishment@GameClient@@QAE_NM@Z_0
 * func-address: 0x101a2aa0
 * callers: 0x10010c76
 * callees: 0x10011f3b, 0x100146eb
 */

bool __thiscall GameClient::Establishment::UseEstabEnergy(GameClient::Establishment *this, float a2)
{
  GameClient::Func_Power *FunctionByType; // eax

  FunctionByType = (GameClient::Func_Power *)GameClient::Establishment::GetFunctionByType(5);
  return FunctionByType && GameClient::Func_Power::UseEnergy(FunctionByType, a2);
}
