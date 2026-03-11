/*
 * func-name: ?Clone@Effect_Light@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x100da940
 * callers: 0x10016dc9
 * callees: 0x1001a988
 */

void __thiscall Effect_Light::Clone(Effect_Light *this, struct Actor *a2, bool a3)
{
  Effect_Base::Clone(this, a2, a3);
  *((float *)a2 + 285) = *((float *)this + 285);
}
