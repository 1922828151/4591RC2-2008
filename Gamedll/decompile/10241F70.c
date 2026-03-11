/*
 * func-name: ?performCreate@?$ProductorTemplate@VFTransformItem@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10241f70
 * callers: 0x10005f42
 * callees: 0x10009c7d, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FTransformItem>::performCreate(char *this)
{
  GameClient::FTransformItem *v2; // eax
  int v3; // esi

  v2 = (GameClient::FTransformItem *)operator new(0x8B4u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FTransformItem::FTransformItem(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
