/*
 * func-name: ?SetMinPriorityNum@SoundMgr@@QAEXHM@Z_0
 * func-address: 0x100e94f0
 * callers: 0x10009f07
 * callees: none
 */

void __thiscall SoundMgr::SetMinPriorityNum(SoundMgr *this, int a2, float a3)
{
  if ( *((float *)this + 13) > (double)a3 )
  {
    *((float *)this + 13) = a3;
    *((_DWORD *)this + 11) = a2;
  }
}
