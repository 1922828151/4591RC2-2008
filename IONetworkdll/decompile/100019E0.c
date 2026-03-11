/*
 * func-name: ??0Security@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x100019e0
 * callers: 0x10001b30
 * callees: none
 */

Outpop::IONetwork::Security *__thiscall Outpop::IONetwork::Security::Security(
        Outpop::IONetwork::Security *this,
        const struct Outpop::IONetwork::Security *a2)
{
  Outpop::IONetwork::Security *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::IONetwork::Security::`vftable';
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
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  return result;
}
