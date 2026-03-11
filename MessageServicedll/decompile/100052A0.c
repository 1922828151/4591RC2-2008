/*
 * func-name: ??0Context@Message@Outpop@@QAE@XZ
 * func-address: 0x100052a0
 * callers: 0x1000c3b0
 * callees: 0x10002960, 0x10007da0, 0x1000e240, 0x10010740, 0x100131c0, 0x1001ab90, 0x1001ef10, 0x100203a0, 0x10020ec0, 0x10024470, 0x100250e0, 0x10028de0, 0x100295c0
 */

Outpop::Message::Context *__thiscall Outpop::Message::Context::Context(struct Outpop::Message::Request_Ack **this)
{
  Outpop::Utility::Dispatch_Thread *v2; // eax
  Outpop::Utility::Dispatch_Thread *v3; // edi
  Outpop::Message::IO_Thread *v4; // eax
  struct Outpop::Message::Request_Ack *v5; // eax
  Outpop::Message::Acceptor_Manager *v6; // eax
  struct Outpop::Message::Request_Ack *v7; // eax
  Outpop::Message::Connector_Manager *v8; // eax
  struct Outpop::Message::Request_Ack *v9; // eax
  Outpop::Message::Channel_Manager *v10; // eax
  struct Outpop::Message::Request_Ack *v11; // eax
  Outpop::Message::Message_Sender *v12; // eax
  struct Outpop::Message::Request_Ack *v13; // eax
  Outpop::Message::Handler_Manager *v14; // eax
  struct Outpop::Message::Request_Ack *v15; // eax
  Outpop::Message::Request_Ack *v16; // eax
  struct Outpop::Message::Request_Ack *v17; // eax
  Outpop::Utility::Dispatch_Thread *v18; // eax
  struct Outpop::Message::Request_Ack *v19; // eax
  Outpop::Message::Synch_Ack_Handler *v20; // eax
  struct Outpop::Message::Request_Ack *v21; // eax
  Outpop::Message::Remote_Event_Manager *v22; // eax
  struct Outpop::Message::Request_Ack *v23; // eax
  char v25; // [esp+13h] [ebp-15h] BYREF
  Outpop::Message::Context *v26; // [esp+14h] [ebp-14h]
  Outpop::Utility::Dispatch_Thread *v27; // [esp+18h] [ebp-10h]
  int v28; // [esp+24h] [ebp-4h]

  v26 = (Outpop::Message::Context *)this;
  *this = (struct Outpop::Message::Request_Ack *)&Outpop::Message::Context::`vftable';
  this[2] = (struct Outpop::Message::Request_Ack *)sub_10002960();
  this[3] = 0;
  v28 = 0;
  this[5] = (struct Outpop::Message::Request_Ack *)sub_10002960();
  this[6] = 0;
  LOBYTE(v28) = 1;
  v27 = (Outpop::Utility::Dispatch_Thread *)(this + 23);
  sub_10007DA0(this + 23, &v25);
  LOBYTE(v28) = 3;
  *((_BYTE *)this + 84) = 0;
  this[20] = 0;
  this[22] = (struct Outpop::Message::Request_Ack *)5000;
  this[13] = (struct Outpop::Message::Request_Ack *)1;
  this[14] = 0;
  v2 = (Outpop::Utility::Dispatch_Thread *)operator new(0xA4u);
  v3 = v2;
  v27 = v2;
  LOBYTE(v28) = 4;
  if ( v2 )
  {
    Outpop::Utility::Dispatch_Thread::Dispatch_Thread(v2);
    *(_DWORD *)v3 = &Outpop::Utility::Dispatch_Thread::`vftable';
  }
  else
  {
    v3 = 0;
  }
  LOBYTE(v28) = 3;
  this[15] = v3;
  v4 = (Outpop::Message::IO_Thread *)operator new(0x70u);
  v27 = v4;
  LOBYTE(v28) = 5;
  if ( v4 )
    v5 = (struct Outpop::Message::Request_Ack *)Outpop::Message::IO_Thread::IO_Thread(v4);
  else
    v5 = 0;
  LOBYTE(v28) = 3;
  this[16] = v5;
  v6 = (Outpop::Message::Acceptor_Manager *)operator new(0x5Cu);
  v27 = v6;
  LOBYTE(v28) = 6;
  if ( v6 )
    v7 = (struct Outpop::Message::Request_Ack *)Outpop::Message::Acceptor_Manager::Acceptor_Manager(
                                                  v6,
                                                  (struct Outpop::Message::Context *)this);
  else
    v7 = 0;
  LOBYTE(v28) = 3;
  this[7] = v7;
  v8 = (Outpop::Message::Connector_Manager *)operator new(0x84u);
  v27 = v8;
  LOBYTE(v28) = 7;
  if ( v8 )
    v9 = (struct Outpop::Message::Request_Ack *)Outpop::Message::Connector_Manager::Connector_Manager(
                                                  v8,
                                                  (struct Outpop::Message::Context *)this);
  else
    v9 = 0;
  LOBYTE(v28) = 3;
  this[9] = v9;
  v10 = (Outpop::Message::Channel_Manager *)operator new(0xA8u);
  v27 = v10;
  LOBYTE(v28) = 8;
  if ( v10 )
    v11 = (struct Outpop::Message::Request_Ack *)Outpop::Message::Channel_Manager::Channel_Manager(
                                                   v10,
                                                   (struct Outpop::Message::Context *)this);
  else
    v11 = 0;
  LOBYTE(v28) = 3;
  this[8] = v11;
  v12 = (Outpop::Message::Message_Sender *)operator new(0x14u);
  v27 = v12;
  LOBYTE(v28) = 9;
  if ( v12 )
    v13 = (struct Outpop::Message::Request_Ack *)Outpop::Message::Message_Sender::Message_Sender(
                                                   v12,
                                                   (struct Outpop::Message::Context *)this);
  else
    v13 = 0;
  LOBYTE(v28) = 3;
  this[10] = v13;
  v14 = (Outpop::Message::Handler_Manager *)operator new(0x44u);
  v27 = v14;
  LOBYTE(v28) = 10;
  if ( v14 )
    v15 = (struct Outpop::Message::Request_Ack *)Outpop::Message::Handler_Manager::Handler_Manager(v14);
  else
    v15 = 0;
  LOBYTE(v28) = 3;
  this[12] = v15;
  v16 = (Outpop::Message::Request_Ack *)operator new(0xB8u);
  v27 = v16;
  LOBYTE(v28) = 11;
  if ( v16 )
    v17 = (struct Outpop::Message::Request_Ack *)Outpop::Message::Request_Ack::Request_Ack(
                                                   v16,
                                                   (struct Outpop::Message::Context *)this);
  else
    v17 = 0;
  LOBYTE(v28) = 3;
  this[11] = v17;
  v18 = (Outpop::Utility::Dispatch_Thread *)operator new(0xBCu);
  v27 = v18;
  LOBYTE(v28) = 12;
  if ( v18 )
    v19 = (struct Outpop::Message::Request_Ack *)sub_1001AB90(v18);
  else
    v19 = 0;
  LOBYTE(v28) = 3;
  this[19] = v19;
  v20 = (Outpop::Message::Synch_Ack_Handler *)operator new(8u);
  v27 = v20;
  LOBYTE(v28) = 13;
  if ( v20 )
    v21 = (struct Outpop::Message::Request_Ack *)Outpop::Message::Synch_Ack_Handler::Synch_Ack_Handler(v20, this[11]);
  else
    v21 = 0;
  LOBYTE(v28) = 3;
  this[17] = v21;
  v22 = (Outpop::Message::Remote_Event_Manager *)operator new(0x54u);
  v27 = v22;
  LOBYTE(v28) = 14;
  if ( v22 )
    v23 = (struct Outpop::Message::Request_Ack *)Outpop::Message::Remote_Event_Manager::Remote_Event_Manager(
                                                   v22,
                                                   (struct Outpop::Message::Context *)this);
  else
    v23 = 0;
  this[18] = v23;
  return (Outpop::Message::Context *)this;
}
