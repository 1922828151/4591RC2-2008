/*
 * func-name: ?performCreate@?$ProductorTemplate@VFAMovement@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x102488c0
 * callers: 0x1000c77f
 * callees: 0x100026b2, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FAMovement>::performCreate(char *this)
{
  GameClient::FAMovement *v2; // eax
  int v3; // esi

  v2 = (GameClient::FAMovement *)operator new(0x110u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FAMovement::FAMovement(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
