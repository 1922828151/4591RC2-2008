/*
 * func-name: sub_102ACD80
 * func-address: 0x102acd80
 * callers: 0x100068e8
 * callees: 0x1001a4c4, 0x102c9d98
 */

int sub_102ACD80()
{
  int result; // eax
  Outpop::Utility::Lock *lock; // edi
  _DWORD *v2; // eax
  int v3; // [esp-4h] [ebp-20h]

  result = dword_103B8094;
  if ( !dword_103B8094 )
  {
    lock = (Outpop::Utility::Lock *)Outpop::Utility::Singleton_Manager::get_lock();
    Outpop::Utility::Lock::lock(lock);
    if ( !dword_103B8094 )
    {
      v2 = operator new(0x14u);
      if ( v2 )
      {
        *v2 = 0;
        v2[2] = 0;
        v2[1] = 0;
        v2[4] = 0;
      }
      else
      {
        v2 = 0;
      }
      v3 = (int)v2;
      dword_103B8094 = (int)v2;
      Outpop::Utility::Singleton_Manager::instance();
      sub_1001A4C4(v3);
    }
    Outpop::Utility::Lock::unlock(lock);
    return dword_103B8094;
  }
  return result;
}
