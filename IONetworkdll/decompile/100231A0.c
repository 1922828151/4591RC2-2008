/*
 * func-name: ??0Comminute_Container@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x100231a0
 * callers: 0x1002cbf0, 0x10042a80
 * callees: 0x100248f0
 */

Outpop::IONetwork::Comminute_Container *__thiscall Outpop::IONetwork::Comminute_Container::Comminute_Container(
        Outpop::IONetwork::Comminute_Container *this)
{
  char v3; // [esp+Bh] [ebp-11h] BYREF
  Outpop::IONetwork::Comminute_Container *v4; // [esp+Ch] [ebp-10h]
  int v5; // [esp+18h] [ebp-4h]

  v4 = this;
  sub_100248F0(this, &v3);
  v5 = 1;
  *((_WORD *)this + 20) = 0;
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::IONetwork::Comminute_Container *)((char *)this + 44));
  return this;
}
