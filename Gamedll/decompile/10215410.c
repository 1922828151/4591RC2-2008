/*
 * func-name: sub_10215410
 * func-address: 0x10215410
 * callers: 0x100121cf
 * callees: 0x10004886, 0x100052b8, 0x10009e6c, 0x1000f259, 0x1001055a, 0x10019b46
 */

void __stdcall sub_10215410(int a1)
{
  int v1; // esi
  Outpop::Message::Message *v2; // ecx
  bool v3; // bl
  Outpop::Message::Message *v4; // ecx
  unsigned __int16 result; // ax
  int v6; // [esp-4h] [ebp-34h]
  Outpop::Utility::Ref_Object *v7; // [esp+10h] [ebp-20h] BYREF
  Outpop::Utility::Ref_Object *v8; // [esp+14h] [ebp-1Ch] BYREF
  int v9; // [esp+18h] [ebp-18h] BYREF
  int v10; // [esp+1Ch] [ebp-14h] BYREF
  int v11; // [esp+20h] [ebp-10h] BYREF
  int v12; // [esp+2Ch] [ebp-4h]

  v1 = a1;
  v2 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v7);
  v12 = 0;
  v3 = Outpop::Message::Message::get_result(v2) != 0;
  v12 = -1;
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  if ( v3 )
  {
    v4 = *(Outpop::Message::Message **)Event::GetAckMessage(v1, &v7);
    v12 = 1;
    result = Outpop::Message::Message::get_result(v4);
    LogPrintf("Apply into game is failed. Error code: %d", result);
    v12 = -1;
    if ( v7 )
      Outpop::Utility::Ref_Object::release(v7);
  }
  else
  {
    LogPrintf("Apply into game is success.");
    Event::GetAckMessage(v1, &v8);
    v12 = 2;
    sub_1000F259((int)&v10);
    sub_1000F259((int)&v11);
    sub_100052B8((int)&a1);
    sub_1000F259((int)&v9);
    v12 = -1;
    if ( v8 )
      Outpop::Utility::Ref_Object::release(v8);
    if ( GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0) )
    {
      sub_10019B46(v9);
      *(_DWORD *)(*(_DWORD *)(sub_10009E6C() + 36) + 12) = v10;
      *(_DWORD *)(*(_DWORD *)(sub_10009E6C() + 36) + 16) = v11;
      *(_DWORD *)(*(_DWORD *)(sub_10009E6C() + 36) + 20) = (unsigned __int16)a1;
      v6 = *(_DWORD *)(sub_10009E6C() + 36);
      sub_10009E6C();
      sub_10004886(v6);
    }
  }
}
