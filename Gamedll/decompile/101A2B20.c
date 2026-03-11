/*
 * func-name: ?SetEstabEnergy@Establishment@GameClient@@QAEXM@Z_0
 * func-address: 0x101a2b20
 * callers: 0x10002829
 * callees: 0x10004f0c, 0x10011f3b
 */

void __thiscall GameClient::Establishment::SetEstabEnergy(GameClient::Establishment *this, float a2)
{
  GameClient::Func_Power *FunctionByType; // eax

  FunctionByType = (GameClient::Func_Power *)GameClient::Establishment::GetFunctionByType(5);
  if ( FunctionByType )
    GameClient::Func_Power::SetEnergy(FunctionByType, a2);
}
