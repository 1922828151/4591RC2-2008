/*
 * func-name: ??0SoundMgr@@QAE@ABV0@@Z_0
 * func-address: 0x100ec420
 * callers: 0x10015613
 * callees: 0x1000a899, 0x10019d5d
 */

SoundMgr *__thiscall SoundMgr::SoundMgr(SoundMgr *this, const struct SoundMgr *a2)
{
  *(_DWORD *)this = &SoundMgr::`vftable';
  sub_10019D5D((int)a2 + 4);
  sub_10019D5D((int)a2 + 16);
  sub_1000A899((int)a2 + 28);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((float *)this + 13) = *((float *)a2 + 13);
  *((float *)this + 14) = *((float *)a2 + 14);
  *((float *)this + 15) = *((float *)a2 + 15);
  *((float *)this + 16) = *((float *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  return this;
}
