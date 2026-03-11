/*
 * func-name: sub_102AC2F0
 * func-address: 0x102ac2f0
 * callers: 0x10013d18
 * callees: 0x1000be9c, 0x1001acc6, 0x102c9d98
 */

int sub_102AC2F0()
{
  int result; // eax
  Outpop::Utility::Lock *lock; // esi
  int v2; // eax
  int v3; // [esp-4h] [ebp-20h]
  int v4; // [esp+0h] [ebp-1Ch]
  int v5; // [esp+4h] [ebp-18h]

  result = dword_103B8090;
  if ( !dword_103B8090 )
  {
    lock = (Outpop::Utility::Lock *)Outpop::Utility::Singleton_Manager::get_lock();
    Outpop::Utility::Lock::lock(lock);
    if ( !dword_103B8090 )
    {
      if ( operator new(0x28u) )
        v2 = sub_1000BE9C(v4, v5);
      else
        v2 = 0;
      v3 = v2;
      dword_103B8090 = v2;
      Outpop::Utility::Singleton_Manager::instance();
      sub_1001ACC6(v3);
    }
    Outpop::Utility::Lock::unlock(lock);
    return dword_103B8090;
  }
  return result;
}
