/*
 * func-name: ?AddActorToList@TextureCamera@@QAEXPAVActor@@@Z
 * func-address: 0x1016da50
 * callers: none
 * callees: none
 */

void __thiscall TextureCamera::AddActorToList(TextureCamera *this, struct Actor *a2)
{
  World::AddActor((TextureCamera *)((char *)this + 1608), a2);
}
