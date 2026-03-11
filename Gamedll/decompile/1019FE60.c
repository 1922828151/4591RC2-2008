/*
 * func-name: sub_1019FE60
 * func-address: 0x1019fe60
 * callers: 0x10003d87
 * callees: 0x1000518c, 0x1000f4f7
 */

char __thiscall sub_1019FE60(GameClient::ControlledEstab **this)
{
  char result; // al

  result = sub_1000518C();
  if ( result )
  {
    GameClient::ControlledEstab::CreateDistortionVehicle(this[1]);
    return 1;
  }
  return result;
}
