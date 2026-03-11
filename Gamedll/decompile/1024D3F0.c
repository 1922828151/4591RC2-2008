/*
 * func-name: sub_1024D3F0
 * func-address: 0x1024d3f0
 * callers: 0x100042d2
 * callees: 0x100026a3, 0x1001664e, 0x10016a4f, 0x102c9ea8
 */

int __stdcall sub_1024D3F0(Event *a1)
{
  struct BinStream *Stream; // eax
  unsigned int v2; // edx
  unsigned int v3; // ecx
  int v4; // edx
  Event *v5; // ebx
  char Owner; // al
  int result; // eax

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3) + 4;
  v3 = *((_DWORD *)Stream + 2);
  if ( v2 <= v3 )
    *((_DWORD *)Stream + 3) = v2;
  v4 = *((_DWORD *)Stream + 3);
  if ( v4 + 4 > v3 )
  {
    v5 = a1;
  }
  else
  {
    v5 = *(Event **)(v4 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v4 + 4;
  }
  Owner = Event::GetOwner(a1);
  result = sub_10016A4F(Owner);
  if ( result )
  {
    result = _RTDynamicCast(
               *(_DWORD *)(result + 296),
               0,
               &GameClient::ControlModule `RTTI Type Descriptor',
               &GameClient::AISingleBrain `RTTI Type Descriptor');
    if ( result )
    {
      if ( v5 == (Event *)19002 )
        return sub_1001664E();
      else
        return sub_100026A3();
    }
  }
  return result;
}
