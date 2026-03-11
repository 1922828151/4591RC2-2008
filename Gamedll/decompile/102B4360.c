/*
 * func-name: sub_102B4360
 * func-address: 0x102b4360
 * callers: 0x10001ce9
 * callees: 0x1000df35, 0x1000e56b
 */

void __stdcall sub_102B4360(Outpop::Message::Message **a1, Outpop::Utility::Stream_Base **a2, int a3)
{
  int readable; // esi
  int v4; // eax
  Outpop::Message::Message *v5; // esi
  int catalog; // eax
  int v7; // eax
  Event *v8; // esi
  unsigned int v9; // ebx
  char local_id; // al
  int v11; // eax
  int v12; // [esp+8h] [ebp-Ch]
  int v13; // [esp+8h] [ebp-Ch]
  int v14; // [esp+Ch] [ebp-8h]

  readable = Outpop::Utility::Stream_Base::get_readable(*a2);
  v4 = sub_1000E56B(v12, v14);
  *(_DWORD *)(v4 + 228) += readable;
  ++*(_DWORD *)(v4 + 232);
  v5 = *a1;
  Outpop::Message::Message::get_type(*a1);
  catalog = Outpop::Message::Message::get_catalog(v5);
  v7 = EventAttemper::Instance(catalog, v13);
  v8 = (Event *)EventAttemper::AddEvent(v7);
  Event::SetRequestMessage(v8, a1);
  Event::SetAckMessage(v8, a2);
  Event::SetAct(v8, a3);
  v9 = -1;
  local_id = Outpop::Message::Message::get_local_id(*a2);
  v11 = sub_1000DF35(local_id);
  if ( v11 )
    v9 = *(_DWORD *)(v11 + 4);
  Event::SetOwner(v8, v9);
}
