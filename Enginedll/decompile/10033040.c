/*
 * func-name: ??0AsyncLoader@@QAE@ABV0@@Z
 * func-address: 0x10033040
 * callers: none
 * callees: 0x100230f0, 0x10030ef0, 0x10032340, 0x10032760, 0x10032d30, 0x10032fd0
 */

AsyncLoader *__thiscall AsyncLoader::AsyncLoader(AsyncLoader *this, const struct AsyncLoader *a2)
{
  *(_DWORD *)this = &AsyncLoader::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  sub_100230F0((_DWORD *)this + 2, (int)a2 + 8);
  sub_10032760((_DWORD *)this + 6, (_BYTE *)a2 + 24);
  sub_10032FD0((_DWORD *)this + 16, (_BYTE *)a2 + 64);
  sub_10032D30((_DWORD *)this + 26, (int)a2 + 104);
  sub_10032D30((_DWORD *)this + 29, (int)a2 + 116);
  *((_DWORD *)this + 32) = *((_DWORD *)a2 + 32);
  *((_DWORD *)this + 33) = *((_DWORD *)a2 + 33);
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 35);
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 39);
  *((_DWORD *)this + 40) = *((_DWORD *)a2 + 40);
  *((_DWORD *)this + 41) = *((_DWORD *)a2 + 41);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  *((_DWORD *)this + 43) = *((_DWORD *)a2 + 43);
  sub_10030EF0((_DWORD *)this + 44, (_BYTE *)a2 + 176);
  sub_10030EF0((_DWORD *)this + 54, (_BYTE *)a2 + 216);
  sub_10030EF0((_DWORD *)this + 64, (_BYTE *)a2 + 256);
  sub_10030EF0((_DWORD *)this + 74, (_BYTE *)a2 + 296);
  sub_10030EF0((_DWORD *)this + 84, (_BYTE *)a2 + 336);
  sub_10030EF0((_DWORD *)this + 94, (_BYTE *)a2 + 376);
  sub_10032340((_DWORD *)this + 104, (_BYTE *)a2 + 416);
  return this;
}
