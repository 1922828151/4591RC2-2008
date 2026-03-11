/*
 * func-name: ??0Connect_Bluider_Process@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10016580
 * callers: none
 * callees: none
 */

Outpop::IONetwork::Connect_Bluider_Process *__thiscall Outpop::IONetwork::Connect_Bluider_Process::Connect_Bluider_Process(
        Outpop::IONetwork::Connect_Bluider_Process *this,
        const struct Outpop::IONetwork::Connect_Bluider_Process *a2)
{
  Outpop::IONetwork::Connect_Bluider_Process *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::IONetwork::Bluider_Process::`vftable';
  *(_DWORD *)this = &Outpop::IONetwork::Connect_Bluider_Process::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_BYTE *)this + 44) = *((_BYTE *)a2 + 44);
  return result;
}
