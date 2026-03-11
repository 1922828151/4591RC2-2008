/*
 * func-name: ?AttachAnimSet@AdapterActor@GameClient@@UAEHAAVAnimationSet@@@Z_0
 * func-address: 0x100f2a60
 * callers: 0x100109e2
 * callees: none
 */

int __thiscall GameClient::AdapterActor::AttachAnimSet(GameClient::AdapterActor *this, struct AnimationSet *a2)
{
  Model *v2; // ecx

  v2 = (Model *)*((_DWORD *)this + 179);
  if ( v2 )
    return Model::AttachAnimSet(v2, a2);
  else
    return -1;
}
