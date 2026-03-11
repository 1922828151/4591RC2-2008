/*
 * func-name: ??0Task@Utility@Outpop@@QAE@XZ
 * func-address: 0x1000cdb0
 * callers: 0x10003e80, 0x1000a7c0, 0x10018660
 * callees: 0x1000dbe0
 */

Outpop::Utility::Task *__thiscall Outpop::Utility::Task::Task(Outpop::Utility::Task *this)
{
  char v3; // [esp+Bh] [ebp-15h] BYREF
  Outpop::Utility::Task *v4; // [esp+Ch] [ebp-14h]
  char *v5; // [esp+10h] [ebp-10h]
  int v6; // [esp+1Ch] [ebp-4h]

  v4 = this;
  *(_DWORD *)this = &Outpop::Utility::Task::`vftable';
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v5 = (char *)this + 12;
  sub_1000DBE0((char *)this + 12, &v3);
  v6 = 1;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 52));
  return this;
}
