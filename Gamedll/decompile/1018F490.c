/*
 * func-name: sub_1018F490
 * func-address: 0x1018f490
 * callers: 0x100122dd
 * callees: none
 */

int __stdcall sub_1018F490(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // ecx

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  v3 = v2 + 4;
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
    return sub_10001DFC((int)a1);
  v4 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
  *((_DWORD *)Stream + 3) = v3;
  return sub_10001DFC(v4);
}
