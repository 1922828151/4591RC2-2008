/*
 * func-name: sub_102AD0B0
 * func-address: 0x102ad0b0
 * callers: 0x1000e56b
 * callees: 0x1000911a, 0x100101c2, 0x102c9d98
 */

int sub_102AD0B0()
{
  int result; // eax
  Outpop::Utility::Lock *lock; // esi
  int v2; // eax
  int v3; // [esp-4h] [ebp-20h]
  int v4; // [esp+0h] [ebp-1Ch]
  int v5; // [esp+4h] [ebp-18h]

  result = dword_103B8098;
  if ( !dword_103B8098 )
  {
    lock = (Outpop::Utility::Lock *)Outpop::Utility::Singleton_Manager::get_lock();
    Outpop::Utility::Lock::lock(lock);
    if ( !dword_103B8098 )
    {
      if ( operator new(0xF0u) )
        v2 = sub_100101C2(v4, v5);
      else
        v2 = 0;
      v3 = v2;
      dword_103B8098 = v2;
      Outpop::Utility::Singleton_Manager::instance();
      sub_1000911A(v3);
    }
    Outpop::Utility::Lock::unlock(lock);
    return dword_103B8098;
  }
  return result;
}
