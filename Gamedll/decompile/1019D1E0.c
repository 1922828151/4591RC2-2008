/*
 * func-name: ?UpdateCamera@ControlledEstab@GameClient@@UAEXH@Z_0
 * func-address: 0x1019d1e0
 * callers: 0x1000a39e
 * callees: none
 */

void __thiscall GameClient::ControlledEstab::UpdateCamera(GameClient::ControlledEstab *this, int a2)
{
  if ( *((_BYTE *)this + 532) )
    GameClient::Establishment::UpdateCamera(this, a2);
}
