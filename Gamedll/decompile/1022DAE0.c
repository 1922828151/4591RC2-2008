/*
 * func-name: ?performCreate@?$ProductorTemplate@VFItem@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1022dae0
 * callers: 0x10019312
 * callees: 0x100076e9, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FItem>::performCreate(char *this)
{
  GameClient::FItem *v2; // eax
  int v3; // esi

  v2 = (GameClient::FItem *)operator new(0x898u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FItem::FItem(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
