/*
 * func-name: ??0EventAttemper@@QAE@XZ
 * func-address: 0x1016f8d0
 * callers: 0x1016f9a0
 * callees: 0x1010ec50, 0x10170080, 0x10170100, 0x10170ed0
 */

EventAttemper *__thiscall EventAttemper::EventAttemper(EventAttemper *this)
{
  char v3; // [esp+Fh] [ebp-11h] BYREF
  EventAttemper *v4; // [esp+10h] [ebp-10h]
  int v5; // [esp+1Ch] [ebp-4h]

  *((float *)this + 1) = 0.0;
  v4 = this;
  *(_DWORD *)this = &EventAttemper::`vftable';
  sub_10170080(&v3, &v3);
  v5 = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 14) = sub_1010EC50();
  *((_DWORD *)this + 15) = 0;
  LOBYTE(v5) = 1;
  sub_10170100(&v3, &v3);
  LOBYTE(v5) = 2;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 28) = sub_1010EC50();
  *((_DWORD *)this + 29) = 0;
  LOBYTE(v5) = 3;
  sub_10170ED0(&v3, &v3);
  LOBYTE(v5) = 4;
  *((_DWORD *)this + 41) = sub_1010EC50();
  *((_DWORD *)this + 42) = 0;
  return this;
}
