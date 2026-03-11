/*
 * func-name: ??0SoundEmitter@@QAE@ABV0@@Z
 * func-address: 0x10024040
 * callers: none
 * callees: 0x10021820
 */

SoundEmitter *__thiscall SoundEmitter::SoundEmitter(SoundEmitter *this, const struct SoundEmitter *a2)
{
  *(_DWORD *)this = &SoundEmitter::`vftable';
  sub_10021820((_DWORD *)this + 1, (int)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((float *)this + 11) = *((float *)a2 + 11);
  return this;
}
