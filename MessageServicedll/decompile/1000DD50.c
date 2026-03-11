/*
 * func-name: sub_1000DD50
 * func-address: 0x1000dd50
 * callers: 0x10019990
 * callees: 0x1000dc60, 0x1000de00, 0x100295c0
 */

int sub_1000DD50()
{
  int result; // eax
  Outpop::Utility::Ref_Object **v1; // eax
  Outpop::Utility::Ref_Object **v2; // eax

  result = dword_100462A0;
  if ( !dword_100462A0 )
  {
    Outpop::Utility::Lock::lock(Outpop::Utility::Singleton_Manager::g_singleton_lock_);
    if ( !dword_100462A0 )
    {
      v1 = (Outpop::Utility::Ref_Object **)operator new(4u);
      if ( v1 )
        v2 = sub_1000DC60(v1);
      else
        v2 = 0;
      dword_100462A0 = (int)v2;
      Outpop::Utility::Singleton_Manager::instance();
      sub_1000DE00();
    }
    Outpop::Utility::Lock::unlock(Outpop::Utility::Singleton_Manager::g_singleton_lock_);
    return dword_100462A0;
  }
  return result;
}
