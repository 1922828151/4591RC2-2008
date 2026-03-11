/*
 * func-name: ?OnDestroy@SystemPart@GameClient@@UAEXXZ_0
 * func-address: 0x10194870
 * callers: 0x100132f0
 * callees: none
 */

// attributes: thunk
void __thiscall GameClient::SystemPart::OnDestroy(GameClient::SystemPart *this)
{
  GameClient::WorldObject::OnDestroy(this);
}
