/*
 * func-name: ?SetMaxPriorityNum@SoundMgr@@QAEXHM@Z_0
 * func-address: 0x100e9520
 * callers: 0x10014713
 * callees: none
 */

void __thiscall SoundMgr::SetMaxPriorityNum(SoundMgr *this, int a2, float a3)
{
  if ( *((float *)this + 14) < (double)a3 )
  {
    *((float *)this + 14) = a3;
    *((_DWORD *)this + 12) = a2;
  }
}
