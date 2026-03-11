/*
 * func-name: ??0Sound@@QAE@ABV0@@Z
 * func-address: 0x100169a0
 * callers: none
 * callees: none
 */

Sound *__thiscall Sound::Sound(Sound *this, const struct Sound *a2)
{
  Sound *result; // eax

  result = this;
  *(_DWORD *)this = &Sound::`vftable';
  *((float *)this + 1) = *((float *)a2 + 1);
  return result;
}
