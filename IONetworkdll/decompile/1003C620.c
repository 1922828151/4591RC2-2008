/*
 * func-name: ??0Sequence_Container@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x1003c620
 * callers: 0x1002cbf0, 0x10042a80
 * callees: 0x1003d9a0
 */

Outpop::IONetwork::Sequence_Container *__thiscall Outpop::IONetwork::Sequence_Container::Sequence_Container(
        Outpop::IONetwork::Sequence_Container *this)
{
  char v3; // [esp+Dh] [ebp-17h] BYREF
  char v4; // [esp+Eh] [ebp-16h] BYREF
  char v5; // [esp+Fh] [ebp-15h] BYREF
  Outpop::IONetwork::Sequence_Container *v6; // [esp+10h] [ebp-14h]
  char *v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+20h] [ebp-4h]

  v6 = this;
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::IONetwork::Sequence_Container *)((char *)this + 4));
  v8 = 0;
  v7 = (char *)this + 40;
  sub_1003D9A0((char *)this + 40, &v3);
  LOBYTE(v8) = 2;
  v7 = (char *)this + 80;
  sub_1003D9A0((char *)this + 80, &v4);
  LOBYTE(v8) = 4;
  v7 = (char *)this + 120;
  sub_1003D9A0((char *)this + 120, &v5);
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_WORD *)this + 86) = 0x7FFF;
  *((_WORD *)this + 14) = 0;
  *((_WORD *)this + 15) = 0;
  *((_WORD *)this + 16) = 0;
  *((_WORD *)this + 17) = 0;
  *((_WORD *)this + 18) = 0;
  *((_WORD *)this + 19) = 0;
  return this;
}
