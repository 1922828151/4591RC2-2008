/*
 * func-name: ?Instance@SoundMgr@@SAPAV1@XZ_0
 * func-address: 0x100e9df0
 * callers: 0x10010bae
 * callees: 0x1001805c, 0x102c9f53
 */

struct SoundMgr *__cdecl SoundMgr::Instance()
{
  if ( (dword_103B5DC8 & 1) == 0 )
  {
    dword_103B5DC8 |= 1u;
    SoundMgr::SoundMgr((SoundMgr *)&unk_103B5D70);
    atexit(sub_103058D0);
  }
  return (struct SoundMgr *)&unk_103B5D70;
}
