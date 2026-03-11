/*
 * func-name: sub_102B42B0
 * func-address: 0x102b42b0
 * callers: 0x100103b6
 * callees: 0x1000df35, 0x1000e56b
 */

void __stdcall sub_102B42B0(Outpop::Utility::Stream_Base **a1)
{
  int readable; // edi
  int v2; // eax
  Outpop::Message::Message *v3; // edi
  int catalog; // eax
  int v5; // eax
  Event *v6; // edi
  unsigned int v7; // ebx
  char local_id; // al
  int v9; // eax
  int v10; // [esp+8h] [ebp-Ch]
  int v11; // [esp+8h] [ebp-Ch]
  int v12; // [esp+Ch] [ebp-8h]

  readable = Outpop::Utility::Stream_Base::get_readable(*a1);
  v2 = sub_1000E56B(v10, v12);
  *(_DWORD *)(v2 + 228) += readable;
  ++*(_DWORD *)(v2 + 232);
  v3 = *a1;
  Outpop::Message::Message::get_type(*a1);
  catalog = Outpop::Message::Message::get_catalog(v3);
  v5 = EventAttemper::Instance(catalog, v11);
  v6 = (Event *)EventAttemper::AddEvent(v5);
  Event::SetRequestMessage(v6, a1);
  v7 = -1;
  local_id = Outpop::Message::Message::get_local_id(*a1);
  v9 = sub_1000DF35(local_id);
  if ( v9 )
    v7 = *(_DWORD *)(v9 + 4);
  Event::SetOwner(v6, v7);
}
