/*
 * func-name: ??0EventAttemper@@QAE@ABV0@@Z
 * func-address: 0x100325e0
 * callers: none
 * callees: 0x10026cc0, 0x10030f60, 0x10030fd0, 0x10031ff0
 */

EventAttemper *__thiscall EventAttemper::EventAttemper(EventAttemper *this, const struct EventAttemper *a2)
{
  *(_DWORD *)this = &EventAttemper::`vftable';
  *((float *)this + 1) = *((float *)a2 + 1);
  sub_10030F60((_DWORD *)this + 2, (_BYTE *)a2 + 8);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  sub_10026CC0((_DWORD *)this + 13, (int)a2 + 52);
  sub_10030FD0((_DWORD *)this + 16, (_BYTE *)a2 + 64);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  sub_10026CC0((_DWORD *)this + 27, (int)a2 + 108);
  sub_10031FF0((_DWORD *)this + 30, (_BYTE *)a2 + 120);
  sub_10026CC0((_DWORD *)this + 40, (int)a2 + 160);
  return this;
}
