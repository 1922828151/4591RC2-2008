/*
 * func-name: ?OnDestroy@TransformItem@GameClient@@UAEXXZ_0
 * func-address: 0x10194aa0
 * callers: 0x100090c5
 * callees: 0x100084f4, 0x1000aff6
 */

void __thiscall GameClient::TransformItem::OnDestroy(GameClient::TransformItem *this)
{
  int v2; // eax
  GameClient::FlyweightManager *v3; // eax
  unsigned int v4; // [esp-8h] [ebp-Ch]
  unsigned int v5; // [esp-4h] [ebp-8h]

  if ( *((_DWORD *)this + 195) )
  {
    v2 = *((_DWORD *)this + 195);
    v5 = *(_DWORD *)(v2 + 12);
    v4 = *(_DWORD *)(v2 + 4);
    v3 = GameClient::FlyweightManager::Instance();
    GameClient::FlyweightManager::DeleteInstance(v3, v4, v5);
  }
  GameClient::Item::OnDestroy(this);
}
