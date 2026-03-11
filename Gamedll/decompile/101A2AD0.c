/*
 * func-name: ?GetHyperEnergy@Establishment@GameClient@@QAENXZ_0
 * func-address: 0x101a2ad0
 * callers: 0x10017a49
 * callees: 0x10011f3b
 */

double __thiscall GameClient::Establishment::GetHyperEnergy(GameClient::Establishment *this)
{
  int FunctionByType; // eax

  FunctionByType = GameClient::Establishment::GetFunctionByType(5);
  if ( !FunctionByType )
    return 0.0;
  return (float)*(double *)(FunctionByType + 56);
}
