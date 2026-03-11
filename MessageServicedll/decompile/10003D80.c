/*
 * func-name: ??0Channel_Manager@Message@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10003d80
 * callers: none
 * callees: 0x10003f00, 0x10007100, 0x10007360
 */

Outpop::Message::Channel_Manager *__thiscall Outpop::Message::Channel_Manager::Channel_Manager(
        Outpop::Message::Channel_Manager *this,
        const struct Outpop::Message::Channel_Manager *a2)
{
  *(_DWORD *)this = Outpop::IONetwork::Channel_Error_Handler::`vftable';
  *((_DWORD *)this + 1) = Outpop::IONetwork::Channel_Handler::`vftable';
  *(_DWORD *)this = &Outpop::Message::Channel_Manager::`vftable'{for `Outpop::IONetwork::Channel_Error_Handler'};
  *((_DWORD *)this + 1) = &Outpop::Message::Channel_Manager::`vftable'{for `Outpop::IONetwork::Channel_Handler'};
  sub_10003F00((char *)this + 8);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 21);
  sub_10007100((char *)this + 88);
  *((_DWORD *)this + 32) = *((_DWORD *)a2 + 32);
  sub_10007360((int)a2 + 132, (int)this + 132);
  sub_10007360((int)a2 + 148, (int)this + 148);
  *((_BYTE *)this + 164) = *((_BYTE *)a2 + 164);
  return this;
}
