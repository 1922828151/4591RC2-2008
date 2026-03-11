/*
 * func-name: ?performCreate@?$ProductorTemplate@VFEstabDoor@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1022a560
 * callers: 0x1000581c
 * callees: 0x100182e1, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FEstabDoor>::performCreate(char *this)
{
  GameClient::FEstabDoor *v2; // eax
  int v3; // esi

  v2 = (GameClient::FEstabDoor *)operator new(0x400u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FEstabDoor::FEstabDoor(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
