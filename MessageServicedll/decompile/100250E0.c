/*
 * func-name: ??0Request_Ack@Message@Outpop@@QAE@AAVContext@12@@Z
 * func-address: 0x100250e0
 * callers: 0x100052a0
 * callees: 0x10002960, 0x100278e0, 0x10027af0
 */

Outpop::Message::Request_Ack *__thiscall Outpop::Message::Request_Ack::Request_Ack(
        Outpop::Message::Request_Ack *this,
        struct Outpop::Message::Context *a2)
{
  char v4; // [esp+13h] [ebp-15h] BYREF
  Outpop::Message::Request_Ack *v5; // [esp+14h] [ebp-14h]
  char *v6; // [esp+18h] [ebp-10h]
  int v7; // [esp+24h] [ebp-4h]

  v5 = this;
  *((_DWORD *)this + 1) = a2;
  *(_DWORD *)this = &Outpop::Message::Request_Ack::`vftable';
  v6 = (char *)this + 8;
  sub_100278E0((char *)this + 8, &a2);
  v7 = 1;
  a2 = (Outpop::Message::Request_Ack *)((char *)this + 48);
  sub_100278E0((char *)this + 48, &v4);
  LOBYTE(v7) = 3;
  Outpop::Utility::Lock::Lock((Outpop::Message::Request_Ack *)((char *)this + 88));
  LOBYTE(v7) = 4;
  Outpop::Utility::Lock::Lock((Outpop::Message::Request_Ack *)((char *)this + 112));
  LOBYTE(v7) = 5;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 36) = sub_10002960();
  *((_DWORD *)this + 37) = 0;
  LOBYTE(v7) = 6;
  *((_DWORD *)this + 39) = sub_10002960();
  *((_DWORD *)this + 40) = 0;
  *((_BYTE *)this + 164) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  LOBYTE(v7) = 8;
  sub_10027AF0();
  return this;
}
