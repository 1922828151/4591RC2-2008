/*
 * func-name: sub_102ACBA0
 * func-address: 0x102acba0
 * callers: 0x10004291
 * callees: 0x100077ed, 0x1001055a, 0x10013647, 0x10015e0b, 0x10016a4f
 */

void sub_102ACBA0()
{
  struct GameClient::LocalUser *UserByIndex; // eax
  CRETimer *v1; // eax
  Outpop::Utility::Ref_Object *v2; // [esp+14h] [ebp-18h] BYREF
  double AbsoluteTime; // [esp+18h] [ebp-14h] BYREF
  int v4; // [esp+28h] [ebp-4h]

  UserByIndex = GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0);
  if ( UserByIndex && sub_10016A4F(*((_DWORD *)UserByIndex + 19)) )
  {
    sub_100077ED((int)&v2, 9, 209, COERCE_INT(0.0), 1, 512);
    v4 = 0;
    v1 = REGetGlobalTimer();
    AbsoluteTime = CRETimer::GetAbsoluteTime(v1);
    sub_10015E0B((int)&AbsoluteTime);
    j_nullsub_44((int)&v2);
    v4 = -1;
    if ( v2 )
      Outpop::Utility::Ref_Object::release(v2);
  }
}
