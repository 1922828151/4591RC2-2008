/*
 * func-name: ?FindActorGUIDString@World@@QAEPAVActor@@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10137bf0
 * callers: none
 * callees: 0x10137860
 */

struct Actor *__thiscall World::FindActorGUIDString(World *this, int a2)
{
  unsigned __int8 *v3; // eax
  UUID Uuid; // [esp+4h] [ebp-10h] BYREF

  v3 = (unsigned __int8 *)std::string::c_str(a2);
  UuidFromStringA(v3, &Uuid);
  return World::FindActor(this, Uuid);
}
