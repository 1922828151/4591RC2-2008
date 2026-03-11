/*
 * func-name: ?UseEstabHyperEnergy@Establishment@GameClient@@QAE_NM@Z_0
 * func-address: 0x101a2af0
 * callers: 0x10018acf
 * callees: 0x100110b8, 0x10011f3b
 */

bool __thiscall GameClient::Establishment::UseEstabHyperEnergy(GameClient::Establishment *this, float a2)
{
  GameClient::Func_Power *FunctionByType; // eax

  FunctionByType = (GameClient::Func_Power *)GameClient::Establishment::GetFunctionByType(5);
  return FunctionByType && GameClient::Func_Power::UseHyperEnergy(FunctionByType, a2);
}
