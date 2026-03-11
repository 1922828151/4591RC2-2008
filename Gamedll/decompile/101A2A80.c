/*
 * func-name: ?GetEstabEnergy@Establishment@GameClient@@QAENXZ_0
 * func-address: 0x101a2a80
 * callers: 0x1000653c
 * callees: 0x10011f3b
 */

double __thiscall GameClient::Establishment::GetEstabEnergy(GameClient::Establishment *this)
{
  int FunctionByType; // eax

  FunctionByType = GameClient::Establishment::GetFunctionByType(5);
  if ( !FunctionByType )
    return 0.0;
  return (float)*(double *)(FunctionByType + 48);
}
