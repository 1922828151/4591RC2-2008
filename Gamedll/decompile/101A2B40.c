/*
 * func-name: ?SetEstabHyperEnergy@Establishment@GameClient@@QAEXM@Z_0
 * func-address: 0x101a2b40
 * callers: 0x10018cdc
 * callees: 0x1000209a, 0x10011f3b
 */

void __thiscall GameClient::Establishment::SetEstabHyperEnergy(GameClient::Establishment *this, float a2)
{
  GameClient::Func_Power *FunctionByType; // eax

  FunctionByType = (GameClient::Func_Power *)GameClient::Establishment::GetFunctionByType(5);
  if ( FunctionByType )
    GameClient::Func_Power::SetHyperEnergy(FunctionByType, a2);
}
