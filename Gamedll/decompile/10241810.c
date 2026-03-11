/*
 * func-name: ?performCreate@?$ProductorTemplate@VFSuspendVehicleWheel@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10241810
 * callers: 0x1000ed4f
 * callees: 0x10007d9c, 0x102c9d98
 */

GameClient::FWheel *__thiscall GameClient::ProductorTemplate<GameClient::FSuspendVehicleWheel>::performCreate(
        char *this)
{
  GameClient::FWheel *v2; // eax
  GameClient::FWheel *v3; // esi

  v2 = (GameClient::FWheel *)operator new(0x94u);
  v3 = v2;
  if ( v2 )
  {
    GameClient::FWheel::FWheel(v2);
    *(_DWORD *)v3 = &GameClient::FSuspendVehicleWheel::`vftable';
  }
  else
  {
    v3 = 0;
  }
  std::string::operator=((char *)v3 + 4, this + 4);
  return v3;
}
