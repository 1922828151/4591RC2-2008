/*
 * func-name: ??0Logger@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x100024d0
 * callers: none
 * callees: 0x10002780
 */

Outpop::Utility::Logger *__thiscall Outpop::Utility::Logger::Logger(
        Outpop::Utility::Logger *this,
        const struct Outpop::Utility::Logger *a2)
{
  sub_10002780(this, a2);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  sub_10002780((char *)this + 48, (char *)a2 + 48);
  sub_10002780((char *)this + 92, (char *)a2 + 92);
  *((_BYTE *)this + 136) = *((_BYTE *)a2 + 136);
  *((_BYTE *)this + 137) = *((_BYTE *)a2 + 137);
  *((_BYTE *)this + 138) = *((_BYTE *)a2 + 138);
  *((_BYTE *)this + 139) = *((_BYTE *)a2 + 139);
  *((_BYTE *)this + 140) = *((_BYTE *)a2 + 140);
  *((_BYTE *)this + 141) = *((_BYTE *)a2 + 141);
  *((_BYTE *)this + 142) = *((_BYTE *)a2 + 142);
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 39);
  *((_DWORD *)this + 40) = *((_DWORD *)a2 + 40);
  *((_DWORD *)this + 41) = *((_DWORD *)a2 + 41);
  *((_BYTE *)this + 168) = *((_BYTE *)a2 + 168);
  return this;
}
