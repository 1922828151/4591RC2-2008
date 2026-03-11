/*
 * func-name: ??0Binary_Stream@Utility@Outpop@@QAE@H@Z
 * func-address: 0x1000e630
 * callers: none
 * callees: 0x1000ec50
 */

Outpop::Utility::Binary_Stream *__thiscall Outpop::Utility::Binary_Stream::Binary_Stream(
        Outpop::Utility::Binary_Stream *this,
        int a2)
{
  Outpop::Utility::Stream_Base::Stream_Base(this, a2);
  *(_DWORD *)this = &Outpop::Utility::Binary_Stream::`vftable';
  *((_BYTE *)this + 36) = 0;
  *((_WORD *)this + 19) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 3;
  *((_BYTE *)this + 48) = 1;
  *((_WORD *)this + 25) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  return this;
}
