/*
 * func-name: ??0Binary_Stream@Utility@Outpop@@QAE@AAV012@HH_N@Z
 * func-address: 0x1000e6b0
 * callers: 0x1000e560
 * callees: 0x1000ed80
 */

Outpop::Utility::Binary_Stream *__thiscall Outpop::Utility::Binary_Stream::Binary_Stream(
        Outpop::Utility::Binary_Stream *this,
        struct Outpop::Utility::Binary_Stream *a2,
        int a3,
        int a4,
        bool a5)
{
  Outpop::Utility::Stream_Base::Stream_Base(this, a2, a3, a4, a5);
  *(_DWORD *)this = &Outpop::Utility::Binary_Stream::`vftable';
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_BYTE *)this + 48) = *((_BYTE *)a2 + 48);
  *((_WORD *)this + 25) = *((_WORD *)a2 + 25);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  return this;
}
