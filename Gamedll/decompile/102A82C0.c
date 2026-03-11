/*
 * func-name: sub_102A82C0
 * func-address: 0x102a82c0
 * callers: none
 * callees: 0x10001f3c, 0x100068bb, 0x102c9d98
 */

int sub_102A82C0()
{
  int result; // eax
  Outpop::Utility::Lock *lock; // edi
  void *v2; // esi
  int v3; // eax
  int v4; // [esp-4h] [ebp-28h]
  char v5; // [esp+Fh] [ebp-15h] BYREF
  Outpop::Utility::Lock *v6; // [esp+10h] [ebp-14h]
  void *v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+20h] [ebp-4h]

  result = dword_103B808C;
  if ( !dword_103B808C )
  {
    lock = (Outpop::Utility::Lock *)Outpop::Utility::Singleton_Manager::get_lock();
    v6 = lock;
    Outpop::Utility::Lock::lock(lock);
    v8 = 0;
    if ( !dword_103B808C )
    {
      v2 = operator new(0x28u);
      v7 = v2;
      LOBYTE(v8) = 1;
      if ( v2 )
      {
        sub_10001F3C((int)&v5, (int)&v5);
        v3 = (int)v2;
      }
      else
      {
        v3 = 0;
      }
      v4 = v3;
      LOBYTE(v8) = 0;
      dword_103B808C = v3;
      Outpop::Utility::Singleton_Manager::instance();
      sub_100068BB(v4);
    }
    v8 = -1;
    Outpop::Utility::Lock::unlock(lock);
    return dword_103B808C;
  }
  return result;
}
