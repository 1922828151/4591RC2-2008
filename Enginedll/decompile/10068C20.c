/*
 * func-name: ??0Canvas@@IAE@XZ
 * func-address: 0x10068c20
 * callers: none
 * callees: 0x101a251c
 */

Canvas *__thiscall Canvas::Canvas(Canvas *this)
{
  *(_DWORD *)this = &Canvas::`vftable';
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  memset(this, 0, 0x54u);
  *((float *)this + 13) = 1.0;
  *((float *)this + 14) = 1.0;
  return this;
}
