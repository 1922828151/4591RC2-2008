/*
 * func-name: sub_102155B0
 * func-address: 0x102155b0
 * callers: 0x1001922c
 * callees: 0x10009e6c, 0x1001811a
 */

int __stdcall sub_102155B0(Event *Format)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  unsigned int v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // esi

  Stream = Event::GetStream(Format);
  v2 = *((_DWORD *)Stream + 3);
  v3 = *((_DWORD *)Stream + 2);
  if ( v2 + 4 > v3 )
  {
    v4 = (int)Format;
  }
  else
  {
    v4 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v2 + 4;
  }
  v5 = *((_DWORD *)Stream + 3);
  if ( v5 + 4 > v3 )
  {
    sub_10009E6C();
    return sub_1001811A(v4, (wchar_t)Format);
  }
  else
  {
    v6 = *(_DWORD *)(v5 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v5 + 4;
    sub_10009E6C();
    return sub_1001811A(v4, v6);
  }
}
