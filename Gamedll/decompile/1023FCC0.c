/*
 * func-name: ?performCreate@?$ProductorTemplate@VFSeat@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1023fcc0
 * callers: 0x10006c3f
 * callees: 0x10001b95, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FSeat>::performCreate(char *this)
{
  GameClient::FSeat *v2; // eax
  int v3; // esi

  v2 = (GameClient::FSeat *)operator new(0x114u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FSeat::FSeat(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
