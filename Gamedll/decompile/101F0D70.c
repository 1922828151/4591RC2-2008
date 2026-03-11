/*
 * func-name: sub_101F0D70
 * func-address: 0x101f0d70
 * callers: 0x10011874
 * callees: none
 */

int __stdcall sub_101F0D70(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // ecx

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  v3 = v2 + 4;
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
    return sub_1000A119((char)a1);
  v4 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
  *((_DWORD *)Stream + 3) = v3;
  return sub_1000A119(v4);
}
