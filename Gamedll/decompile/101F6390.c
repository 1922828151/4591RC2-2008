/*
 * func-name: ?SendMessageA@GroupManager@GameClient@@IAEXPAVLocalCharacter@2@V?$Smart_Ptr@VMessage@1Outpop@@@Utility@Outpop@@@Z_0
 * func-address: 0x101f6390
 * callers: 0x1001116c
 * callees: 0x1000e56b, 0x10015816
 */

void __stdcall GameClient::GroupManager::SendMessageA(int a1, Outpop::Utility::Ref_Object *a2)
{
  int v2; // [esp-8h] [ebp-18h]
  int v3; // [esp-4h] [ebp-14h]

  sub_1000E56B(*(_DWORD *)(a1 + 236), (int)&a2);
  sub_10015816(v2, v3);
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
}
