/*
 * func-name: sub_102A7240
 * func-address: 0x102a7240
 * callers: 0x10011abd
 * callees: 0x1000ac95, 0x102c9d98
 */

int sub_102A7240()
{
  int result; // eax
  Outpop::Utility::Lock *lock; // esi
  void *v2; // [esp-4h] [ebp-1Ch]

  result = dword_103B8088;
  if ( !dword_103B8088 )
  {
    lock = (Outpop::Utility::Lock *)Outpop::Utility::Singleton_Manager::get_lock();
    Outpop::Utility::Lock::lock(lock);
    if ( !dword_103B8088 )
    {
      v2 = operator new(1u);
      dword_103B8088 = (int)v2;
      Outpop::Utility::Singleton_Manager::instance();
      sub_1000AC95((int)v2);
    }
    Outpop::Utility::Lock::unlock(lock);
    return dword_103B8088;
  }
  return result;
}
